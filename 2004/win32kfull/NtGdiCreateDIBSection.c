/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C00669D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0066DD4 (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C0066E74 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C0066F4C (GreCreateDIBitmapReal.c)
 *     GreGetDCDpiScaleValue @ 0x1C0102144 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtGdiCreateDIBSection(
        HDC a1,
        void *a2,
        int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        size_t Size,
        char a7,
        __int64 a8,
        ULONG64 a9)
{
  __int64 DIBitmapReal; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  int DCDpiScaleValue; // eax
  struct tagBITMAPINFO *v16; // rcx
  NTSTATUS v17; // esi
  HANDLE v18; // rax
  void *v19; // rsi
  _QWORD *v20; // r8
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 CurrentProcess; // rax
  ULONG v27; // ecx
  int v28; // [rsp+70h] [rbp-68h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-60h] BYREF
  struct tagBITMAPINFO *v30; // [rsp+80h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-50h] BYREF
  PVOID Object; // [rsp+90h] [rbp-48h] BYREF
  HANDLE v33[8]; // [rsp+98h] [rbp-40h] BYREF
  unsigned int BitmapBitsSize; // [rsp+F8h] [rbp+20h]

  DIBitmapReal = 0LL;
  v28 = 0;
  if ( a4 )
  {
    v30 = 0LL;
    BaseAddress = 0LL;
    bCaptureBitmapInfo(a4, a5, (unsigned int)Size, &v30);
    if ( (a7 & 0x10) != 0 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      v14 = (unsigned int)DCDpiScaleValue;
      if ( DCDpiScaleValue > 1 )
      {
        v16 = v30;
        if ( 0x7FFFFFFF / DCDpiScaleValue < (int)abs32(v30->bmiHeader.biHeight)
          || (v13 = (unsigned int)(v30->bmiHeader.biWidth >> 31),
              0x7FFFFFFF / DCDpiScaleValue < (int)((v13 ^ v30->bmiHeader.biWidth) - v13)) )
        {
          ExRaiseStatus(-1073741675);
        }
        v30->bmiHeader.biHeight *= DCDpiScaleValue;
        v16->bmiHeader.biWidth *= DCDpiScaleValue;
      }
    }
    if ( v30 )
    {
      BitmapBitsSize = GreGetBitmapBitsSize(v30, v13, v14);
      RegionSize = BitmapBitsSize;
      if ( !BitmapBitsSize )
      {
LABEL_19:
        FreeThreadBufferWithTag(v30);
        return DIBitmapReal;
      }
      if ( a2 )
      {
        v33[0] = (HANDLE)(a3 & 0xFFFF0000);
        RegionSize = BitmapBitsSize + (unsigned __int64)(unsigned __int16)a3;
        CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
        Object = 0LL;
        v17 = ObReferenceObjectByHandle(a2, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
        if ( v17 >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess(v24, v23, v25);
          v17 = MmMapViewOfSection(Object, CurrentProcess, &BaseAddress, 0LL, RegionSize, v33, &RegionSize, 1, 0, 4);
          if ( v17 < 0 )
            EngSetLastError(0x57u);
          ObfDereferenceObject(Object);
          goto LABEL_12;
        }
        v27 = 87;
      }
      else
      {
        v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
        a3 = 0;
        if ( v17 >= 0 )
          goto LABEL_12;
        v27 = 8;
      }
      EngSetLastError(v27);
LABEL_12:
      if ( v17 >= 0 )
      {
        Object = (char *)BaseAddress + (unsigned __int16)a3;
        v18 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        v19 = v18;
        v33[0] = v18;
        if ( v18
          && (DIBitmapReal = GreCreateDIBitmapReal(
                               a1,
                               a5,
                               Size,
                               BitmapBitsSize,
                               (__int64)a2,
                               a3,
                               (__int64)v18,
                               a7 & 0x14 | 2u,
                               a8,
                               0LL)) != 0 )
        {
          v20 = (_QWORD *)a9;
          if ( a9 >= MmUserProbeAddress )
            v20 = (_QWORD *)MmUserProbeAddress;
          *v20 = Object;
          v28 = 1;
        }
        else
        {
          EngSetLastError(0x57u);
        }
        if ( !v28 )
        {
          if ( DIBitmapReal )
          {
            bDeleteSurface(DIBitmapReal);
            DIBitmapReal = 0LL;
          }
          else
          {
            if ( v19 )
              MmUnsecureVirtualMemory(v19);
            if ( a2 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Object, &RegionSize, 0x8000u);
            }
          }
        }
      }
      goto LABEL_19;
    }
  }
  return DIBitmapReal;
}

/*
 * XREFs of _NtGdiCreateDIBSection@36 @ 0x768A6
 * Callers:
 *     <none>
 * Callees:
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     _GreGetBitmapBitsSize@4 @ 0x76F1A (_GreGetBitmapBitsSize@4.c)
 *     ?bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z @ 0x76FC6 (-bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z.c)
 *     _GreGetDCDpiScaleValue@4 @ 0x91320 (_GreGetDCDpiScaleValue@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiCreateDIBSection(
        HDC a1,
        HANDLE Handle,
        unsigned int a3,
        unsigned int a4,
        int a5,
        size_t MaxCount,
        int RegionSize,
        int a8,
        ULONG a9)
{
  int BitmapBitsSize; // ecx
  unsigned __int16 v10; // cx
  HANDLE v11; // eax
  _DWORD *v12; // ecx
  int CurrentProcess; // eax
  int DCDpiScaleValue; // eax
  int v16; // ebx
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  unsigned int v20; // edi
  int v21; // edx
  ULONG_PTR v22; // [esp-18h] [ebp-68h]
  unsigned int v23; // [esp+0h] [ebp-50h]
  struct tagBITMAPINFO **v24; // [esp+4h] [ebp-4Ch]
  _DWORD v25[2]; // [esp+10h] [ebp-40h] BYREF
  int v26; // [esp+18h] [ebp-38h]
  int v27; // [esp+1Ch] [ebp-34h]
  unsigned int v28; // [esp+20h] [ebp-30h]
  ULONG_PTR v29; // [esp+24h] [ebp-2Ch]
  PVOID Object; // [esp+28h] [ebp-28h] BYREF
  int DIBitmapReal; // [esp+2Ch] [ebp-24h]
  PVOID BaseAddress; // [esp+30h] [ebp-20h] BYREF
  KPROCESSOR_MODE AccessMode[4]; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  DIBitmapReal = 0;
  v27 = 0;
  if ( a4 )
  {
    a4 = 0;
    BaseAddress = 0;
    ms_exc.registration.TryLevel = 0;
    bCaptureBitmapInfo(MaxCount, (unsigned int)&a4, v23, v24);
    v29 = RegionSize;
    if ( (RegionSize & 0x10) != 0 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      v16 = DCDpiScaleValue;
      if ( DCDpiScaleValue > 1 )
      {
        v17 = *(_DWORD *)(a4 + 8);
        v18 = v17;
        if ( v17 < 0 )
          v18 = -v17;
        v19 = 0x7FFFFFFF / DCDpiScaleValue;
        if ( 0x7FFFFFFF / v16 < v18 )
          goto LABEL_31;
        v20 = a4;
        v21 = *(_DWORD *)(a4 + 4);
        if ( v21 < 0 )
          v21 = -v21;
        if ( v19 < v21 )
LABEL_31:
          ExRaiseStatus(-1073741675);
        *(_DWORD *)(a4 + 8) = v16 * v17;
        *(_DWORD *)(v20 + 4) *= v16;
      }
    }
    ms_exc.registration.TryLevel = -2;
    if ( a4 )
    {
      BitmapBitsSize = GreGetBitmapBitsSize(a4);
      v26 = BitmapBitsSize;
      RegionSize = BitmapBitsSize;
      if ( BitmapBitsSize )
      {
        if ( Handle )
        {
          v28 = a3;
          v25[0] = a3 & 0xFFFF0000;
          v25[1] = 0;
          RegionSize = BitmapBitsSize + (unsigned __int16)a3;
          AccessMode[0] = PsGetCurrentThreadPreviousMode();
          Object = 0;
          *(_DWORD *)AccessMode = ObReferenceObjectByHandle(Handle, 6u, _MmSectionObjectType, AccessMode[0], &Object, 0);
          if ( *(int *)AccessMode < 0 )
          {
            EngSetLastError(0x57u);
          }
          else
          {
            v22 = RegionSize;
            CurrentProcess = PsGetCurrentProcess();
            *(_DWORD *)AccessMode = MmMapViewOfSection(
                                      Object,
                                      CurrentProcess,
                                      &BaseAddress,
                                      0,
                                      v22,
                                      v25,
                                      &RegionSize,
                                      1,
                                      0,
                                      4);
            if ( *(int *)AccessMode < 0 )
              EngSetLastError(0x57u);
            ObfDereferenceObject(Object);
          }
          v10 = a3;
        }
        else
        {
          *(_DWORD *)AccessMode = ZwAllocateVirtualMemory(
                                    (HANDLE)0xFFFFFFFF,
                                    &BaseAddress,
                                    0,
                                    (PSIZE_T)&RegionSize,
                                    0x3000u,
                                    4u);
          v10 = 0;
          v28 = 0;
          if ( *(int *)AccessMode >= 0 )
            goto LABEL_7;
          EngSetLastError(8u);
          v10 = 0;
        }
        if ( *(int *)AccessMode >= 0 )
        {
LABEL_7:
          a3 = (unsigned int)BaseAddress + v10;
          v11 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
          Object = v11;
          if ( v11
            && (DIBitmapReal = GreCreateDIBitmapReal(a3, a4, a5, MaxCount, v26, Handle, v28, v11, v29 & 0x14 | 2, a8, 0)) != 0 )
          {
            ms_exc.registration.TryLevel = 1;
            v12 = (_DWORD *)a9;
            if ( a9 >= _MmUserProbeAddress )
              v12 = (_DWORD *)_MmUserProbeAddress;
            *v12 = a3;
            v27 = 1;
            ms_exc.registration.TryLevel = -2;
          }
          else
          {
            EngSetLastError(0x57u);
          }
          if ( !v27 )
          {
            if ( DIBitmapReal )
            {
              bDeleteSurface(DIBitmapReal);
              DIBitmapReal = 0;
            }
            else
            {
              if ( Object )
                MmUnsecureVirtualMemory(Object);
              if ( Handle )
              {
                ZwUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
              }
              else
              {
                RegionSize = 0;
                ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&a3, (PSIZE_T)&RegionSize, 0x8000u);
              }
            }
          }
        }
      }
      FreeThreadBufferWithTag(a4);
    }
  }
  return DIBitmapReal;
}

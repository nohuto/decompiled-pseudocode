/*
 * XREFs of _NtGdiCreateSessionMappedDIBSection@32 @ 0xE0450
 * Callers:
 *     <none>
 * Callees:
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     _GreGetBitmapBitsSize@4 @ 0x76F1A (_GreGetBitmapBitsSize@4.c)
 *     ?bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z @ 0x76FC6 (-bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiCreateSessionMappedDIBSection(
        HDC a1,
        HANDLE Handle,
        unsigned int a3,
        char *Object,
        int a5,
        size_t MaxCount,
        char a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  unsigned int BitmapBitsSize; // ecx
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  NTSTATUS v11; // eax
  int DIBitmapReal; // eax
  unsigned int v14; // [esp+0h] [ebp-4Ch]
  struct tagBITMAPINFO **v15; // [esp+4h] [ebp-48h]
  _DWORD v16[2]; // [esp+10h] [ebp-3Ch] BYREF
  size_t v17; // [esp+18h] [ebp-34h]
  int v18; // [esp+1Ch] [ebp-30h]
  KPROCESSOR_MODE AccessMode[4]; // [esp+20h] [ebp-2Ch]
  ULONG iError; // [esp+24h] [ebp-28h]
  unsigned int v21; // [esp+28h] [ebp-24h] BYREF
  int v22; // [esp+2Ch] [ebp-20h]
  PVOID MappedBase; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  *(_DWORD *)AccessMode = 0;
  v22 = 0;
  v21 = 0;
  MappedBase = 0;
  if ( !Handle || !Object )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)_gpidLogon )
  {
    EngSetLastError(5u);
    return 0;
  }
  ms_exc.registration.TryLevel = 0;
  bCaptureBitmapInfo(a5, Object, MaxCount, (int *)&v21, v14, v15);
  ms_exc.registration.TryLevel = -2;
  v8 = v21;
  if ( v21 )
  {
    BitmapBitsSize = GreGetBitmapBitsSize(v21);
    v17 = BitmapBitsSize;
    v21 = BitmapBitsSize;
    if ( BitmapBitsSize )
    {
      v16[0] = a3 & 0xFFFF0000;
      v16[1] = 0;
      v18 = (unsigned __int16)a3;
      v21 = BitmapBitsSize + (unsigned __int16)a3;
      CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
      Object = 0;
      v11 = ObReferenceObjectByHandle(Handle, 4u, _MmSectionObjectType, CurrentThreadPreviousMode, (PVOID *)&Object, 0);
      iError = v11;
      *(_DWORD *)AccessMode = Object;
      if ( v11 < 0 )
      {
        EngSetLastError(v11);
      }
      else
      {
        iError = MmMapViewInSessionSpaceEx(Object, &MappedBase, &v21, v16, 0);
        ObfDereferenceObject(Object);
        *(_DWORD *)AccessMode = 0;
      }
      if ( (iError & 0x80000000) != 0 )
      {
        EngSetLastError(iError);
        DIBitmapReal = v22;
      }
      else
      {
        DIBitmapReal = GreCreateDIBitmapReal(
                         a1,
                         (char *)MappedBase + v18,
                         v8,
                         a5,
                         MaxCount,
                         v17,
                         (unsigned int)Handle,
                         a3,
                         0,
                         a7 & 4 | 0xA,
                         a8,
                         0);
        v22 = DIBitmapReal;
      }
      if ( !DIBitmapReal )
      {
        EngSetLastError(0x57u);
        if ( MappedBase )
          MmUnmapViewInSessionSpace(MappedBase);
        if ( *(_DWORD *)AccessMode )
          ObfDereferenceObject(*(PVOID *)AccessMode);
      }
    }
    FreeThreadBufferWithTag(v8);
  }
  return v22;
}

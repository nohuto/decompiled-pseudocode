/*
 * XREFs of _LdrpFindLoadedDll@12 @ 0x4B2E9CFC
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _RtlWow64EnableFsRedirectionEx@8 @ 0x4B2CC460 (_RtlWow64EnableFsRedirectionEx@8.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _LdrpFindLoadedDllInternal@20 @ 0x4B2E9DE3 (_LdrpFindLoadedDllInternal@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __thiscall LdrpFindLoadedDll(unsigned __int16 *this, int *a2)
{
  int v3; // eax
  int LoadedDllInternal; // esi
  bool v6; // [esp+13h] [ebp-11Dh]
  int v7; // [esp+14h] [ebp-11Ch] BYREF
  int v8; // [esp+18h] [ebp-118h] BYREF
  void *v9; // [esp+1Ch] [ebp-114h] BYREF
  int v10; // [esp+20h] [ebp-110h] BYREF
  _WORD *v11; // [esp+24h] [ebp-10Ch]
  _WORD v12[130]; // [esp+28h] [ebp-108h] BYREF

  v3 = RtlWow64EnableFsRedirectionEx(0, &v9);
  v10 = 0x1000000;
  v6 = v3 >= 0;
  v11 = v12;
  v12[0] = 0;
  v7 = 0;
  *a2 = 0;
  LoadedDllInternal = LdrpPreprocessDllName(this, (unsigned __int16 *)&v10, 0, &v7);
  if ( LoadedDllInternal >= 0 )
  {
    LoadedDllInternal = LdrpFindLoadedDllInternal(a2, &v8, v7);
    if ( LoadedDllInternal >= 0 && v8 < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a2);
      *a2 = 0;
      LdrpDrainWorkQueue(0);
      LoadedDllInternal = LdrpFindLoadedDllInternal(a2, &v8, v7);
      LdrpDropLastInProgressCount();
      if ( LoadedDllInternal >= 0 && v8 != 9 )
      {
        LdrpDereferenceModule(*a2);
        *a2 = 0;
        LoadedDllInternal = -1073741515;
      }
    }
  }
  if ( v12 != v11 )
    RtlDeleteBoundaryDescriptor((int)v11);
  v10 = 0x1000000;
  v11 = v12;
  v12[0] = 0;
  if ( v6 )
    RtlWow64EnableFsRedirectionEx(v9, &v9);
  return LoadedDllInternal;
}

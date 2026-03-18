/*
 * XREFs of _NtUserGetOemBitmapSize@8 @ 0x163B1A
 * Callers:
 *     <none>
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetOemBitmapSize(unsigned int a1, ULONG a2)
{
  int v2; // esi
  int DpiForSystem; // eax
  struct OEMBITMAPSET **OemBitmapInfoForDpi; // eax
  int v5; // edi
  int v6; // edx
  _DWORD *v7; // ecx

  v2 = 0;
  EnterCrit(0, 1);
  if ( a1 < 0x5D )
  {
    DpiForSystem = GetDpiForSystem();
    OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(a1, DpiForSystem);
    v5 = *((__int16 *)OemBitmapInfoForDpi + 2);
    v6 = *((__int16 *)OemBitmapInfoForDpi + 3);
    v7 = (_DWORD *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v7 = (_DWORD *)_MmUserProbeAddress;
    *v7 = v5;
    v7[1] = v6;
    if ( v5 && v6 )
      v2 = 1;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}

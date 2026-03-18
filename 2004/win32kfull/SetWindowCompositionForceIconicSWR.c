/*
 * XREFs of SetWindowCompositionForceIconicSWR @ 0x1C0125198
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0065FC0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C0021614 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0062F30 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionForceIconicSWR(__int64 *a1, __int128 *a2, __int64 a3)
{
  bool v4; // zf
  int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  void *v9; // rax
  _OWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v4 = *(_DWORD *)a2 == 0;
  memset(v11, 0, sizeof(v11));
  v6 = !v4;
  v7 = -1073741816;
  v12 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v11, a3) )
  {
    if ( -__CFSHR__(v11[0], 4) == v6 )
      return 0;
    LODWORD(v11[0]) = v11[0] & 0xFFFFFFF7 | (8 * v6);
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v11) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v9 = (void *)ReferenceDwmApiPort(v8);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v9, *a1, 7, a2);
    }
  }
  return v7;
}

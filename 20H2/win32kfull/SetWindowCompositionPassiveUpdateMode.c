/*
 * XREFs of SetWindowCompositionPassiveUpdateMode @ 0x1C01585B8
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C008F0E0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008EFF0 (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowCompositionInfo @ 0x1C00C8264 (SetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionPassiveUpdateMode(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  __int64 v6; // rcx
  void *v7; // rax
  _OWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  memset(v9, 0, sizeof(v9));
  v4 = -1073741816;
  v10 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v9) )
  {
    v5 = *(_DWORD *)a2 != 0;
    if ( -__CFSHR__(v9[0], 16) == v5 )
      return 0;
    LODWORD(v9[0]) = v9[0] & 0xFFFF7FFF | (v5 << 15);
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v9) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v7 = (void *)ReferenceDwmApiPort(v6);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v7, *a1, 25, a2);
    }
  }
  return v4;
}

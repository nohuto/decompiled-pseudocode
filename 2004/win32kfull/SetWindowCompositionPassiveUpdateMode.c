/*
 * XREFs of SetWindowCompositionPassiveUpdateMode @ 0x1C0155C58
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0065FC0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C0021614 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0062F30 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionPassiveUpdateMode(__int64 *a1, __int128 *a2, __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  __int64 v7; // rcx
  void *v8; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  memset(v10, 0, sizeof(v10));
  v5 = -1073741816;
  v11 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v10, a3) )
  {
    v6 = *(_DWORD *)a2 != 0;
    if ( -__CFSHR__(v10[0], 16) == v6 )
      return 0;
    LODWORD(v10[0]) = v10[0] & 0xFFFF7FFF | (v6 << 15);
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v10) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v8 = (void *)ReferenceDwmApiPort(v7);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v8, *a1, 25, a2);
    }
  }
  return v5;
}

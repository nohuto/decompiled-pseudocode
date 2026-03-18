/*
 * XREFs of SetWindowCompositionForceIconicSWR @ 0x1C0126488
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C008F0E0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008EFF0 (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowCompositionInfo @ 0x1C00C8264 (SetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionForceIconicSWR(__int64 *a1, __int128 *a2)
{
  bool v3; // zf
  int v5; // esi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  void *v8; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v3 = *(_DWORD *)a2 == 0;
  memset(v10, 0, sizeof(v10));
  v5 = !v3;
  v6 = -1073741816;
  v11 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v10) )
  {
    if ( -__CFSHR__(v10[0], 4) == v5 )
      return 0;
    LODWORD(v10[0]) = v10[0] & 0xFFFFFFF7 | (8 * v5);
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v10) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v8 = (void *)ReferenceDwmApiPort(v7);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v8, *a1, 7, a2);
    }
  }
  return v6;
}

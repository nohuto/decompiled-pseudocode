/*
 * XREFs of SetWindowCompositionNCRenderPolicy @ 0x1C0214E90
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0065FC0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C0021614 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0062F30 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionNCRenderPolicy(__int64 *a1, __int128 *a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  void *v7; // rax
  _OWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  memset(v9, 0, sizeof(v9));
  v5 = -1073741816;
  v10 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v9, a3) )
  {
    if ( DWORD1(v9[0]) == *(_DWORD *)a2 )
      return 0;
    DWORD1(v9[0]) = *(_DWORD *)a2;
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v9) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v7 = (void *)ReferenceDwmApiPort(v6);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v7, *a1, 2, a2);
    }
  }
  return v5;
}

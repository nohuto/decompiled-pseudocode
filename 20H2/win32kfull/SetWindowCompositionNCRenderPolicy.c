/*
 * XREFs of SetWindowCompositionNCRenderPolicy @ 0x1C0214010
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C008F0E0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008EFF0 (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowCompositionInfo @ 0x1C00C8264 (SetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionNCRenderPolicy(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  void *v6; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  memset(v8, 0, sizeof(v8));
  v4 = -1073741816;
  v9 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v8) )
  {
    if ( DWORD1(v8[0]) == *(_DWORD *)a2 )
      return 0;
    DWORD1(v8[0]) = *(_DWORD *)a2;
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v8) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v6 = (void *)ReferenceDwmApiPort(v5);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v6, *a1, 2, a2);
    }
  }
  return v4;
}

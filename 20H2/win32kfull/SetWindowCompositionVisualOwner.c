/*
 * XREFs of SetWindowCompositionVisualOwner @ 0x1C0214340
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C008F0E0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008EFF0 (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowCompositionInfo @ 0x1C00C8264 (SetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionVisualOwner(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  void *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v8 = 0LL;
  v4 = -1073741816;
  v9 = 0LL;
  v10 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)&v8) )
  {
    if ( *((_QWORD *)&v9 + 1) == *(_QWORD *)a2 )
      return 0;
    *((_QWORD *)&v9 + 1) = *(_QWORD *)a2;
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)&v8) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v6 = (void *)ReferenceDwmApiPort(v5);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v6, *a1, 22, a2);
    }
  }
  return v4;
}

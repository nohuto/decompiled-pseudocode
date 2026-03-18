/*
 * XREFs of SetWindowCompositionVisualOwner @ 0x1C02151C0
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0065FC0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C0021614 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0062F30 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionVisualOwner(__int64 *a1, __int128 *a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  void *v7; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v5 = -1073741816;
  v10 = 0LL;
  v11 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)&v9, a3) )
  {
    if ( *((_QWORD *)&v10 + 1) == *(_QWORD *)a2 )
      return 0;
    *((_QWORD *)&v10 + 1) = *(_QWORD *)a2;
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)&v9) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v7 = (void *)ReferenceDwmApiPort(v6);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v7, *a1, 22, a2);
    }
  }
  return v5;
}

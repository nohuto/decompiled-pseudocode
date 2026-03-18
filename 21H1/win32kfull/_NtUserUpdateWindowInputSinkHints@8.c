/*
 * XREFs of _NtUserUpdateWindowInputSinkHints@8 @ 0xADB10
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

BOOL __stdcall NtUserUpdateWindowInputSinkHints(int a1, unsigned int a2)
{
  int v2; // esi
  unsigned int i; // eax

  v2 = 0;
  if ( UserUnsafeIsCurrentProcessDwm() )
  {
    for ( i = 0; i < a2; ++i )
      ;
  }
  else
  {
    v2 = -1073741790;
  }
  return v2 >= 0;
}

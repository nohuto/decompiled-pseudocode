/*
 * XREFs of __ThreadMessageQueueAttached@4 @ 0x6E8D4
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

BOOL __stdcall _ThreadMessageQueueAttached(int a1)
{
  int v2; // eax

  if ( _gptiCurrent )
  {
    *(_DWORD *)(_gptiCurrent + 688) &= ~0x200u;
    if ( !a1 )
      return *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 288) > 1u;
    v2 = PtiFromThreadId(a1);
    if ( v2 )
      return *(_DWORD *)(v2 + 236) == *(_DWORD *)(_gptiCurrent + 236);
    UserSetLastError(87);
  }
  return 0;
}

/*
 * XREFs of _CleanupW32ThreadLocks@4 @ 0xA3CD8
 * Callers:
 *     <none>
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 */

int __stdcall CleanupW32ThreadLocks(int a1)
{
  int result; // eax

  while ( 1 )
  {
    result = *(_DWORD *)(a1 + 8);
    if ( !result )
      break;
    PopAndFreeW32ThreadLock(*(_DWORD *)(a1 + 8));
  }
  return result;
}

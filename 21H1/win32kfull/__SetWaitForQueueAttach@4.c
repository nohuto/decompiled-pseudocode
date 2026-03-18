/*
 * XREFs of __SetWaitForQueueAttach@4 @ 0x142231
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 *     _NtUserMsgWaitForMultipleObjectsEx@20 @ 0x82980 (_NtUserMsgWaitForMultipleObjectsEx@20.c)
 * Callees:
 *     <none>
 */

int __stdcall _SetWaitForQueueAttach(int a1)
{
  if ( (a1 != 0) != a1 )
    return 0;
  *(_DWORD *)(_gptiCurrent + 688) ^= (*(_DWORD *)(_gptiCurrent + 688) ^ (a1 << 10)) & 0x400;
  return 1;
}

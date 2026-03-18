/*
 * XREFs of _SetWaitForQueueAttach @ 0x1C01D2DB0
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C004D6E0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetWaitForQueueAttach(int a1)
{
  __int64 result; // rax

  if ( (a1 != 0) != a1 )
    return 0LL;
  result = 1LL;
  *(_DWORD *)(gptiCurrent + 1232LL) ^= (*(_DWORD *)(gptiCurrent + 1232LL) ^ (a1 << 10)) & 0x400;
  return result;
}

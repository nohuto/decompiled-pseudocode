/*
 * XREFs of PopCoalescingCheck @ 0x1405690CC
 * Callers:
 *     PopScanIdleList @ 0x14035C514 (PopScanIdleList.c)
 * Callees:
 *     PopCheckForWork @ 0x14035CBB4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14035D440 (PopGetPolicyWorker.c)
 */

__int64 __fastcall PopCoalescingCheck(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx

  v3 = a2;
  if ( a1 )
  {
    if ( a3 )
    {
      if ( a2 > a1 )
        return a1 / 0x3E8 + 1;
    }
    else if ( MEMORY[0xFFFFF78000000008] - PopCoalescingLastFlushTime >= 10000000
                                                                       * (unsigned __int64)(unsigned int)PopCoalescingFlushInterval )
    {
      PopGetPolicyWorker(32);
      PopCheckForWork();
    }
  }
  return v3;
}

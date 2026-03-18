/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x14070AE20
 * Callers:
 *     HvpMarkDirty @ 0x14069FD40 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x14070ADAC (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x140569638 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}

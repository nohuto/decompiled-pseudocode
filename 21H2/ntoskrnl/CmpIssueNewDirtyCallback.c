/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x14061C1E0
 * Callers:
 *     HvMarkBaseBlockDirty @ 0x14061C16C (HvMarkBaseBlockDirty.c)
 *     HvpMarkDirty @ 0x14071F940 (HvpMarkDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14056ECB8 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}

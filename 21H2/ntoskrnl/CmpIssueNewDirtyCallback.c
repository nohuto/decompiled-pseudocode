/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1406CA588
 * Callers:
 *     HvMarkBaseBlockDirty @ 0x1406CA514 (HvMarkBaseBlockDirty.c)
 *     HvpMarkDirty @ 0x14071F430 (HvpMarkDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x1405CFA04 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}

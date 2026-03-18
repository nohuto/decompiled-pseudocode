/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1406DD210
 * Callers:
 *     HvMarkBaseBlockDirty @ 0x1406DD19C (HvMarkBaseBlockDirty.c)
 *     HvpMarkDirty @ 0x140707D60 (HvpMarkDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14056D068 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}

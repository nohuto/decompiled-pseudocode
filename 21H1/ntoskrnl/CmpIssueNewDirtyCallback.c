/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1406E6F60
 * Callers:
 *     HvpMarkDirty @ 0x140699C70 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x1406E6EEC (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x140568FE8 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}

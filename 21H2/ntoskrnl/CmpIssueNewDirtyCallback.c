/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1406BD060
 * Callers:
 *     HvMarkBaseBlockDirty @ 0x1406BCFEC (HvMarkBaseBlockDirty.c)
 *     HvpMarkDirty @ 0x140708560 (HvpMarkDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14056EA78 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}

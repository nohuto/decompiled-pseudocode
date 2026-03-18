/*
 * XREFs of PopPepSurprisePowerOn @ 0x14038B448
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x14038B3C0 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     PopPepReleaseActivityLink @ 0x1402D4DF8 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1402D4E6C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1402D4FF8 (PopPepPromoteActivities.c)
 *     PopPepTriggerActivity @ 0x1402D5AB0 (PopPepTriggerActivity.c)
 */

__int64 __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  KIRQL v2; // si
  unsigned int v4; // ebx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v4 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    PopPepRequestWork(v4, *(_DWORD *)(a1 + 120));
  }
  return PopPepReleaseActivityLink(a1, 0LL, 1, v2);
}

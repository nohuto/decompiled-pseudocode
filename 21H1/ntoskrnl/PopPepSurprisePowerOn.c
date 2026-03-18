/*
 * XREFs of PopPepSurprisePowerOn @ 0x140388238
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x1403881B0 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     PopPepReleaseActivityLink @ 0x14023C1C0 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14023C234 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x14023C3C0 (PopPepPromoteActivities.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     PopPepTriggerActivity @ 0x14023CB20 (PopPepTriggerActivity.c)
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

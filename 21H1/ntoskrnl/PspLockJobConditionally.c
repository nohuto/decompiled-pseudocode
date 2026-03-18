/*
 * XREFs of PspLockJobConditionally @ 0x14065E260
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405CD768 (PspSetJobIoRateControl.c)
 *     PspSendProcessNotificationToJobChain @ 0x14065DED8 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x14065DF9C (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspSetNetRateControl @ 0x140905214 (PspSetNetRateControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall PspLockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      LOBYTE(v2) = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      return v2;
    }
  }
  return v2;
}

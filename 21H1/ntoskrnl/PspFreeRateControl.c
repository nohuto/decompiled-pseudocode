/*
 * XREFs of PspFreeRateControl @ 0x140676188
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspRemoveCpuRateControl @ 0x140676128 (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1406762E0 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveRateControl @ 0x140904BCC (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x140905000 (PspSetJobRateControl.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x14061551C (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x14067626C (PspGetRateControlSize.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PspFreeRateControl(char **P, unsigned int a2)
{
  ULONG_PTR RateControlSize; // rax
  char *v4; // rcx

  RateControlSize = PspGetRateControlSize(a2);
  PsReturnSharedPoolQuota(*P, RateControlSize, 0LL);
  v4 = P[3];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x624A7350u);
  ExFreePoolWithTag(P, 0x624A7350u);
}

/*
 * XREFs of PspFreeRateControl @ 0x1406F10FC
 * Callers:
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1406F0F28 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x1406F109C (PspRemoveCpuRateControl.c)
 *     PspRemoveRateControl @ 0x140905EAC (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1409062E0 (PspSetJobRateControl.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x14066A7FC (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x1406F11E0 (PspGetRateControlSize.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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

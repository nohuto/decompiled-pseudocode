/*
 * XREFs of PspFreeRateControl @ 0x14071119C
 * Callers:
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140710060 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x14071113C (PspRemoveCpuRateControl.c)
 *     PspRemoveRateControl @ 0x14090BACC (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x14090BF00 (PspSetJobRateControl.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1405F70FC (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x140711280 (PspGetRateControlSize.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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

/*
 * XREFs of PspRemoveRateControl @ 0x14090BACC
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     PspSetJobRateControl @ 0x14090BF00 (PspSetJobRateControl.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140665570 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x14071119C (PspFreeRateControl.c)
 *     PspModifyAncestorBits @ 0x14090B81C (PspModifyAncestorBits.c)
 */

void __fastcall PspRemoveRateControl(__int64 a1)
{
  _QWORD v2[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v3; // [rsp+40h] [rbp-28h]
  int v4; // [rsp+50h] [rbp-18h]
  char v5; // [rsp+54h] [rbp-14h]
  __int16 v6; // [rsp+55h] [rbp-13h]
  char v7; // [rsp+57h] [rbp-11h]

  v6 = 0;
  v7 = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1320), 0xFBFFFFFF);
  v2[0] = 0LL;
  v2[1] = 0LL;
  v4 = 0;
  v5 = 0;
  v3 = 0LL;
  PspEnumJobsAndProcessesInJobHierarchy(
    (_QWORD *)a1,
    (int)PspSetRateControlJobPreCallback,
    0,
    (int)PspSetRateControlProcessCallback,
    (__int64)v2,
    5);
  PspModifyAncestorBits(a1, 0x2000000u, 0);
  PspFreeRateControl(*(char ***)(a1 + 1312), 0);
  *(_QWORD *)(a1 + 1312) = 0LL;
}

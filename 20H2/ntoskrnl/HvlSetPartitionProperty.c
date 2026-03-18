/*
 * XREFs of HvlSetPartitionProperty @ 0x1404F4B68
 * Callers:
 *     HvlResumePartition @ 0x1404F4740 (HvlResumePartition.c)
 *     HvlSuspendPartition @ 0x1404F4E00 (HvlSuspendPartition.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FFF0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F0CA0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F1890 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetPartitionProperty(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int16 v7; // bx
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v8, 1, 0LL, 24LL);
  *v6 = a1;
  *((_DWORD *)v6 + 2) = 0x20000;
  v6[2] = a3;
  v7 = HvcallInitiateHypercall(69);
  HvlpReleaseHypercallPage((__int64)v8);
  return v7 != 0 ? 0xC0000001 : 0;
}

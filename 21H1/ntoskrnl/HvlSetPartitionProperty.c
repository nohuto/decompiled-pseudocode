/*
 * XREFs of HvlSetPartitionProperty @ 0x1404F0CA8
 * Callers:
 *     HvlResumePartition @ 0x1404F0880 (HvlResumePartition.c)
 *     HvlSuspendPartition @ 0x1404F0F40 (HvlSuspendPartition.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetPartitionProperty(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int16 v9; // bx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v10, 1, 0LL, 24LL);
  v7 = *((_QWORD *)&v11 + 1);
  *v6 = a1;
  *((_DWORD *)v6 + 2) = 0x20000;
  v6[2] = a3;
  v9 = HvcallInitiateHypercall(69, v7, 0LL, v8);
  HvlpReleaseHypercallPage((__int64)&v10);
  return v9 != 0 ? 0xC0000001 : 0;
}

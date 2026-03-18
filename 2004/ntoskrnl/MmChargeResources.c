/*
 * XREFs of MmChargeResources @ 0x140305F50
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140305F04 (SmAcquireReleaseCharges.c)
 * Callees:
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
 *     MmReleaseResourceCharge @ 0x140305FE0 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall MmChargeResources(unsigned __int64 a1, char a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ebx

  v2 = 0;
  if ( (a2 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL) )
      return 0;
    v2 = 2;
  }
  v5 = 1;
  if ( (a2 & 1) != 0 && !(unsigned int)MiChargeCommit((__int64)&MiSystemPartition, a1, 1u) )
    v5 = 0;
  else
    v2 = 0;
  if ( v2 )
    MmReleaseResourceCharge(a1, v2, 0LL);
  return v5;
}

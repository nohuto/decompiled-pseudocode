/*
 * XREFs of MmChargeResources @ 0x14035751C
 * Callers:
 *     SmAcquireReleaseCharges @ 0x1403574D0 (SmAcquireReleaseCharges.c)
 * Callees:
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
 *     MmReleaseResourceCharge @ 0x1403575AC (MmReleaseResourceCharge.c)
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
  if ( (a2 & 1) != 0 && !(unsigned int)MiChargeCommit((unsigned __int64)&MiSystemPartition, a1, 1u) )
    v5 = 0;
  else
    v2 = 0;
  if ( v2 )
    MmReleaseResourceCharge(a1, v2, 0LL);
  return v5;
}

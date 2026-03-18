/*
 * XREFs of MmChargeResources @ 0x140262F20
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140262ED4 (SmAcquireReleaseCharges.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x140262FAC (MmReleaseResourceCharge.c)
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 */

__int64 __fastcall MmChargeResources(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi

  v2 = 0;
  v5 = 0;
  if ( (a2 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL) )
      return v2;
    v5 = 2;
  }
  if ( (a2 & 1) != 0 && !(unsigned int)MiChargeCommit(&MiSystemPartition, a1, 1LL) )
  {
    if ( v5 )
      MmReleaseResourceCharge(a1, v5, 0LL);
  }
  else
  {
    return 1;
  }
  return v2;
}

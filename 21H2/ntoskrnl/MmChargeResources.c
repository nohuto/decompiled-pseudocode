/*
 * XREFs of MmChargeResources @ 0x14028FD5C
 * Callers:
 *     SmAcquireReleaseCharges @ 0x14028FD10 (SmAcquireReleaseCharges.c)
 * Callees:
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MmReleaseResourceCharge @ 0x14028FDEC (MmReleaseResourceCharge.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
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
  if ( (a2 & 1) != 0 && !(unsigned int)MiChargeCommit(&MiSystemPartition, a1, 1LL) )
    v5 = 0;
  else
    v2 = 0;
  if ( v2 )
    MmReleaseResourceCharge(a1, v2, 0LL);
  return v5;
}

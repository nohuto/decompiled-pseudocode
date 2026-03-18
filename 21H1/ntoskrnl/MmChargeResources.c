/*
 * XREFs of MmChargeResources @ 0x1402C3CA0
 * Callers:
 *     SmAcquireReleaseCharges @ 0x1402C3C54 (SmAcquireReleaseCharges.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MmReleaseResourceCharge @ 0x1402C3D30 (MmReleaseResourceCharge.c)
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 */

__int64 __fastcall MmChargeResources(unsigned __int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v7; // ebx

  v4 = 0;
  if ( (a2 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL, a4) )
      return 0;
    v4 = 2;
  }
  v7 = 1;
  if ( (a2 & 1) != 0 && !(unsigned int)MiChargeCommit((__int64)&MiSystemPartition, a1, 1u) )
    v7 = 0;
  else
    v4 = 0;
  if ( v4 )
    MmReleaseResourceCharge(a1, v4, 0LL);
  return v7;
}

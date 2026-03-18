/*
 * XREFs of MiChargeLargeProtoSubsection @ 0x1408D24B0
 * Callers:
 *     MiCreatePrototypePtes @ 0x1402D51CC (MiCreatePrototypePtes.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14053EEAC (MiEnableLargeSubsection.c)
 * Callees:
 *     MiReturnResident @ 0x14026307C (MiReturnResident.c)
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
 */

__int64 __fastcall MiChargeLargeProtoSubsection(__int64 a1, int a2)
{
  bool v2; // zf
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  v2 = a2 == 0;
  v3 = (unsigned __int64)*(unsigned int *)(a1 + 44) >> 9;
  if ( v2 )
  {
    MiReturnResident((__int64)&MiSystemPartition, v3);
    return 1LL;
  }
  result = MiChargeResident(&MiSystemPartition, v3, 1024LL);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}

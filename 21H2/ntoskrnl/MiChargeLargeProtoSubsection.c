/*
 * XREFs of MiChargeLargeProtoSubsection @ 0x1408CFC70
 * Callers:
 *     MiCreatePrototypePtes @ 0x1402F7DF8 (MiCreatePrototypePtes.c)
 *     MiDecrementLargeSubsections @ 0x140540410 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1405409AC (MiEnableLargeSubsection.c)
 * Callees:
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     MiReturnResident @ 0x140296E9C (MiReturnResident.c)
 */

__int64 __fastcall MiChargeLargeProtoSubsection(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  unsigned __int64 v5; // rdx
  __int64 result; // rax

  v4 = a2 == 0;
  v5 = (unsigned __int64)*(unsigned int *)(a1 + 44) >> 9;
  if ( v4 )
  {
    MiReturnResident((__int64)&MiSystemPartition, v5);
    return 1LL;
  }
  result = MiChargeResident(&MiSystemPartition, v5, 1024LL, a4);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}

/*
 * XREFs of MiComputeAweCharges @ 0x14097CA4C
 * Callers:
 *     MiComputeVadCharges @ 0x14030B440 (MiComputeVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x1407B97B0 (MiReleaseVadEventBlocks.c)
 * Callees:
 *     MiGetAwePageSize @ 0x1405AAF90 (MiGetAwePageSize.c)
 *     MiGetAweViewPageSize @ 0x1405AB030 (MiGetAweViewPageSize.c)
 *     MiResidentPagesForSpan @ 0x1406DD778 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiComputeAweCharges(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 v3; // r11
  unsigned __int64 AweViewPageSize; // r8
  __int64 v5; // r10

  v2 = 1;
  v3 = a1;
  AweViewPageSize = 1LL;
  if ( a2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 1) == 0 )
    {
      AweViewPageSize = MiGetAweViewPageSize(a2);
      if ( !AweViewPageSize )
        AweViewPageSize = MiGetAwePageSize(v5);
    }
  }
  if ( AweViewPageSize != 512 )
    v2 = AweViewPageSize >= 0x40000 ? 2 : 0;
  return MiResidentPagesForSpan(
           (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12,
           ((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF,
           v2);
}

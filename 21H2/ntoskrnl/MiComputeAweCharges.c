/*
 * XREFs of MiComputeAweCharges @ 0x1408D5A60
 * Callers:
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x140704770 (MiReleaseVadEventBlocks.c)
 * Callees:
 *     ExGetCallBackBlockRoutine @ 0x140381CB0 (ExGetCallBackBlockRoutine.c)
 *     MiGetAweViewPageSize @ 0x14054C718 (MiGetAweViewPageSize.c)
 *     MiResidentPagesForSpan @ 0x140615404 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiComputeAweCharges(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 v3; // r11
  unsigned __int64 AweViewPageSize; // r8
  __int64 v5; // r10

  v2 = 0;
  v3 = a1;
  AweViewPageSize = 1LL;
  if ( a2 )
  {
    if ( (**(_DWORD **)(a2 + 32) & 1) == 0 )
    {
      AweViewPageSize = MiGetAweViewPageSize(a2);
      if ( !AweViewPageSize )
        AweViewPageSize = ExGetCallBackBlockRoutine(v5);
    }
  }
  LOBYTE(v2) = AweViewPageSize >= 0x200;
  return MiResidentPagesForSpan(
           (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12,
           ((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF,
           v2);
}

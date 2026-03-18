/*
 * XREFs of KiUnshadowProcessorAllocation @ 0x1409B2D4C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
 * Callees:
 *     MmDeleteShadowMapping @ 0x1408D41A4 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiUnshadowProcessorAllocation(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( KiKvaShadow )
  {
    MmDeleteShadowMapping(*(_QWORD *)(a2 + 88) - 12208LL, 0x5000uLL);
    return MmDeleteShadowMapping(a1 + 36480, 0x1000uLL);
  }
  return result;
}

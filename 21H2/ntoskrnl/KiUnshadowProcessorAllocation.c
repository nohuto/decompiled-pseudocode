/*
 * XREFs of KiUnshadowProcessorAllocation @ 0x1409B0B7C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     MmDeleteShadowMapping @ 0x1408D1AC4 (MmDeleteShadowMapping.c)
 */

char __fastcall KiUnshadowProcessorAllocation(__int64 a1, __int64 a2)
{
  char result; // al

  if ( KiKvaShadow )
  {
    MmDeleteShadowMapping(*(_QWORD *)(a2 + 88) - 12208LL, 0x5000uLL);
    return MmDeleteShadowMapping(a1 + 36480, 0x1000uLL);
  }
  return result;
}

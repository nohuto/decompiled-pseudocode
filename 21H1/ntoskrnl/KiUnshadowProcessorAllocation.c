/*
 * XREFs of KiUnshadowProcessorAllocation @ 0x1409ABF7C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B625C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
 * Callees:
 *     MmDeleteShadowMapping @ 0x1408CD014 (MmDeleteShadowMapping.c)
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

/*
 * XREFs of KiGetSubNodeForGroup @ 0x14024C360
 * Callers:
 *     KeBuildLogicalProcessorSystemInformation @ 0x1406CD16C (KeBuildLogicalProcessorSystemInformation.c)
 *     KiConfigureProcessorBlock @ 0x140A59D28 (KiConfigureProcessorBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetSubNodeForGroup(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(a1 + 8LL * a2 + 24);
}

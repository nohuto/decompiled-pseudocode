/*
 * XREFs of HalpGetAcpiStaticNumaTopology @ 0x1407D428C
 * Callers:
 *     HaliQuerySystemInformation @ 0x1409909D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 */

__int64 HalpGetAcpiStaticNumaTopology()
{
  __int64 v0; // rdx

  if ( (unsigned int)HalpInterruptModel() - 1 > 3 || !HalpNumaConfig )
    return 3221225800LL;
  *(_WORD *)v0 = *(_WORD *)(HalpNumaConfig + 56);
  *(_QWORD *)(v0 + 8) = HalpNumaQueryProcessorNode;
  *(_QWORD *)(v0 + 24) = HalpNumaQueryProximityNode;
  *(_QWORD *)(v0 + 40) = HalpNumaQueryProximityId;
  *(_QWORD *)(v0 + 48) = HalpNumaQueryNodeCapacity;
  *(_QWORD *)(v0 + 56) = HalpNumaQueryNodeDistance;
  *(_QWORD *)(v0 + 32) = (unsigned __int64)HalpNumaAddRangeProximity & -(__int64)(HalpAcpiSrat != 0);
  return 0LL;
}

/*
 * XREFs of MiOffsetToProtos @ 0x140286F90
 * Callers:
 *     MiReferenceDataSubsections @ 0x14026CF88 (MiReferenceDataSubsections.c)
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiSystemImageHasPrivateFixups @ 0x140279474 (MiSystemImageHasPrivateFixups.c)
 *     MmMapViewInSystemCache @ 0x140285D90 (MmMapViewInSystemCache.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiDereferenceDataSubsections @ 0x1405C48E0 (MiDereferenceDataSubsections.c)
 *     MiAddMappedPtes @ 0x1406F40E0 (MiAddMappedPtes.c)
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x140707CF0 (MiScanRelocationPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 *     MiLogRelocationRva @ 0x1407E5148 (MiLogRelocationRva.c)
 * Callees:
 *     MiLocatePagefileSubsection @ 0x14026F0F0 (MiLocatePagefileSubsection.c)
 *     MiGetControlAreaPtes @ 0x140287070 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140287180 (MiLocateSubsectionNode.c)
 */

unsigned int *__fastcall MiOffsetToProtos(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  __int64 SubsectionNode; // rbx
  unsigned __int64 i; // rdx

  *a3 = a2 >> 12;
  if ( *a3 >= MiGetControlAreaPtes() )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return MiLocatePagefileSubsection((unsigned int *)(a1 + 128), a3);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    SubsectionNode = a1 + 128;
    for ( i = *(unsigned int *)(SubsectionNode + 44); *a3 >= i; i = *(unsigned int *)(SubsectionNode + 44) )
    {
      *a3 -= i;
      SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
    }
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(a1, a2, 0LL);
    *a3 -= *(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26);
  }
  return (unsigned int *)SubsectionNode;
}

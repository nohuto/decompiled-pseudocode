/*
 * XREFs of ??$make_shared@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@PEAUISpatialObjectDevice@Holographic@34@PEAUISpatialObject@634@@std@@YA?AV?$shared_ptr@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@0@$$QEAPEAUISpatialObjectDevice@Holographic@Internal@Windows@@$$QEAPEAUISpatialObject@345@@Z @ 0x1800DE320
 * Callers:
 *     ?OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800E0324 (-OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Window.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     ??0SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAA@PEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@523@@Z @ 0x1800DE3FC (--0SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAA@PEAUISpatialObjectDev.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand,Windows::Internal::Holographic::ISpatialObjectDevice *,Windows::Internal::Holographic::ISpatialObject *>(
        _QWORD *a1,
        struct Windows::Internal::Holographic::ISpatialObjectDevice **a2,
        struct Windows::Internal::Holographic::ISpatialObject **a3)
{
  _DWORD *v7; // [rsp+40h] [rbp+8h]

  v7 = operator new(0x198uLL);
  v7[2] = 1;
  v7[3] = 1;
  *(_QWORD *)v7 = &std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand>::`vftable';
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::SpatialInteractionSourceHand(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *)(v7 + 4),
    *a2,
    *a3);
  *a1 = v7 + 4;
  a1[1] = v7;
  return a1;
}

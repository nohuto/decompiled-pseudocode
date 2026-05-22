/*
 * XREFs of ??_GSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800DE680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800DE530 (--1SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        char a2)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::~SpatialInteractionSourceHand(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x188);
  return this;
}

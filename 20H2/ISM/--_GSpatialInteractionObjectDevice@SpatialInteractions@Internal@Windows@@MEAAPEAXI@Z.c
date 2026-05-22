/*
 * XREFs of ??_GSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAAPEAXI@Z @ 0x1800D66D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ @ 0x1800D5AF4 (--1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *this,
        char a2)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::~SpatialInteractionObjectDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}

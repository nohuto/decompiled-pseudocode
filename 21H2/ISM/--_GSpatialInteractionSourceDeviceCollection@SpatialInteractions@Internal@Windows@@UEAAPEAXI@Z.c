/*
 * XREFs of ??_GSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800CEDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800CE5A4 (--1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        char a2)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::~SpatialInteractionSourceDeviceCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2D0);
  return this;
}

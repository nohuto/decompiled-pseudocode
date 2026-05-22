/*
 * XREFs of ??_GSpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800927C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x18009250C (--1SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::SpatialRimDevice *__fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        char a2)
{
  Windows::Internal::SpatialInteractions::SpatialRimDevice::~SpatialRimDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}

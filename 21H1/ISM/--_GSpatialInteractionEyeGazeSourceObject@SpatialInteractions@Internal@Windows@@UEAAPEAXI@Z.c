/*
 * XREFs of ??_GSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800DBA20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800DB920 (--1SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *this,
        char a2)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::~SpatialInteractionEyeGazeSourceObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x528);
  return this;
}

/*
 * XREFs of ??_GSpatialAudioMetadataDictionary@@UEAAPEAXI@Z @ 0x18012D720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ??1SpatialAudioMetadataDictionary@@UEAA@XZ @ 0x18012D634 (--1SpatialAudioMetadataDictionary@@UEAA@XZ.c)
 */

SpatialAudioMetadataDictionary *__fastcall SpatialAudioMetadataDictionary::`scalar deleting destructor'(
        SpatialAudioMetadataDictionary *this,
        char a2)
{
  SpatialAudioMetadataDictionary::~SpatialAudioMetadataDictionary(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

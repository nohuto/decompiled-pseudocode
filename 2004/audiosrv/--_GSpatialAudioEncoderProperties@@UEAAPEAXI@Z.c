/*
 * XREFs of ??_GSpatialAudioEncoderProperties@@UEAAPEAXI@Z @ 0x18012B3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ??1SpatialAudioEncoderProperties@@UEAA@XZ @ 0x18012B338 (--1SpatialAudioEncoderProperties@@UEAA@XZ.c)
 */

SpatialAudioEncoderProperties *__fastcall SpatialAudioEncoderProperties::`scalar deleting destructor'(
        SpatialAudioEncoderProperties *this,
        char a2)
{
  SpatialAudioEncoderProperties::~SpatialAudioEncoderProperties(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

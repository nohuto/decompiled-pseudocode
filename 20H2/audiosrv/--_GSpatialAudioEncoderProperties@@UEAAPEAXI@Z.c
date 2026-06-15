/*
 * XREFs of ??_GSpatialAudioEncoderProperties@@UEAAPEAXI@Z @ 0x18012A740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180033A40 (--3@YAXPEAX@Z.c)
 *     ??1SpatialAudioEncoderProperties@@UEAA@XZ @ 0x18012A6A8 (--1SpatialAudioEncoderProperties@@UEAA@XZ.c)
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

/*
 * XREFs of ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x180018120
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ @ 0x18001815C (--1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

CPayloadedAnimationPrimitiveBuffer *__fastcall CPayloadedAnimationPrimitiveBuffer::`scalar deleting destructor'(
        CPayloadedAnimationPrimitiveBuffer *this,
        char a2)
{
  CPayloadedAnimationPrimitiveBuffer::~CPayloadedAnimationPrimitiveBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}

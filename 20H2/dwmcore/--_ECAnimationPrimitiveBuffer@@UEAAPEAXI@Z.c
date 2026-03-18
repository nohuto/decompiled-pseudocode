/*
 * XREFs of ??_ECAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x180200550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

CAnimationPrimitiveBuffer *__fastcall CAnimationPrimitiveBuffer::`vector deleting destructor'(
        CAnimationPrimitiveBuffer *this,
        char a2)
{
  *(_QWORD *)this = &CAnimationPrimitiveBuffer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

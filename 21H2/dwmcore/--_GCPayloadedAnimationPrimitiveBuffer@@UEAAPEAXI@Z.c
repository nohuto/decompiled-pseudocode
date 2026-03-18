/*
 * XREFs of ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x180253710
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall CPayloadedAnimationPrimitiveBuffer::`scalar deleting destructor'(void **this, char a2)
{
  *this = &CPayloadedAnimationPrimitiveBuffer::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

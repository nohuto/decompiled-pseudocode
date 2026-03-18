/*
 * XREFs of ??_EForceAnimator@Particles@@UEAAPEAXI@Z @ 0x1801DE080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

Particles::ForceAnimator *__fastcall Particles::ForceAnimator::`vector deleting destructor'(
        Particles::ForceAnimator *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

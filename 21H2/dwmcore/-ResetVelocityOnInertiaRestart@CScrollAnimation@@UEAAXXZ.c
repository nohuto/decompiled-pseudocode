/*
 * XREFs of ?ResetVelocityOnInertiaRestart@CScrollAnimation@@UEAAXXZ @ 0x1800FBBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CScrollAnimation::ResetVelocityOnInertiaRestart(CScrollAnimation *this)
{
  *((_BYTE *)this + 344) |= 1u;
}

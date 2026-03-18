/*
 * XREFs of ?ResetVelocityOnInertiaRestart@CScrollAnimation@@UEAAXXZ @ 0x1800DD5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CScrollAnimation::ResetVelocityOnInertiaRestart(CScrollAnimation *this)
{
  *((_BYTE *)this + 320) |= 1u;
}

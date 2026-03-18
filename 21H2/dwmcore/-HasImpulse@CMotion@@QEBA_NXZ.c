/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x1802544BC
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18021B2D4 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x18025F1A8 (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 10) != 0.0;
}

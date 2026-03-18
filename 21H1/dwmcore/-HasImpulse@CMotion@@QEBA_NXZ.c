/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x1802058E8
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801CDAE0 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x1802104CC (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 10) != 0.0;
}

/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x180202F28
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801CB1E0 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x18020DB0C (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 10) != 0.0;
}

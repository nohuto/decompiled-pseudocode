/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x1801C96C8
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801C813C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801CC848 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z @ 0x1802012F0 (-PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z.c)
 * Callees:
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x1801C9668 (-IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 */

char __fastcall CInteractionTracker::IsOutOfBounds(CInteractionTracker *this)
{
  float *v1; // rcx
  float *v2; // rcx
  char v3; // r8

  if ( CInteractionTracker::IsOutOfBounds((float *)this, 0)
    || CInteractionTracker::IsOutOfBounds(v1, 1)
    || CInteractionTracker::IsOutOfBounds(v2, 2) )
  {
    return 1;
  }
  return v3;
}

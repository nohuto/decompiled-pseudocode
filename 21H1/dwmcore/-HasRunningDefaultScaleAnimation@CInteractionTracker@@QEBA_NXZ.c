/*
 * XREFs of ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1801CDBA8
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801CC884 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801CE2D0 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::HasRunningDefaultScaleAnimation(CInteractionTracker *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 58);
  result = 0;
  if ( v1 )
    return *(char *)(v1 + 540) < 0;
  return result;
}

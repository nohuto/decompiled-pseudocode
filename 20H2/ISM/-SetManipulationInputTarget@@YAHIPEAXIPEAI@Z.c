/*
 * XREFs of ?SetManipulationInputTarget@@YAHIPEAXIPEAI@Z @ 0x180068950
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z @ 0x1800B2834 (-UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z.c)
 */

_BOOL8 __fastcall SetManipulationInputTarget(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v6; // edi
  BOOL v7; // ebx

  v6 = a1;
  v7 = NtUserSetManipulationInputTarget(a1, a2) != 0;
  Win32kInterop::UpdateGestureTargetingDecisions(v6, a3, a4);
  return v7;
}

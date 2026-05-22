/*
 * XREFs of ?s_InteractionOutputCallback@DragGestureTracker@@SAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180145370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DragGestureTracker::s_InteractionOutputCallback(float *a1, const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  float v2; // xmm1_4

  if ( *(_DWORD *)a1 == 2 )
    *(_DWORD *)a1 = ((*(_DWORD *)a2 - 1) & 0xFFFFFFFB) != 0 ? 1 : 3;
  v2 = *((float *)a2 + 16) * 1000.0;
  a1[1] = *((float *)a2 + 15) * 1000.0;
  a1[2] = v2;
}

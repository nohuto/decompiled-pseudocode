/*
 * XREFs of KiSetForceIdleState @ 0x14057A5A8
 * Callers:
 *     KiCheckAndRearmForceIdle @ 0x1402595B0 (KiCheckAndRearmForceIdle.c)
 *     KiUpdateTime @ 0x140304060 (KiUpdateTime.c)
 *     KeClearForceIdle @ 0x140579CD4 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x140579E04 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14057A0A0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14057A1B0 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14057A428 (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1405D0C70 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}

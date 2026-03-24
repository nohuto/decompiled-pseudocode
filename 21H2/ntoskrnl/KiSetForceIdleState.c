/*
 * XREFs of KiSetForceIdleState @ 0x1405237A0
 * Callers:
 *     KiUpdateTime @ 0x140227730 (KiUpdateTime.c)
 *     KiCheckAndRearmForceIdle @ 0x1402CF6BC (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x140522E78 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x140522FA8 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x1405232B0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x1405233C0 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x140523620 (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x14056FDE0 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}

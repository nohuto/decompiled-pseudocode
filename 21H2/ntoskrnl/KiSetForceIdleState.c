/*
 * XREFs of KiSetForceIdleState @ 0x1405239E0
 * Callers:
 *     KiCheckAndRearmForceIdle @ 0x14024DA3C (KiCheckAndRearmForceIdle.c)
 *     KiUpdateTime @ 0x1402CC030 (KiUpdateTime.c)
 *     KeClearForceIdle @ 0x1405230B8 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x1405231E8 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x1405234F0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x140523600 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x140523860 (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x140570020 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}

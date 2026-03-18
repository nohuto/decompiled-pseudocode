/*
 * XREFs of KiSetForceIdleState @ 0x14051E2F0
 * Callers:
 *     KiUpdateTime @ 0x14021C4D0 (KiUpdateTime.c)
 *     KiCheckAndRearmForceIdle @ 0x14035CFEC (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x14051D9C8 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x14051DAF8 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14051DE00 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14051DF10 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14051E170 (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x14056A9A0 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}

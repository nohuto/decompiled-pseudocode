/*
 * XREFs of KiSetForceIdleState @ 0x14051DCA0
 * Callers:
 *     KiUpdateTime @ 0x140275520 (KiUpdateTime.c)
 *     KiCheckAndRearmForceIdle @ 0x14031F4DC (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x14051D378 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x14051D4A8 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14051D7B0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14051D8C0 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14051DB20 (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x14056A350 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}

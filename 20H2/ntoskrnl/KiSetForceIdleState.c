/*
 * XREFs of KiSetForceIdleState @ 0x140521CC0
 * Callers:
 *     KiUpdateTime @ 0x14027DA20 (KiUpdateTime.c)
 *     KiCheckAndRearmForceIdle @ 0x14032DADC (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x140521398 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x1405214C8 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x1405217D0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x1405218E0 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x140521B40 (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x14056E3D0 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}

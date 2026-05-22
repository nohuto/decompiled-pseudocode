/*
 * XREFs of ?TicksToSeconds@PerfCounter@@YAM_J@Z @ 0x18007BD40
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018E1E4 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall PerfCounter::TicksToSeconds(PerfCounter *this)
{
  return (double)(int)this / (double)(int)qword_1802082E8;
}

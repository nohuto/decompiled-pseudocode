/*
 * XREFs of ?ShouldAddPointerWakeFlag@@YGHPBUtagTHREADINFO@@PBUtagQMSG@@@Z @ 0xA1E42
 * Callers:
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ShouldAddPointerWakeFlag(int a1, int a2)
{
  return a2 && IsGenuineMouseInput(a2 + 80) && IsMiPActive(a1, a2);
}

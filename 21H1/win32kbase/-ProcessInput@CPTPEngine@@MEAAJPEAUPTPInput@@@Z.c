/*
 * XREFs of ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1C01C91C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C95CC (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessInput(CPTPEngine *this, struct PTPInput *a2)
{
  CPTPEngine::RunStateMachine(this, a2);
  return 0LL;
}

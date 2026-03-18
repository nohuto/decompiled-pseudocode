/*
 * XREFs of ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x1C01C3210
 * Callers:
 *     <none>
 * Callees:
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C01C51D4 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessInitialization(CPTPEngine *this)
{
  *((_DWORD *)this + 958) |= 0x80000000;
  *((_DWORD *)this + 887) = 1;
  CPTPEngine::TPAAPSetCurtainState(this, 0);
  return 0LL;
}

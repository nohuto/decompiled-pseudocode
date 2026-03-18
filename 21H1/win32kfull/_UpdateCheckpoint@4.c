/*
 * XREFs of _UpdateCheckpoint@4 @ 0xB4838
 * Callers:
 *     _WPUpdateCheckPointSettings@8 @ 0xB274C (_WPUpdateCheckPointSettings@8.c)
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     _xxxSetInternalWindowPos@16 @ 0x16F556 (_xxxSetInternalWindowPos@16.c)
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall UpdateCheckpoint(void *this)
{
  int v3[4]; // [esp+Ch] [ebp-14h] BYREF

  memset(v3, 0, sizeof(v3));
  GetRect((int)this, v3, 66);
  return CkptRestore(this, v3);
}

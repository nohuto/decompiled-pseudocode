/*
 * XREFs of ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C020B3DC
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020F6A4 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C0094B7C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C0094BC0 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C020B378 (-IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall IsWindowSubjectToShellSizingPolicy(struct tagWND *a1)
{
  __int64 v1; // r9
  char v2; // bl
  unsigned int v3; // r8d
  ShellWindowManagement **v4; // r9

  v2 = 0;
  if ( IsLeftOrRightArranged(a1)
    && !ShellWindowManagement::BehaviorEnabled(*(ShellWindowManagement **)(v1 + 24), (const struct tagDESKTOP *)8) )
  {
    return ShellWindowManagement::WindowSubjectToBehavior(v4, (struct tagWND *)0x40, v3);
  }
  return v2;
}

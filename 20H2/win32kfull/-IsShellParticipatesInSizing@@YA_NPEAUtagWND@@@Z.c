/*
 * XREFs of ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00943E4
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C003ED78 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0203EF0 (NtUserUpdateWindowTrackingInfo.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020F734 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C0094BC0 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 */

char __fastcall IsShellParticipatesInSizing(struct tagWND *a1, __int64 a2, unsigned int a3)
{
  bool v3; // al
  ShellWindowManagement *v4; // rcx
  unsigned int v5; // r8d
  char v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rax

  v3 = ShellWindowManagement::BehaviorEnabled(
         *(ShellWindowManagement **)(*((_QWORD *)a1 + 2) + 456LL),
         (const struct tagDESKTOP *)0x40,
         a3);
  v6 = 0;
  if ( v3 && !ShellWindowManagement::BehaviorEnabled(v4, (const struct tagDESKTOP *)8, v5) )
  {
    v9 = *(_QWORD *)(v8 + 672);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 16) == v7 && (*(_DWORD *)(v9 + 280) & 4) != 0 )
        return 1;
    }
  }
  return v6;
}

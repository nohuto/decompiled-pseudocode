/*
 * XREFs of ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00AE6A8
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C00AFF48 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0204D60 (NtUserUpdateWindowTrackingInfo.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C02105B4 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00AE030 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 */

char __fastcall IsShellParticipatesInSizing(struct tagWND *a1)
{
  bool v1; // al
  ShellWindowManagement *v2; // rcx
  char v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax

  v1 = ShellWindowManagement::BehaviorEnabled(
         *(ShellWindowManagement **)(*((_QWORD *)a1 + 2) + 448LL),
         (const struct tagDESKTOP *)0x40);
  v3 = 0;
  if ( v1 && !ShellWindowManagement::BehaviorEnabled(v2, (const struct tagDESKTOP *)8) )
  {
    v6 = *(_QWORD *)(v5 + 664);
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 16) == v4 && (*(_DWORD *)(v6 + 280) & 4) != 0 )
        return 1;
    }
  }
  return v3;
}

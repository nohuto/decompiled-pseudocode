/*
 * XREFs of ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0210524
 * Callers:
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C020C25C (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z @ 0x1C023E794 (-xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z.c)
 */

void __fastcall xxxQueryShellForSizeCooperation(struct _MOVESIZEDATA *a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // ecx

  if ( (unsigned int)(*((_DWORD *)a1 + 44) - 1) <= 1
    && (*((_DWORD *)a1 + 49) & 2) == 0
    && IsWindowSubjectToShellSizingPolicy(*((struct tagWND **)a1 + 2))
    && CallShell::xxxWindowSizeStartingHandler(
         *((CallShell **)a1 + 2),
         (struct tagWND *)(unsigned int)(*((_DWORD *)a1 + 44) + 9),
         v2) )
  {
    *((_DWORD *)a1 + 70) |= 4u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_q(v4, v3, 1, 10, (__int64)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids, *((_QWORD *)a1 + 2));
    }
  }
}

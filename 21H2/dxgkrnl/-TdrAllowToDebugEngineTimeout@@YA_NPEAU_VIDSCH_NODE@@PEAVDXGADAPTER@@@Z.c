/*
 * XREFs of ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1C0305110
 * Callers:
 *     <none>
 * Callees:
 *     ?TdrValidateDebugMode@@YAXXZ @ 0x1C0052664 (-TdrValidateDebugMode@@YAXXZ.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C03052F0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1C0306130 (-TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C0306F50 (TdrBugcheckOnTimeout.c)
 */

bool __fastcall TdrAllowToDebugEngineTimeout(struct _VIDSCH_NODE *a1, struct DXGADAPTER *a2)
{
  struct _VIDSCH_NODE *v3; // rbx
  char v4; // al
  char v5; // bl
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  ULONG_PTR v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1;
  if ( (dword_1C0132314 & 1) != 0 )
  {
    v4 = byte_1C0132318;
  }
  else
  {
    LOBYTE(a1) = 1;
    dword_1C0132314 |= 1u;
    v4 = (unsigned __int8)WdIsDebuggerPresent(a1) != 0;
    byte_1C0132318 = v4;
  }
  byte_1C0130C0C = v4;
  TdrValidateDebugMode();
  if ( (byte_1C0130C0C || (unsigned __int8)WdQueryDebugFlag(0LL)) && !g_TdrDebugMode )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected an engine timeout condition. We broke into the  debugger to allow a chance for debugging this issue.\n");
    g_EngineTimeoutNode = v3;
    v5 = 1;
    do
    {
      if ( v5 )
      {
        v5 = 0;
        g_TdrDebugMode = -1;
      }
      else
      {
        DbgPrintEx(0x65u, 0, "dxgkrnl!g_TdrDebugMode is set to invalid value 0x%X\n", g_TdrDebugMode);
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "Please edit dxgkrnl!g_TdrDebugMode variable to choose timeout debug policy\n"
        "using command 'ed dxgkrnl!g_TdrDebugMode (mode)'\n"
        "           or 'ed 0x%p (mode)'\n"
        "where (mode) is: \n"
        "      0x00 - to continue execution as planned in end-user scenario\n"
        "      0x01 - to ignore timeout (useful to debug the timeout)\n"
        "      0x02 - to continue execution as with mode 0x00 but disable the timeout debugging\n"
        "      0x03 - same as 0x02 but will not check for consecutive recoveries.\n"
        "\n",
        (const void *)&g_TdrDebugMode);
      __debugbreak();
    }
    while ( (unsigned int)g_TdrDebugMode >= 4 );
    g_EngineTimeoutNode = 0LL;
  }
  if ( g_TdrConfig == 1 )
  {
    v11 = 1;
    RecoveryContext = TdrCreateRecoveryContext();
    v7 = (ULONG_PTR)RecoveryContext;
    if ( RecoveryContext )
    {
      *((_DWORD *)RecoveryContext + 4) = 6;
      *((_QWORD *)RecoveryContext + 1) = &v11;
      *((_QWORD *)RecoveryContext + 4) = a2;
      _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
      *((_QWORD *)RecoveryContext + 5) = -1LL;
      v8 = (_QWORD *)*((_QWORD *)RecoveryContext + 4);
      *((_DWORD *)RecoveryContext + 36) = 61443;
      *((_DWORD *)RecoveryContext + 37) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8[27] + 64LL) + 40LL) + 28LL);
      v9 = v8[74];
      if ( !v9 )
        v9 = v8[56];
      *(_QWORD *)(v7 + 104) = v9;
      TdrCollectDbgInfoStage1((struct _TDR_RECOVERY_CONTEXT *)v7, 1);
    }
    TdrBugcheckOnTimeout(v7);
  }
  return g_TdrDebugMode == 1;
}

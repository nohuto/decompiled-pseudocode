/*
 * XREFs of DxgkSubmitCommand @ 0x1C018F640
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C018F6E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *v11; // rbx
  struct DXGPROCESS *v12; // rdi
  unsigned int v13; // ebx
  struct DXGTHREAD *Current; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0)
    && (Current = DXGTHREAD::GetCurrent()) != 0LL
    && (v12 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) != 0LL
    || (v12 = v11) != 0LL )
  {
    v13 = DxgkSubmitCommandInternal(a1, v12);
    if ( (int)(v13 + 0x80000000) >= 0
      && v13 != -1073741130
      && !g_DwmRenderDebugMode
      && (*((_DWORD *)v12 + 106) & 4) != 0
      && !KdRefreshDebuggerNotPresent() )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "An unexpected render failure 0x%x from DWM has been detected.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "To disable debug breaks for DWM render failures, run \"?? dxgmms2!g_DwmRenderDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        v13,
        (const void *)&g_DwmRenderDebugMode);
      __debugbreak();
    }
    return v13;
  }
  else
  {
    v16 = PsGetCurrentProcess(v8, v7, v9, v10);
    WdLogSingleEntry2(2LL, v16, -1073741811LL);
    v21 = PsGetCurrentProcess(v18, v17, v19, v20);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v21,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}

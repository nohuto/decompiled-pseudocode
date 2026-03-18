/*
 * XREFs of DxgkSubmitCommand @ 0x1C00F0770
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00F0810 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *a1)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // rbx
  struct DXGPROCESS *v7; // rdi
  unsigned int v8; // ebx
  struct DXGTHREAD *Current; // rax
  __int64 v11; // rbx
  __int64 v12; // rax

  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v6 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (Current = DXGTHREAD::GetCurrent()) != 0LL
    && (v7 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) != 0LL
    || (v7 = v6) != 0LL )
  {
    v8 = DxgkSubmitCommandInternal(a1, v7);
    if ( (int)(v8 + 0x80000000) >= 0
      && v8 != -1073741130
      && !g_DwmRenderDebugMode
      && *((_BYTE *)v7 + 346)
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
        v8,
        (const void *)&g_DwmRenderDebugMode);
      __debugbreak();
    }
    return v8;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v5, v4);
    v12 = PsGetCurrentProcess();
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    *(_QWORD *)(v11 + 24) = v12;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
}

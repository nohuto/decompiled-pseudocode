/*
 * XREFs of ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C02123FC
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1C0226150 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0159E80 (DxgkMiracastStopAllMiracastSessions.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodTerminateIndirectOutput(ADAPTER_DISPLAY *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int (__fastcall *v8)(_QWORD, _QWORD); // rax

  v4 = (unsigned int)a2;
  if ( !*((_QWORD *)this + 48) )
    return 3221225485LL;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v6 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v6 + 24) = v4;
LABEL_5:
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
  v7 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v7 + 348) & 0x100) == 0 )
  {
    v6 = WdLogNewEntry5_WdWarning(v7, a2, a3);
    *(_QWORD *)(v6 + 24) = *((_QWORD *)this + 2);
    goto LABEL_5;
  }
  v8 = *(unsigned int (__fastcall **)(_QWORD, _QWORD))(v7 + 1952);
  if ( !v8 )
    return 3221225659LL;
  if ( v8(*(_QWORD *)(v7 + 1888), (unsigned int)a2) == -1073741637 )
    DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x90u);
  return 0LL;
}

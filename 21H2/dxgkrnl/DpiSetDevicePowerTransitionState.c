/*
 * XREFs of DpiSetDevicePowerTransitionState @ 0x1C0051C20
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C00517F4 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0051F4C (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C0052068 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C003A2E0 (McTemplateK0pq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall DpiSetDevicePowerTransitionState(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // zf
  int v9; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdPower();
  v4[5] = 0LL;
  v4[3] = a1;
  v4[4] = v2;
  result = WdLogEvent5_WdPower(v4);
  v8 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 4136) = v2;
  if ( !v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    v9 = v2;
    return McTemplateK0pq_EtwWriteTransfer(v6, &Dxgk_SetDevicePowerTransitionState, v7, *(_QWORD *)(a1 + 3896), v9);
  }
  return result;
}

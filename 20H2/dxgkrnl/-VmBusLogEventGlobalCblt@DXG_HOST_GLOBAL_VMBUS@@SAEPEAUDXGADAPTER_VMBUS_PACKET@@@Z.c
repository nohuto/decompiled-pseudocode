/*
 * XREFs of ?VmBusLogEventGlobalCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D7820
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0025A64 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021FEF0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusLogEventGlobalCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rax

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  if ( v1 )
    v2 = v1 + 40;
  else
    v2 = 0LL;
  v3 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>(v2);
  v6 = v3;
  if ( v3 )
  {
    if ( *(int *)(v3 + 32) >= 0 )
    {
      v8 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v8 + 24) = *(int *)(v6 + 24);
      *(_QWORD *)(v8 + 32) = *(unsigned int *)(v6 + 28);
      WdLogEvent5_WdEvent(v8);
    }
    else
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
      v7[3] = *(int *)(v6 + 32);
      v7[4] = *(int *)(v6 + 24);
      v7[5] = *(unsigned int *)(v6 + 28);
      WdLogEvent5_WdError(v7);
    }
    if ( *(_DWORD *)(v6 + 24) == 1 && !_InterlockedCompareExchange(&dword_1C00B1260, 1, 0) )
      DxgCreateLiveDumpWithWdLogs(
        *(_DWORD *)(v6 + 28),
        *(_QWORD *)(v6 + 40),
        *(_QWORD *)(v6 + 48),
        *(_QWORD *)(v6 + 56),
        *(_QWORD *)(v6 + 64),
        1);
  }
  return 0;
}

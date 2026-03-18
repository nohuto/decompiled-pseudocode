/*
 * XREFs of EtwProviderEnabled @ 0x1402EC010
 * Callers:
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 *     EtwTraceMemoryAcg @ 0x1402EBFB4 (EtwTraceMemoryAcg.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140324F30 (EtwTiLogInsertQueueUserApc.c)
 *     EtwpLogMemNodeInfo @ 0x1405A7368 (EtwpLogMemNodeInfo.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1405D982C (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogReadWriteVm @ 0x140699CB8 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogAllocExecVm @ 0x140699E68 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x14069A054 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSetContextThread @ 0x1406C7D98 (EtwTiLogSetContextThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406DB530 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwTiLogMapExecView @ 0x1406DDC94 (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetSwap @ 0x1406F07D8 (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406F0F00 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x1407662BC (EtwTiLogDriverObjectUnLoad.c)
 *     EtwTiLogDriverObjectLoad @ 0x14076E000 (EtwTiLogDriverObjectLoad.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14079B220 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093E2DC (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093E444 (EtwTiLogSuspendResumeThread.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402804B0 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v3; // r8
  BOOLEAN v4; // r9
  __int64 v5; // r10
  unsigned __int8 v6; // r11

  if ( !RegHandle )
    return 0;
  if ( EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 32) + 96LL, Level, Keyword) )
    return 1;
  if ( *(_BYTE *)(v5 + 101) != v4 && EtwpLevelKeywordEnabled(*(_QWORD *)(v5 + 40) + 96LL, v6, v3) )
    return 1;
  return v4;
}

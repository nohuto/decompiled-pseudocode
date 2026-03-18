/*
 * XREFs of EtwProviderEnabled @ 0x140357A20
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140316780 (EtwTiLogInsertQueueUserApc.c)
 *     KeInsertQueueApc @ 0x1403575C0 (KeInsertQueueApc.c)
 *     EtwTraceMemoryAcg @ 0x1403579C4 (EtwTraceMemoryAcg.c)
 *     EtwpLogMemNodeInfo @ 0x1405A31D8 (EtwpLogMemNodeInfo.c)
 *     EtwTraceWorkingSetSwap @ 0x140655B80 (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140656240 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406E5140 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwTiLogMapExecView @ 0x1406E7D58 (EtwTiLogMapExecView.c)
 *     EtwTiLogSetContextThread @ 0x1406FD8E4 (EtwTiLogSetContextThread.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x140702FAC (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogAllocExecVm @ 0x14070902C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x140709218 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x14070933C (EtwTiLogReadWriteVm.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140754CF4 (EtwTiLogDriverObjectUnLoad.c)
 *     EtwTiLogDriverObjectLoad @ 0x14075D6E0 (EtwTiLogDriverObjectLoad.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140788960 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093720C (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x140937374 (EtwTiLogSuspendResumeThread.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14026EA90 (EtwpLevelKeywordEnabled.c)
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

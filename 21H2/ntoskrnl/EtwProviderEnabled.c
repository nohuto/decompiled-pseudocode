/*
 * XREFs of EtwProviderEnabled @ 0x14025F840
 * Callers:
 *     EtwTraceMemoryAcg @ 0x14025F7E8 (EtwTraceMemoryAcg.c)
 *     KeInsertQueueApc @ 0x14025F8C0 (KeInsertQueueApc.c)
 *     EtwTiLogInsertQueueUserApc @ 0x1402C57E0 (EtwTiLogInsertQueueUserApc.c)
 *     EtwpLogMemNodeInfo @ 0x1405A8D98 (EtwpLogMemNodeInfo.c)
 *     EtwTiLogAllocExecVm @ 0x14062909C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x140629288 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406293AC (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x140696CB8 (EtwTiLogSetContextThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406BAE00 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwTiLogMapExecView @ 0x1406BDCE4 (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140710328 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x14071071C (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14071BB4C (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140769A3C (EtwTiLogDriverObjectUnLoad.c)
 *     EtwTiLogDriverObjectLoad @ 0x1407721C0 (EtwTiLogDriverObjectLoad.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407BEAD0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093BAAC (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093BC14 (EtwTiLogSuspendResumeThread.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140220B80 (EtwpLevelKeywordEnabled.c)
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

/*
 * XREFs of EtwProviderEnabled @ 0x1402FBA40
 * Callers:
 *     KeInsertQueueApc @ 0x1402FB5E0 (KeInsertQueueApc.c)
 *     EtwTraceMemoryAcg @ 0x1402FB9E4 (EtwTraceMemoryAcg.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140354270 (EtwTiLogInsertQueueUserApc.c)
 *     EtwpLogMemNodeInfo @ 0x1405A38C8 (EtwpLogMemNodeInfo.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1406348FC (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogAllocExecVm @ 0x1406B31DC (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x1406B33C8 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406B34EC (EtwTiLogReadWriteVm.c)
 *     EtwTraceWorkingSetSwap @ 0x1406D01E0 (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406D08A0 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogSetContextThread @ 0x1406E66C4 (EtwTiLogSetContextThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x140708D20 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwTiLogMapExecView @ 0x14070BB14 (EtwTiLogMapExecView.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x14075767C (EtwTiLogDriverObjectUnLoad.c)
 *     EtwTiLogDriverObjectLoad @ 0x14075F990 (EtwTiLogDriverObjectLoad.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14077D740 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409384AC (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x140938614 (EtwTiLogSuspendResumeThread.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140215A40 (EtwpLevelKeywordEnabled.c)
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

/*
 * XREFs of EtwProviderEnabled @ 0x14027E6F0
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140243FC0 (EtwTiLogInsertQueueUserApc.c)
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     EtwTraceMemoryAcg @ 0x14027E69C (EtwTraceMemoryAcg.c)
 *     EtwpLogMemNodeInfo @ 0x1405A8FC8 (EtwpLogMemNodeInfo.c)
 *     EtwTiLogSetContextThread @ 0x1405F6208 (EtwTiLogSetContextThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x14061A0D0 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwTiLogMapExecView @ 0x14061CEF4 (EtwTiLogMapExecView.c)
 *     EtwTiLogReadWriteVm @ 0x140690354 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogAllocExecVm @ 0x140690504 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x1406906F0 (EtwTiLogProtectExecVm.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406BE978 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x1406BED6C (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1406C9FBC (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140769BFC (EtwTiLogDriverObjectUnLoad.c)
 *     EtwTiLogDriverObjectLoad @ 0x140772380 (EtwTiLogDriverObjectLoad.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407B9E60 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093BC7C (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093BDE4 (EtwTiLogSuspendResumeThread.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402C5480 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  BOOLEAN v5; // r9
  __int64 v6; // r10
  char v7; // r11

  if ( !RegHandle )
    return 0;
  if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 32) + 96LL, Level, Keyword) )
    return 1;
  if ( *(_BYTE *)(v6 + 101) != v5 )
  {
    LOBYTE(v3) = v7;
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v6 + 40) + 96LL, v3, v4) )
      return 1;
  }
  return v5;
}

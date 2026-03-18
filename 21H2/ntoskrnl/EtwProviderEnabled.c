/*
 * XREFs of EtwProviderEnabled @ 0x1402EDE50
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x14024BD24 (EtwTiLogInsertQueueUserApc.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     EtwTraceMemoryAcg @ 0x1402EDDF8 (EtwTraceMemoryAcg.c)
 *     EtwpLogMemNodeInfo @ 0x14062F0B8 (EtwpLogMemNodeInfo.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406D97E0 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406E30E0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406EBE78 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x1406EC338 (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogSetContextThread @ 0x14070592C (EtwTiLogSetContextThread.c)
 *     EtwTiLogDriverObjectLoad @ 0x140747D68 (EtwTiLogDriverObjectLoad.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14074F418 (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogAllocExecVm @ 0x14079EA28 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x14079EC58 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140857064 (EtwTiLogDriverObjectUnLoad.c)
 *     EtwTiLogProtectExecVm @ 0x1408833DA (EtwTiLogProtectExecVm.c)
 *     EtwTiLogMapExecView @ 0x1409E637C (EtwTiLogMapExecView.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E6524 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1409E668C (EtwTiLogSuspendResumeThread.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1403031F0 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v4; // rax
  UCHAR v5; // cl
  BOOLEAN result; // al

  result = 0;
  if ( RegHandle )
  {
    v4 = *(_QWORD *)(RegHandle + 32);
    if ( *(_DWORD *)(v4 + 96) )
    {
      v5 = *(_BYTE *)(v4 + 100);
      if ( (Level <= v5 || !v5)
        && ((*(_DWORD *)(v4 + 104) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v4 + 112)) != 0 && (Keyword & *(_QWORD *)(v4 + 120)) == *(_QWORD *)(v4 + 120)) )
      {
        return 1;
      }
    }
    if ( *(_BYTE *)(RegHandle + 101)
      && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 40) + 96LL, Level, Keyword) )
    {
      return 1;
    }
  }
  return result;
}

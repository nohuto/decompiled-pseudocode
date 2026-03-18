/*
 * XREFs of ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0013AA4
 * Callers:
 *     REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_9022559c506eea4a40f12462611e4244___ @ 0x1C001FAFC (REMOTEVSYNCMAPPING--RemoveMappingInternal__lambda_9022559c506eea4a40f12462611e4244___.c)
 *     REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_1780769ec5f9365cce61534bff2f229f___ @ 0x1C004D168 (REMOTEVSYNCMAPPING--RemoveMappingInternal__lambda_1780769ec5f9365cce61534bff2f229f___.c)
 *     REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_ed8f9bca20cd5704cf0fee5400ab1066___ @ 0x1C004D334 (REMOTEVSYNCMAPPING--RemoveMappingInternal__lambda_ed8f9bca20cd5704cf0fee5400ab1066___.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C005D370 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0135030 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C013FA94 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01402B0 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0141110 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0146C30 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C020D908 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DecrementVSyncWaiter(DXGADAPTER *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rcx

  v3 = (*((_DWORD *)this + 636) & 0x10) != 0 ? (unsigned int)a2 : 0;
  if ( (unsigned int)v3 < 0x10 )
  {
    v4 = (unsigned int)v3;
    if ( _InterlockedDecrement((volatile signed __int32 *)this + v3 + 676) < 0 )
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, a2);
      v5[3] = 275LL;
      v5[4] = 37LL;
      v5[5] = this;
      v6 = *((unsigned int *)this + v4 + 676);
      v5[7] = 0LL;
      v5[6] = v6;
      WdLogEvent5_WdCriticalError(v5);
    }
  }
}

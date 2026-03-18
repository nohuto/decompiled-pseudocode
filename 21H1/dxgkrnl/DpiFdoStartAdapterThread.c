/*
 * XREFs of DpiFdoStartAdapterThread @ 0x1C0188D20
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C015A9A8 (DpiSessionCreateCallback.c)
 * Callees:
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C016F2E0 (DpiFdoStartAdapterThreadImpl.c)
 *     DxgkEnsureVmBusInterface @ 0x1C0267AF0 (DxgkEnsureVmBusInterface.c)
 */

void __fastcall DpiFdoStartAdapterThread(int *StartContext)
{
  char v2; // di
  NTSTATUS started; // esi
  int *PoolWithTag; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int *v9; // rbp
  __int64 v10; // rax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  if ( StartContext )
    v2 = *(_BYTE *)StartContext & 1;
  else
    v2 = 1;
  started = DpiFdoStartAdapterThreadImpl(StartContext, v2, &v11);
  if ( v11 )
  {
    DxgkEnsureVmBusInterface();
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x610uLL);
      started = DpiFdoStartAdapterThreadImpl(v9, 0, &v11);
      ExFreePoolWithTag(v9, 0x74727044u);
    }
    else
    {
      started = -1073741801;
      v10 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
      *(_QWORD *)(v10 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v10);
    }
  }
  if ( StartContext )
    ExFreePoolWithTag(StartContext, 0x74727044u);
  if ( !v2 )
    PsTerminateSystemThread(started);
}

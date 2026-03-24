/*
 * XREFs of DpiFdoStartAdapterThread @ 0x1C0199BE0
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C01554F0 (DpiSessionCreateCallback.c)
 * Callees:
 *     memset @ 0x1C0028F00 (memset.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0199C54 (DpiFdoStartAdapterThreadImpl.c)
 *     DxgkEnsureVmBusInterface @ 0x1C026C0D0 (DxgkEnsureVmBusInterface.c)
 */

void __fastcall DpiFdoStartAdapterThread(_BYTE *StartContext, __int64 a2)
{
  char v3; // di
  NTSTATUS started; // esi
  PVOID PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rbp
  __int64 v11; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0;
  if ( StartContext )
    v3 = *StartContext & 1;
  else
    v3 = 1;
  LOBYTE(a2) = v3;
  started = DpiFdoStartAdapterThreadImpl(StartContext, a2, &v12);
  if ( v12 )
  {
    DxgkEnsureVmBusInterface();
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x610uLL);
      started = DpiFdoStartAdapterThreadImpl(v10, 0LL, &v12);
      ExFreePoolWithTag(v10, 0x74727044u);
    }
    else
    {
      started = -1073741801;
      v11 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
      *(_QWORD *)(v11 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v11);
    }
  }
  if ( StartContext )
    ExFreePoolWithTag(StartContext, 0x74727044u);
  if ( !v3 )
    PsTerminateSystemThread(started);
}

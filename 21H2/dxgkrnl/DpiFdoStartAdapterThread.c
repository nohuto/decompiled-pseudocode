/*
 * XREFs of DpiFdoStartAdapterThread @ 0x1C01F4EF0
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C0160D20 (DpiSessionCreateCallback.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01F5298 (DpiFdoStartAdapterThreadImpl.c)
 *     DxgkEnsureVmBusInterface @ 0x1C030D2CC (DxgkEnsureVmBusInterface.c)
 */

void __fastcall DpiFdoStartAdapterThread(_BYTE *StartContext, __int64 a2)
{
  char v3; // di
  NTSTATUS started; // esi
  PVOID PoolWithTag; // rax
  void *v6; // rbp
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  if ( StartContext )
    v3 = *StartContext & 1;
  else
    v3 = 1;
  LOBYTE(a2) = v3;
  started = DpiFdoStartAdapterThreadImpl(StartContext, a2, &v7);
  if ( v7 )
  {
    DxgkEnsureVmBusInterface();
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x610uLL);
      started = DpiFdoStartAdapterThreadImpl(v6, 0LL, &v7);
      ExFreePoolWithTag(v6, 0x74727044u);
    }
    else
    {
      started = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
    }
  }
  if ( StartContext )
    ExFreePoolWithTag(StartContext, 0x74727044u);
  if ( !v3 )
    PsTerminateSystemThread(started);
}

/*
 * XREFs of NtCreateRegistryTransaction @ 0x14070BE70
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateRegistryTransaction(HANDLE *a1, ACCESS_MASK a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // si
  char PreviousMode; // r15
  __int64 v11; // rax
  PADAPTER_OBJECT v12; // rcx
  int Object; // edi
  __int64 v15; // [rsp+20h] [rbp-68h]
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+60h] [rbp-28h] BYREF

  DmaAdapter[0] = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v9 )
  {
    if ( a4 )
    {
      Object = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v11 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
          v11 = (__int64)a1;
        *(_QWORD *)v11 = 0LL;
      }
      else
      {
        *a1 = 0LL;
      }
      Object = ObCreateObjectEx(
                 PreviousMode,
                 CmRegistryTransactionType,
                 a3,
                 PreviousMode,
                 v15,
                 24,
                 0,
                 0,
                 DmaAdapter,
                 0LL);
      if ( Object >= 0 )
      {
        v12 = DmaAdapter[0];
        *DmaAdapter[0] = 0LL;
        *(_QWORD *)&v12[1].Version = 0LL;
        v12->DmaOperations = 0LL;
        Object = ObInsertObjectEx(v12, 0LL, a2, 0, 0, 0LL, (unsigned __int64 *)&Handle);
        DmaAdapter[0] = 0LL;
        if ( Object >= 0 )
        {
          *a1 = Handle;
          Handle = 0LL;
          Object = 0;
        }
      }
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Object = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( v9 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)Object;
}

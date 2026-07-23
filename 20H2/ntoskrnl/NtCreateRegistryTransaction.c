/*
 * XREFs of NtCreateRegistryTransaction @ 0x1406DDFB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 */

NTSTATUS __cdecl NtCreateRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes,
        ULONG CreateOptions)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // si
  char PreviousMode; // r15
  __int64 v11; // rax
  PADAPTER_OBJECT v12; // rcx
  NTSTATUS Object; // edi
  __int64 v15; // [rsp+20h] [rbp-68h]
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+60h] [rbp-28h] BYREF

  v5 = (int)ObjAttributes;
  DmaAdapter[0] = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v9 )
  {
    if ( CreateOptions )
    {
      Object = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v11 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)RegistryTransactionHandle < 0x7FFFFFFF0000LL )
          v11 = (__int64)RegistryTransactionHandle;
        *(_QWORD *)v11 = 0LL;
      }
      else
      {
        *RegistryTransactionHandle = 0LL;
      }
      Object = ObCreateObjectEx(
                 PreviousMode,
                 CmRegistryTransactionType,
                 v5,
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
        Object = ObInsertObjectEx(v12, 0LL, DesiredAccess, 0, 0, 0LL, &Handle);
        DmaAdapter[0] = 0LL;
        if ( Object >= 0 )
        {
          *RegistryTransactionHandle = Handle;
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
  return Object;
}

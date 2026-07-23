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
        Object = ObInsertObjectEx(v12, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&Handle);
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

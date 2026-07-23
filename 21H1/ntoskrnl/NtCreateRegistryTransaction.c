/*
 * XREFs of NtCreateRegistryTransaction @ 0x1406E8070
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 */

NTSTATUS __cdecl NtCreateRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes,
        ULONG CreateOptions)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  BOOLEAN v10; // si
  __int64 v11; // r8
  __int64 v12; // r9
  char PreviousMode; // r15
  __int64 v14; // rax
  PADAPTER_OBJECT v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  NTSTATUS Object; // edi
  __int64 v21; // [rsp+20h] [rbp-68h]
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+60h] [rbp-28h] BYREF

  DmaAdapter[0] = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v10 )
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
        v14 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)RegistryTransactionHandle < 0x7FFFFFFF0000LL )
          v14 = (__int64)RegistryTransactionHandle;
        *(_QWORD *)v14 = 0LL;
      }
      else
      {
        *RegistryTransactionHandle = 0LL;
      }
      Object = ObCreateObjectEx(
                 PreviousMode,
                 CmRegistryTransactionType,
                 (__int64)ObjAttributes,
                 PreviousMode,
                 v21,
                 24,
                 0,
                 0,
                 DmaAdapter,
                 0LL);
      if ( Object >= 0 )
      {
        v15 = DmaAdapter[0];
        *DmaAdapter[0] = 0LL;
        *(_QWORD *)&v15[1].Version = 0LL;
        v15->DmaOperations = 0LL;
        Object = ObInsertObjectEx(v15, 0LL, DesiredAccess, 0, 0, 0LL, &Handle);
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v11, v12);
    Object = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( v10 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
  }
  return Object;
}

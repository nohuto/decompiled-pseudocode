/*
 * XREFs of NtCreateRegistryTransaction @ 0x14061D260
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes,
        ULONG CreateOptions)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  int v9; // ecx
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
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-28h]

  v5 = (int)ObjAttributes;
  DmaAdapter = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
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
      LOBYTE(v9) = PreviousMode;
      Object = ObCreateObjectEx(v9, (_DWORD)CmRegistryTransactionType, v5, PreviousMode);
      if ( Object >= 0 )
      {
        v15 = DmaAdapter;
        *DmaAdapter = 0LL;
        v15[1] = 0LL;
        v15->DmaOperations = 0LL;
        Object = ObInsertObjectEx(v15, 0LL, 0, 0LL, (__int64)&Handle);
        DmaAdapter = 0LL;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v11, v12);
    Object = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v10 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
  }
  return Object;
}

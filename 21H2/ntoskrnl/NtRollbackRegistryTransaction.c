/*
 * XREFs of NtRollbackRegistryTransaction @ 0x1407338F0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406216F0 (CmpRollbackLightWeightTransaction.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtRollbackRegistryTransaction(HANDLE RegistryTransactionHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8; // eax
  volatile signed __int32 *v9; // rdi
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v16[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( Flags )
    {
      v10 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(
             RegistryTransactionHandle,
             0x10u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v9 = (volatile signed __int32 *)Object;
      v10 = v8;
      if ( v8 >= 0 )
      {
        CmpAttachToRegistryProcess((__int64)v16);
        v10 = CmpRollbackLightWeightTransaction(v9);
        KiUnstackDetachProcess((__int64)v16, 0LL);
        if ( v10 >= 0 )
          v10 = 0;
      }
      if ( v9 )
        HalPutDmaAdapter((PADAPTER_OBJECT)v9);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
    return -1073741431;
  }
  return v10;
}

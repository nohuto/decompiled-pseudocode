/*
 * XREFs of NtRollbackRegistryTransaction @ 0x14071F630
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406ECB40 (CmpRollbackLightWeightTransaction.c)
 */

NTSTATUS __cdecl NtRollbackRegistryTransaction(HANDLE RegistryTransactionHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  volatile signed __int32 *v12; // rdi
  NTSTATUS v13; // ebx
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v21[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v21, 0, sizeof(v21));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( Flags )
    {
      v13 = -1073741811;
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
      v12 = (volatile signed __int32 *)Object;
      v13 = v8;
      if ( v8 >= 0 )
      {
        CmpAttachToRegistryProcess((__int64)v21, v9, v10, v11);
        v13 = CmpRollbackLightWeightTransaction(v12);
        KiUnstackDetachProcess((__int64)v21, 0LL, v14, v15);
        if ( v13 >= 0 )
          v13 = 0;
      }
      if ( v12 )
        HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
    return -1073741431;
  }
  return v13;
}

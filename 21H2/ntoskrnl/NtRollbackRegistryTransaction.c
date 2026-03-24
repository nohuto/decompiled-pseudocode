/*
 * XREFs of NtRollbackRegistryTransaction @ 0x140733730
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406C29F0 (CmpRollbackLightWeightTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtRollbackRegistryTransaction(HANDLE Handle, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  volatile signed __int32 *v9; // rdi
  int v10; // ebx
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v13, 0, sizeof(v13));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( a2 )
    {
      v10 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v5 = ObReferenceObjectByHandle(
             Handle,
             0x10u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v9 = (volatile signed __int32 *)Object;
      v10 = v5;
      if ( v5 >= 0 )
      {
        CmpAttachToRegistryProcess((__int64)v13, v6, v7, v8);
        v10 = CmpRollbackLightWeightTransaction(v9);
        KiUnstackDetachProcess((__int64)v13, 0);
        if ( v10 >= 0 )
          v10 = 0;
      }
      if ( v9 )
        HalPutDmaAdapter((PADAPTER_OBJECT)v9);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v10;
}

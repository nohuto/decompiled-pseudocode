/*
 * XREFs of NtCreateKeyTransacted @ 0x140766380
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x1406A16E0 (CmpTransDereferenceTransaction.c)
 *     CmCreateKey @ 0x1406FF300 (CmCreateKey.c)
 */

__int64 __fastcall NtCreateKeyTransacted(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int128 *a5,
        int a6,
        HANDLE Handle,
        _DWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v13; // eax
  __int64 v14; // r9
  __int64 v15; // rbx
  NTSTATUS v17; // eax
  int Key; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v20; // [rsp+48h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v15 = (__int64)Object;
  Key = v13;
  if ( v13 == -1073741788 )
  {
    v20 = 0LL;
    v17 = ObReferenceObjectByHandle(
            Handle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v20,
            0LL);
    v15 = (__int64)v20;
    Key = v17;
LABEL_6:
    if ( Key >= 0 )
      Key = CmCreateKey(a1, a2, a3, v14, a5, a6, a8, v15);
    goto LABEL_8;
  }
  if ( v13 >= 0 )
  {
    v15 = (unsigned __int64)Object | 1;
    goto LABEL_6;
  }
LABEL_8:
  if ( v15 )
    CmpTransDereferenceTransaction(v15);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)Key;
}

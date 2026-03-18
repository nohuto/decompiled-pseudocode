/*
 * XREFs of NtCreateKeyTransacted @ 0x140754DC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x140656BF0 (CmpTransDereferenceTransaction.c)
 *     CmCreateKey @ 0x14068D940 (CmCreateKey.c)
 */

__int64 __fastcall NtCreateKeyTransacted(
        HANDLE *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        int a6,
        HANDLE Handle,
        _DWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v16; // eax
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  NTSTATUS v23; // eax
  int Key; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v26; // [rsp+48h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
    return (unsigned int)-1073741431;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v18 = (__int64)Object;
  Key = v16;
  if ( v16 == -1073741788 )
  {
    v26 = 0LL;
    v23 = ObReferenceObjectByHandle(
            Handle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v26,
            0LL);
    v18 = (__int64)v26;
    Key = v23;
LABEL_6:
    if ( Key >= 0 )
      Key = CmCreateKey(a1, a2, a3, v17, a5, a6, a8, v18);
    goto LABEL_8;
  }
  if ( v16 >= 0 )
  {
    v18 = (unsigned __int64)Object | 1;
    goto LABEL_6;
  }
LABEL_8:
  if ( v18 )
    CmpTransDereferenceTransaction(v18);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
  return (unsigned int)Key;
}

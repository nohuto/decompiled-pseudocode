/*
 * XREFs of NtCreateKeyTransacted @ 0x140769CC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     CmpTransDereferenceTransaction @ 0x1405DEFE0 (CmpTransDereferenceTransaction.c)
 *     CmCreateKey @ 0x140665B70 (CmCreateKey.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCreateKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        PULONG Disposition)
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
  NTSTATUS Key; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v26; // [rsp+48h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
    return -1073741431;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(TransactionHandle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v18 = (__int64)Object;
  Key = v16;
  if ( v16 == -1073741788 )
  {
    v26 = 0LL;
    v23 = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v26,
            0LL);
    v18 = (__int64)v26;
    Key = v23;
LABEL_6:
    if ( Key >= 0 )
      Key = CmCreateKey(
              KeyHandle,
              DesiredAccess,
              (ULONG_PTR)ObjectAttributes,
              v17,
              (__int128 *)Class,
              CreateOptions,
              Disposition,
              v18);
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
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
  return Key;
}

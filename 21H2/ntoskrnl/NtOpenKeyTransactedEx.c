/*
 * XREFs of NtOpenKeyTransactedEx @ 0x14067F130
 * Callers:
 *     NtOpenKeyTransacted @ 0x14090E860 (NtOpenKeyTransacted.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpTransDereferenceTransaction @ 0x14067F788 (CmpTransDereferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmOpenKey @ 0x1407CABA0 (CmOpenKey.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx(int a1, int a2, int a3, int a4, HANDLE Handle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // edi
  KPROCESSOR_MODE v13; // r9
  NTSTATUS v14; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17[3]; // [rsp+38h] [rbp-30h] BYREF

  *(_OWORD *)v17 = 0LL;
  CmpInitializeThreadInfo((__int64)v17);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
  {
    v12 = -1073741431;
    goto LABEL_8;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v11 = (__int64)Object;
  v12 = v10;
  if ( v10 != -1073741788 )
  {
    if ( v10 < 0 )
      goto LABEL_5;
    v11 = (unsigned __int64)Object | 1;
    goto LABEL_4;
  }
  v13 = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v13, &Object, 0LL);
  v11 = (__int64)Object;
  v12 = v14;
  if ( v14 >= 0 )
LABEL_4:
    v12 = CmOpenKey(a1, a2, a3, a4, v11, KeGetCurrentThread()->PreviousMode);
LABEL_5:
  if ( v11 )
    CmpTransDereferenceTransaction(v11);
  CmpReleaseShutdownRundown();
LABEL_8:
  CmCleanupThreadInfo(v17);
  return v12;
}

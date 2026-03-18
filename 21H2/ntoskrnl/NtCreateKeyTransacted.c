/*
 * XREFs of NtCreateKeyTransacted @ 0x14067EFD0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpTransDereferenceTransaction @ 0x14067F788 (CmpTransDereferenceTransaction.c)
 *     CmCreateKey @ 0x14067F8D0 (CmCreateKey.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtCreateKeyTransacted(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        HANDLE Handle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v11; // eax
  unsigned __int64 v12; // rbx
  unsigned int Key; // edi
  KPROCESSOR_MODE v14; // r9
  NTSTATUS v15; // eax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18[3]; // [rsp+48h] [rbp-20h] BYREF

  *(_OWORD *)v18 = 0LL;
  CmpInitializeThreadInfo((__int64)v18);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
  {
    Key = -1073741431;
    goto LABEL_8;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v12 = (unsigned __int64)Object;
  Key = v11;
  if ( v11 != -1073741788 )
  {
    if ( v11 < 0 )
      goto LABEL_5;
    v12 = (unsigned __int64)Object | 1;
    goto LABEL_4;
  }
  v14 = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v14, &Object, 0LL);
  v12 = (unsigned __int64)Object;
  Key = v15;
  if ( v15 >= 0 )
LABEL_4:
    Key = CmCreateKey(a1, a2, a3);
LABEL_5:
  if ( v12 )
    CmpTransDereferenceTransaction(v12);
  CmpReleaseShutdownRundown();
LABEL_8:
  CmCleanupThreadInfo(v18);
  return Key;
}

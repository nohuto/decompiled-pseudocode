/*
 * XREFs of CmpSaveBootControlSet @ 0x14090BC6C
 * Callers:
 *     CmpAcceptBoot @ 0x1406EA1C8 (CmpAcceptBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlUnicodeStringPrintf @ 0x1402D17BC (RtlUnicodeStringPrintf.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x14041E3C0 (ZwQuerySecurityObject.c)
 *     CmpCleanupRollbackPacket @ 0x140681834 (CmpCleanupRollbackPacket.c)
 *     CmpInvalidateSubtree @ 0x14069E21C (CmpInvalidateSubtree.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14069E26C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14069FC64 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x1406A0010 (CmpAbortRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406A0070 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpRebuildKcbCache @ 0x14071B3F0 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpRetryBackOff @ 0x14091BC2C (CmpRetryBackOff.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x14091CDE8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x14091D070 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x14091EE14 (CmpCopySyncTree.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  unsigned int v1; // r12d
  char v2; // r13
  _QWORD *v3; // rdi
  char v4; // r14
  ULONG_PTR *v5; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  struct _LOOKASIDE_LIST_EX *v11; // r9
  char v12; // r12
  int v13; // r8d
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r15
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  HANDLE v32; // rcx
  unsigned __int8 *v33; // rdx
  char v35; // [rsp+48h] [rbp-C0h]
  ULONG v36; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Length[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Disposition[2]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v41[3]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  __int128 v43; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v46[3]; // [rsp+E0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+118h] [rbp+10h] BYREF
  ULONG *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  __int64 *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  char v52; // [rsp+158h] [rbp+50h] BYREF

  v1 = a1;
  Disposition[0] = 0;
  KeyHandle = 0LL;
  memset(v41, 0, sizeof(v41));
  DestinationString = 0LL;
  v2 = 0;
  memset(&ObjectAttributes, 0, 44);
  v3 = 0LL;
  Disposition[1] = 0;
  v4 = 0;
  Handle = 0LL;
  v43 = 0LL;
  v5 = 0LL;
  v38 = 0LL;
  memset(v46, 0, sizeof(v46));
  TransientPoolWithTag = 0LL;
  Length[0] = 0;
  v36 = 0;
  CmpInitializeDelayDerefContext(&v43);
  v35 = CmpAcquireShutdownRundown(v8, v7, v9);
  if ( !v35 )
  {
    v10 = -1073741431;
    goto LABEL_31;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v10 >= 0 )
  {
    if ( ZwQuerySecurityObject(KeyHandle, 4u, 0LL, 0, Length) == -1073741789 )
    {
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                        PagedPool,
                                                        Length[0],
                                                        0x20204D43u,
                                                        v11);
      if ( TransientPoolWithTag )
      {
        if ( ZwQuerySecurityObject(KeyHandle, 4u, TransientPoolWithTag, Length[0], Length) < 0 )
        {
          CmSiFreeMemory(TransientPoolWithTag);
          TransientPoolWithTag = 0LL;
        }
      }
    }
    DestinationString.MaximumLength = 256;
    DestinationString.Buffer = (wchar_t *)&v52;
    RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\System\\ControlSet%03d", v1);
    v12 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = TransientPoolWithTag;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v10 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, Disposition);
    if ( TransientPoolWithTag )
      CmSiFreeMemory(TransientPoolWithTag);
    if ( v10 >= 0 )
    {
      v10 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v13, 0, (__int64)v41, 0LL);
      if ( v10 >= 0 )
      {
        v10 = CmObReferenceObjectByHandle((_DWORD)Handle, 131078, v14, 0, (__int64)&v38, 0LL);
        if ( v10 >= 0 )
        {
          CmpLockRegistryExclusive();
          v3 = (_QWORD *)v41[0];
          v15 = CmpPerformKeyBodyDeletionCheck(v41[0], 0LL);
          v5 = (ULONG_PTR *)v38;
          while ( 1 )
          {
            v10 = v15;
            if ( v15 < 0 || (v10 = CmpPerformKeyBodyDeletionCheck(v5, 0LL), v10 < 0) )
            {
LABEL_27:
              v4 = 1;
              goto LABEL_31;
            }
            v18 = v5[1];
            LOBYTE(v16) = 1;
            v19 = CmpTryAcquireKcbIXLocks(v18, v16, v17, (__int64)&v41[1]);
            v10 = v19;
            if ( v19 == -1073741267 )
            {
              v12 = 1;
            }
            else if ( v19 < 0 )
            {
              goto LABEL_27;
            }
            v20 = CmpPrepareToInvalidateAllHigherLayerKcbs(v18, 0LL, &v41[1]);
            v10 = v20;
            if ( v20 == -1073741267 )
            {
              v12 = 1;
            }
            else if ( v20 < 0 )
            {
              goto LABEL_27;
            }
            v21 = CmpPrepareForSubtreeInvalidation(v18, 0, (__int64)&v41[1]);
            v10 = v21;
            if ( v21 != -1073741267 )
            {
              if ( v21 < 0 )
                goto LABEL_27;
              if ( !v12 )
                break;
            }
            CmpLogTransactionAbortedForRollbackPacket(v18, 0xCu);
            CmpUnlockRegistry(v23, v22, v24, v25);
            v12 = 0;
            v10 = CmpAbortRollbackPacket((__int64)&v41[1], 0LL);
            if ( v10 < 0 )
              goto LABEL_31;
            CmpRetryBackOff(&v36);
            CmpCleanupRollbackPacket((__int64)&v41[1]);
            *(_OWORD *)&v41[1] = 0LL;
            CmpLockRegistryExclusive();
            v15 = CmpPerformKeyBodyDeletionCheck(v3, 0LL);
          }
          CmpInvalidateAllHigherLayerKcbs(v18, 8LL, 0LL, &v43);
          CmpInvalidateSubtree(v18, 8LL, 0, (__int64)&v43, &Disposition[1]);
          CmpAttachToRegistryProcess(v46);
          v2 = 1;
          v10 = CmpCopySyncTree(
                  *(_QWORD *)(v3[1] + 32LL),
                  *(_DWORD *)(v3[1] + 40LL),
                  *(_QWORD *)(v5[1] + 32),
                  *(_DWORD *)(v5[1] + 40),
                  2,
                  Disposition[0] != 1);
          CmpRebuildKcbCache(v5[1]);
          v4 = 1;
          goto LABEL_31;
        }
        v5 = (ULONG_PTR *)v38;
      }
      v3 = (_QWORD *)v41[0];
    }
  }
LABEL_31:
  CmpDrainDelayDerefContext((_QWORD **)&v43);
  if ( v4 )
    CmpUnlockRegistry(v27, v26, v28, v29);
  if ( v2 )
    CmpDetachFromRegistryProcess(v46);
  CmpCleanupRollbackPacket((__int64)&v41[1]);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  v32 = Handle;
  if ( Handle )
    ZwClose(Handle);
  if ( v35 )
    CmpReleaseShutdownRundown(v32, v30, v31);
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 0x400000000000LL) )
    {
      v36 = v10;
      v33 = (unsigned __int8 *)&dword_140028BB4;
      goto LABEL_52;
    }
  }
  else if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 0x400000000000LL) )
  {
    v33 = (unsigned __int8 *)byte_140028BF9;
    v36 = Disposition[1];
LABEL_52:
    v38 = 0x1000000LL;
    v49 = 4LL;
    v48 = &v36;
    v51 = 8LL;
    v50 = &v38;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03868, v33, 0LL, 0LL, 4u, &v47);
  }
  return (unsigned int)v10;
}

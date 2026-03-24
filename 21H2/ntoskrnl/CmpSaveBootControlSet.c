/*
 * XREFs of CmpSaveBootControlSet @ 0x140867A80
 * Callers:
 *     CmpAcceptBoot @ 0x14078D570 (CmpAcceptBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140206F90 (CmpAllocateTransientPoolWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     RtlUnicodeStringPrintf @ 0x14036EF9C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA5E0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA740 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x1403FCF20 (ZwQuerySecurityObject.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x140655680 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140656AB0 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x14066461C (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406C3144 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpCleanupRollbackPacket @ 0x14071C518 (CmpCleanupRollbackPacket.c)
 *     CmpRebuildKcbCache @ 0x14071D99C (CmpRebuildKcbCache.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076E1A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772AC4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140772CE0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077A8CC (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140875040 (CmpRetryBackOff.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140876258 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876520 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x1408784E4 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  unsigned int v1; // r12d
  char v2; // r13
  struct _DMA_ADAPTER *v3; // rsi
  char v4; // di
  struct _DMA_ADAPTER *v5; // r14
  struct _PRIVILEGE_SET *TransientPoolWithTag; // r15
  int v7; // ebx
  struct _LOOKASIDE_LIST_EX *v8; // r9
  char v9; // r12
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 DmaOperations; // r15
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  char v23; // bl
  __int16 *v24; // rdx
  BOOLEAN v26; // [rsp+48h] [rbp-C0h]
  ULONG v27; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Length[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Disposition[2]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _DMA_ADAPTER *v32[3]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v37[3]; // [rsp+E0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+118h] [rbp+10h] BYREF
  ULONG *v39; // [rsp+138h] [rbp+30h]
  __int64 v40; // [rsp+140h] [rbp+38h]
  __int64 *v41; // [rsp+148h] [rbp+40h]
  __int64 v42; // [rsp+150h] [rbp+48h]
  char v43; // [rsp+158h] [rbp+50h] BYREF

  v1 = a1;
  Disposition[0] = 0;
  KeyHandle = 0LL;
  memset(v32, 0, sizeof(v32));
  DestinationString = 0LL;
  v2 = 0;
  v3 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Disposition[1] = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  TransientPoolWithTag = 0LL;
  v34 = 0LL;
  Length[0] = 0;
  memset(v37, 0, sizeof(v37));
  v27 = 0;
  CmpInitializeDelayDerefContext(&v34);
  v26 = CmpAcquireShutdownRundown();
  if ( !v26 )
  {
    v7 = -1073741431;
    goto LABEL_33;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    if ( ZwQuerySecurityObject(KeyHandle, 4u, 0LL, 0, Length) == -1073741789 )
    {
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                        PagedPool,
                                                        Length[0],
                                                        0x20204D43u,
                                                        v8);
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
    DestinationString.Buffer = (wchar_t *)&v43;
    RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\System\\ControlSet%03d", v1);
    v9 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = TransientPoolWithTag;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v7 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, Disposition);
    if ( TransientPoolWithTag )
      CmSiFreeMemory(TransientPoolWithTag);
    if ( v7 >= 0 )
    {
      v7 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v10, 0, v32, 0LL);
      if ( v7 >= 0 )
      {
        v7 = CmObReferenceObjectByHandle(Handle, 0x20006u, v11, 0, (struct _DMA_ADAPTER **)&v29, 0LL);
        if ( v7 >= 0 )
        {
          CmpLockRegistryExclusive();
          v3 = v32[0];
          v12 = CmpPerformKeyBodyDeletionCheck((__int64)v32[0], 0LL);
          v5 = (struct _DMA_ADAPTER *)v29;
          while ( 1 )
          {
            v7 = v12;
            if ( v12 < 0 || (v7 = CmpPerformKeyBodyDeletionCheck((__int64)v5, 0LL), v7 < 0) )
            {
LABEL_27:
              v4 = 1;
              goto LABEL_33;
            }
            DmaOperations = (__int64)v5->DmaOperations;
            LOBYTE(v13) = 1;
            v16 = CmpTryAcquireKcbIXLocks(DmaOperations, v13, v14, (__int64)&v32[1]);
            v7 = v16;
            if ( v16 == -1073741267 )
            {
              v9 = 1;
            }
            else if ( v16 < 0 )
            {
              goto LABEL_27;
            }
            v17 = CmpPrepareToInvalidateAllHigherLayerKcbs(DmaOperations, 0LL, &v32[1]);
            v7 = v17;
            if ( v17 == -1073741267 )
            {
              v9 = 1;
            }
            else if ( v17 < 0 )
            {
              goto LABEL_27;
            }
            v18 = CmpPrepareForSubtreeInvalidation(DmaOperations, 0, (__int64)&v32[1]);
            v7 = v18;
            if ( v18 != -1073741267 )
            {
              if ( v18 < 0 )
                goto LABEL_27;
              if ( !v9 )
                break;
            }
            CmpLogTransactionAbortedForRollbackPacket(DmaOperations, 0xCu, (unsigned int *)&v32[1], v19);
            CmpUnlockRegistry();
            v9 = 0;
            v7 = CmpAbortRollbackPacket((__int64)&v32[1], 0LL);
            if ( v7 < 0 )
              goto LABEL_33;
            CmpRetryBackOff(&v27);
            CmpCleanupRollbackPacket((__int64)&v32[1]);
            *(_OWORD *)&v32[1] = 0LL;
            CmpLockRegistryExclusive();
            v12 = CmpPerformKeyBodyDeletionCheck((__int64)v3, 0LL);
          }
          CmpInvalidateAllHigherLayerKcbs(DmaOperations, 8LL, 0LL, &v34);
          CmpInvalidateSubtree(DmaOperations, 8, 0, (__int64)&v34, &Disposition[1]);
          CmpAttachToRegistryProcess((__int64)v37, v20, v21, v22);
          v2 = 1;
          v23 = CmpCopySyncTree(v3->DmaOperations->AllocateAdapterChannel, 2, Disposition[0] != 1);
          CmpRebuildKcbCache((ULONG_PTR)v5->DmaOperations, (__int64)&v34);
          v4 = 1;
          if ( v23 )
            v7 = 0;
          else
            v7 = -1073741492;
          goto LABEL_33;
        }
        v5 = (struct _DMA_ADAPTER *)v29;
      }
      v3 = v32[0];
    }
  }
LABEL_33:
  CmpDrainDelayDerefContext((_QWORD **)&v34);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess((__int64)v37);
  CmpCleanupRollbackPacket((__int64)&v32[1]);
  if ( v3 )
    HalPutDmaAdapter(v3);
  if ( v5 )
    HalPutDmaAdapter(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v26 )
    CmpReleaseShutdownRundown();
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
    {
      v27 = v7;
      v24 = &word_14002285E;
      goto LABEL_54;
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
  {
    v24 = word_14002280A;
    v27 = Disposition[1];
LABEL_54:
    v29 = 0x1000000LL;
    v40 = 4LL;
    v39 = &v27;
    v42 = 8LL;
    v41 = &v29;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)v24, 0LL, 0LL, 4u, &v38);
  }
  return (unsigned int)v7;
}

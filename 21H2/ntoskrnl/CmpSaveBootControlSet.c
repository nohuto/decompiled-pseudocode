/*
 * XREFs of CmpSaveBootControlSet @ 0x140867BE0
 * Callers:
 *     CmpAcceptBoot @ 0x14078D730 (CmpAcceptBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     RtlUnicodeStringPrintf @ 0x14036F14C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x1403FD100 (ZwQuerySecurityObject.c)
 *     CmpCleanupRollbackPacket @ 0x1405E094C (CmpCleanupRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1405E119C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpRebuildKcbCache @ 0x140614584 (CmpRebuildKcbCache.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076E364 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772C84 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140772EA0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077AA8C (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x1408751A0 (CmpRetryBackOff.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1408763B8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140876680 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x140878644 (CmpCopySyncTree.c)
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
  char v19; // bl
  unsigned __int8 *v20; // rdx
  BOOLEAN v22; // [rsp+48h] [rbp-C0h]
  ULONG v23; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Length[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Disposition[2]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _DMA_ADAPTER *v28[3]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  __int128 v30; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v33[3]; // [rsp+E0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+118h] [rbp+10h] BYREF
  ULONG *v35; // [rsp+138h] [rbp+30h]
  __int64 v36; // [rsp+140h] [rbp+38h]
  __int64 *v37; // [rsp+148h] [rbp+40h]
  __int64 v38; // [rsp+150h] [rbp+48h]
  char v39; // [rsp+158h] [rbp+50h] BYREF

  v1 = a1;
  Disposition[0] = 0;
  KeyHandle = 0LL;
  memset(v28, 0, sizeof(v28));
  DestinationString = 0LL;
  v2 = 0;
  v3 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Disposition[1] = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0LL;
  v25 = 0LL;
  TransientPoolWithTag = 0LL;
  v30 = 0LL;
  Length[0] = 0;
  memset(v33, 0, sizeof(v33));
  v23 = 0;
  CmpInitializeDelayDerefContext(&v30);
  v22 = CmpAcquireShutdownRundown();
  if ( !v22 )
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
    DestinationString.Buffer = (wchar_t *)&v39;
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
      v7 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v10, 0, v28, 0LL);
      if ( v7 >= 0 )
      {
        v7 = CmObReferenceObjectByHandle(Handle, 0x20006u, v11, 0, (struct _DMA_ADAPTER **)&v25, 0LL);
        if ( v7 >= 0 )
        {
          CmpLockRegistryExclusive();
          v3 = v28[0];
          v12 = CmpPerformKeyBodyDeletionCheck((__int64)v28[0], 0LL);
          v5 = (struct _DMA_ADAPTER *)v25;
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
            v16 = CmpTryAcquireKcbIXLocks(DmaOperations, v13, v14, (__int64)&v28[1]);
            v7 = v16;
            if ( v16 == -1073741267 )
            {
              v9 = 1;
            }
            else if ( v16 < 0 )
            {
              goto LABEL_27;
            }
            v17 = CmpPrepareToInvalidateAllHigherLayerKcbs(DmaOperations, 0LL, &v28[1]);
            v7 = v17;
            if ( v17 == -1073741267 )
            {
              v9 = 1;
            }
            else if ( v17 < 0 )
            {
              goto LABEL_27;
            }
            v18 = CmpPrepareForSubtreeInvalidation(DmaOperations, 0, (__int64)&v28[1]);
            v7 = v18;
            if ( v18 != -1073741267 )
            {
              if ( v18 < 0 )
                goto LABEL_27;
              if ( !v9 )
                break;
            }
            CmpLogTransactionAbortedForRollbackPacket(DmaOperations, 0xCu);
            CmpUnlockRegistry();
            v9 = 0;
            v7 = CmpAbortRollbackPacket((__int64)&v28[1], 0LL);
            if ( v7 < 0 )
              goto LABEL_33;
            CmpRetryBackOff(&v23);
            CmpCleanupRollbackPacket((__int64)&v28[1]);
            *(_OWORD *)&v28[1] = 0LL;
            CmpLockRegistryExclusive();
            v12 = CmpPerformKeyBodyDeletionCheck((__int64)v3, 0LL);
          }
          CmpInvalidateAllHigherLayerKcbs(DmaOperations, 8LL, 0LL, &v30);
          CmpInvalidateSubtree(DmaOperations, 8, 0, (__int64)&v30, &Disposition[1]);
          CmpAttachToRegistryProcess((__int64)v33);
          v2 = 1;
          v19 = CmpCopySyncTree(v3->DmaOperations->AllocateAdapterChannel, 2, Disposition[0] != 1);
          CmpRebuildKcbCache((ULONG_PTR)v5->DmaOperations);
          v4 = 1;
          if ( v19 )
            v7 = 0;
          else
            v7 = -1073741492;
          goto LABEL_33;
        }
        v5 = (struct _DMA_ADAPTER *)v25;
      }
      v3 = v28[0];
    }
  }
LABEL_33:
  CmpDrainDelayDerefContext((_QWORD **)&v30);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess((__int64)v33);
  CmpCleanupRollbackPacket((__int64)&v28[1]);
  if ( v3 )
    HalPutDmaAdapter(v3);
  if ( v5 )
    HalPutDmaAdapter(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v22 )
    CmpReleaseShutdownRundown();
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
    {
      v23 = v7;
      v20 = (unsigned __int8 *)word_1400228CA;
      goto LABEL_54;
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
  {
    v20 = (unsigned __int8 *)&byte_14002290F;
    v23 = Disposition[1];
LABEL_54:
    v25 = 0x1000000LL;
    v36 = 4LL;
    v35 = &v23;
    v38 = 8LL;
    v37 = &v25;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, v20, 0LL, 0LL, 4u, &v34);
  }
  return (unsigned int)v7;
}

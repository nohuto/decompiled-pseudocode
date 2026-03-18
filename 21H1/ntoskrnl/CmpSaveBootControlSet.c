/*
 * XREFs of CmpSaveBootControlSet @ 0x140863130
 * Callers:
 *     CmpAcceptBoot @ 0x140778D80 (CmpAcceptBoot.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14025C5C0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     RtlUnicodeStringPrintf @ 0x14036A8CC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x1403F4E90 (ZwQuerySecurityObject.c)
 *     CmpReleaseShutdownRundown @ 0x1405EACA0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405EBEF0 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x140658FF0 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpCleanupRollbackPacket @ 0x14065B6DC (CmpCleanupRollbackPacket.c)
 *     CmpRebuildKcbCache @ 0x14068E350 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1407599F0 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14075DFD4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x14075E1E0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x140765F2C (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140870928 (CmpRetryBackOff.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140871AA8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140871D70 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x140873D24 (CmpCopySyncTree.c)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  char v22; // bl
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  unsigned __int8 *v26; // rdx
  BOOLEAN v28; // [rsp+48h] [rbp-C0h]
  ULONG v29; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Length[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Disposition[2]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _DMA_ADAPTER *v34[3]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  __int128 v36; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v39[3]; // [rsp+E0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+118h] [rbp+10h] BYREF
  ULONG *v41; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  __int64 *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  char v45; // [rsp+158h] [rbp+50h] BYREF

  v1 = a1;
  Disposition[0] = 0;
  KeyHandle = 0LL;
  memset(v34, 0, sizeof(v34));
  DestinationString = 0LL;
  v2 = 0;
  v3 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Disposition[1] = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0LL;
  v31 = 0LL;
  TransientPoolWithTag = 0LL;
  v36 = 0LL;
  Length[0] = 0;
  memset(v39, 0, sizeof(v39));
  v29 = 0;
  CmpInitializeDelayDerefContext(&v36);
  v28 = CmpAcquireShutdownRundown();
  if ( !v28 )
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
    DestinationString.Buffer = (wchar_t *)&v45;
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
      v7 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v10, 0, v34, 0LL);
      if ( v7 >= 0 )
      {
        v7 = CmObReferenceObjectByHandle(Handle, 0x20006u, v11, 0, (struct _DMA_ADAPTER **)&v31, 0LL);
        if ( v7 >= 0 )
        {
          CmpLockRegistryExclusive();
          v3 = v34[0];
          v12 = CmpPerformKeyBodyDeletionCheck((__int64)v34[0], 0LL);
          v5 = (struct _DMA_ADAPTER *)v31;
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
            v16 = CmpTryAcquireKcbIXLocks(DmaOperations, v13, v14, (__int64)&v34[1]);
            v7 = v16;
            if ( v16 == -1073741267 )
            {
              v9 = 1;
            }
            else if ( v16 < 0 )
            {
              goto LABEL_27;
            }
            v17 = CmpPrepareToInvalidateAllHigherLayerKcbs(DmaOperations, 0LL, &v34[1]);
            v7 = v17;
            if ( v17 == -1073741267 )
            {
              v9 = 1;
            }
            else if ( v17 < 0 )
            {
              goto LABEL_27;
            }
            v18 = CmpPrepareForSubtreeInvalidation(DmaOperations, (__int64)&v34[1]);
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
            v7 = CmpAbortRollbackPacket((__int64)&v34[1]);
            if ( v7 < 0 )
              goto LABEL_33;
            CmpRetryBackOff(&v29);
            CmpCleanupRollbackPacket((__int64)&v34[1]);
            *(_OWORD *)&v34[1] = 0LL;
            CmpLockRegistryExclusive();
            v12 = CmpPerformKeyBodyDeletionCheck((__int64)v3, 0LL);
          }
          CmpInvalidateAllHigherLayerKcbs(DmaOperations, 0LL, 8LL, &v36);
          CmpInvalidateSubtree(DmaOperations, 8, (__int64)&v36, &Disposition[1]);
          CmpAttachToRegistryProcess((__int64)v39, v19, v20, v21);
          v2 = 1;
          v22 = CmpCopySyncTree(v3->DmaOperations->AllocateAdapterChannel, 2, Disposition[0] != 1);
          CmpRebuildKcbCache((ULONG_PTR)v5->DmaOperations);
          v4 = 1;
          if ( v22 )
            v7 = 0;
          else
            v7 = -1073741492;
          goto LABEL_33;
        }
        v5 = (struct _DMA_ADAPTER *)v31;
      }
      v3 = v34[0];
    }
  }
LABEL_33:
  CmpDrainDelayDerefContext((_QWORD **)&v36);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess((__int64)v39, v23, v24, v25);
  CmpCleanupRollbackPacket((__int64)&v34[1]);
  if ( v3 )
    HalPutDmaAdapter(v3);
  if ( v5 )
    HalPutDmaAdapter(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v28 )
    CmpReleaseShutdownRundown();
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
    {
      v29 = v7;
      v26 = (unsigned __int8 *)word_1400217AA;
      goto LABEL_54;
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
  {
    v26 = (unsigned __int8 *)&byte_1400217EF;
    v29 = Disposition[1];
LABEL_54:
    v31 = 0x1000000LL;
    v42 = 4LL;
    v41 = &v29;
    v44 = 8LL;
    v43 = &v31;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, v26, 0LL, 0LL, 4u, &v40);
  }
  return (unsigned int)v7;
}

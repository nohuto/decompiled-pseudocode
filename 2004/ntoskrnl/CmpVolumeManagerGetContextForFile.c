/*
 * XREFs of CmpVolumeManagerGetContextForFile @ 0x14063A1A4
 * Callers:
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407B6464 (CmpVolumeManagerGetContextForFilePath.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     IoGetAttachedDeviceReference @ 0x1402244D0 (IoGetAttachedDeviceReference.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     CmpVolumeManagerGetContextForGuidUnsafe @ 0x14063A36C (CmpVolumeManagerGetContextForGuidUnsafe.c)
 *     IoVolumeDeviceToGuid @ 0x14063A3D0 (IoVolumeDeviceToGuid.c)
 *     CmpVolumeContextCreate @ 0x1407BD5B0 (CmpVolumeContextCreate.c)
 *     CmpVolumeManagerUnlockContextListExclusive @ 0x1407C1AD8 (CmpVolumeManagerUnlockContextListExclusive.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1407C27D8 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmpVolumeContextFree @ 0x14086FA24 (CmpVolumeContextFree.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFile(__int64 a1, void *a2, __int64 a3, PPRIVILEGE_SET *a4)
{
  struct _OBJECT_TYPE *v5; // r8
  NTSTATUS v6; // ebx
  struct _DMA_ADAPTER *AttachedDeviceReference; // r14
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  PPRIVILEGE_SET ContextForGuidUnsafe; // rbx
  __int64 v12; // rcx
  struct _PRIVILEGE_SET *v13; // rdi
  __int64 v15; // rcx
  PPRIVILEGE_SET *v16; // rcx
  PPRIVILEGE_SET Privileges; // [rsp+30h] [rbp-30h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+48h] [rbp-18h] BYREF

  Privileges = 0LL;
  DmaAdapter = 0LL;
  v5 = *(struct _OBJECT_TYPE **)CmIoFileObjectType;
  v19 = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 0x80u, v5, 0, (PVOID *)&DmaAdapter, 0LL);
  if ( v6 < 0 )
    goto LABEL_15;
  AttachedDeviceReference = (struct _DMA_ADAPTER *)IoGetAttachedDeviceReference((PDEVICE_OBJECT)DmaAdapter->DmaOperations);
  v8 = IoVolumeDeviceToGuid(AttachedDeviceReference, &v19);
  v6 = v8;
  if ( v8 == -1073741811 || v8 == -1073741637 || v8 == -1073741808 )
  {
    v6 = CmpVolumeContextCreate(v9, 0LL, &Privileges);
    if ( v6 >= 0 )
    {
      CmpVolumeManagerLockContextListExclusive(&CmpVolumeManager);
      goto LABEL_20;
    }
LABEL_24:
    v13 = Privileges;
LABEL_11:
    if ( v13 )
      CmpVolumeContextFree(v13);
    goto LABEL_13;
  }
  if ( v8 >= 0 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpVolumeManager, 0LL);
    ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v10, &v19);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CmpVolumeManager);
    KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
    if ( ContextForGuidUnsafe )
    {
      v13 = Privileges;
LABEL_10:
      *a4 = ContextForGuidUnsafe;
      v6 = 0;
      goto LABEL_11;
    }
    v6 = CmpVolumeContextCreate(v12, AttachedDeviceReference, &Privileges);
    if ( v6 >= 0 )
    {
      CmpVolumeManagerLockContextListExclusive(&CmpVolumeManager);
      ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v15, &v19);
      if ( ContextForGuidUnsafe )
      {
        v13 = Privileges;
LABEL_22:
        CmpVolumeManagerUnlockContextListExclusive((ULONG_PTR)&CmpVolumeManager);
        goto LABEL_10;
      }
LABEL_20:
      v16 = (PPRIVILEGE_SET *)qword_140D2EF60;
      if ( *(__int64 **)qword_140D2EF60 != &qword_140D2EF58 )
        __fastfail(3u);
      ContextForGuidUnsafe = Privileges;
      v13 = 0LL;
      *(_QWORD *)&Privileges->PrivilegeCount = &qword_140D2EF58;
      ContextForGuidUnsafe->Privilege[0].Luid = (LUID)v16;
      *v16 = ContextForGuidUnsafe;
      qword_140D2EF60 = (__int64)ContextForGuidUnsafe;
      goto LABEL_22;
    }
    goto LABEL_24;
  }
LABEL_13:
  if ( AttachedDeviceReference )
    HalPutDmaAdapter(AttachedDeviceReference);
LABEL_15:
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return (unsigned int)v6;
}

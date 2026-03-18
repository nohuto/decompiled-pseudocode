/*
 * XREFs of CmpInitCmRM @ 0x140655B64
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     ExDeleteResourceLite @ 0x1402C3E70 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x1403F4D60 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x1403F4EA0 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x1403F5B00 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x1403F6300 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x1403F6320 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HvLockHiveFlusherShared @ 0x1405E2D14 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1405E2D30 (HvUnlockHiveFlusherShared.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     HvUnlockHiveWriter @ 0x14063B338 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x14063B368 (HvLockHiveWriter.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14063C974 (CmpQueryFileSecurityDescriptor.c)
 *     CmpQueryNameString @ 0x1406559A4 (CmpQueryNameString.c)
 *     LOCK_CM_RM_LIST @ 0x140655AB8 (LOCK_CM_RM_LIST.c)
 *     UNLOCK_CM_RM_LIST @ 0x140655AE4 (UNLOCK_CM_RM_LIST.c)
 *     CmpUuidCreate @ 0x1406564B4 (CmpUuidCreate.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     RtlStringFromGUID @ 0x1406A7C60 (RtlStringFromGUID.c)
 *     ExpAllocateStringRoutine @ 0x1406F19D0 (ExpAllocateStringRoutine.c)
 *     HvMarkBaseBlockDirty @ 0x14070ADAC (HvMarkBaseBlockDirty.c)
 *     CmpStartRMLog @ 0x14076ECD4 (CmpStartRMLog.c)
 *     CmpLogTxrInitEvent @ 0x140871940 (CmpLogTxrInitEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpInitCmRM(__int64 a1, char a2)
{
  char v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  struct _ERESOURCE *v11; // rbx
  __int64 v12; // rcx
  UUID v13; // xmm6
  UUID v14; // xmm7
  __int128 v15; // kr00_16
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rdx
  void *v19; // r12
  __int64 v20; // rcx
  int v21; // r14d
  UNICODE_STRING *p_Source; // rbx
  PSECURITY_DESCRIPTOR v23; // rbx
  struct _CLFS_MGMT_POLICY *v24; // rax
  struct _CLFS_MGMT_POLICY *v25; // r12
  unsigned int v26; // edx
  size_t v27; // r8
  ULONG v28; // ebx
  const void *v29; // rdx
  NTSTATUS v30; // eax
  void *v31; // rcx
  GUID v32; // xmm0
  HANDLE *v33; // rbx
  HANDLE v34; // rcx
  _QWORD *v35; // rax
  __int64 *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  void *v42; // rcx
  struct _DMA_ADAPTER *v43; // rcx
  void *v44; // rcx
  char v45; // [rsp+68h] [rbp-A0h]
  int v46; // [rsp+6Ch] [rbp-9Ch]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  FILE_OBJECT *pplfoLog; // [rsp+80h] [rbp-88h] BYREF
  PSECURITY_DESCRIPTOR P; // [rsp+88h] [rbp-80h] BYREF
  PVOID ClientCookie; // [rsp+90h] [rbp-78h] BYREF
  ULONG CreateOptions; // [rsp+98h] [rbp-70h]
  UNICODE_STRING GuidString; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING Source; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING LogFileName; // [rsp+C0h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-38h] BYREF
  PERESOURCE Resource; // [rsp+100h] [rbp-8h]
  _CLFS_MGMT_CLIENT_REGISTRATION RegistrationData; // [rsp+108h] [rbp+0h] BYREF
  GUID ResourceManagerGuid; // [rsp+140h] [rbp+38h] BYREF
  UUID Uuid; // [rsp+150h] [rbp+48h] BYREF
  UUID v60; // [rsp+160h] [rbp+58h] BYREF
  __int128 v61; // [rsp+170h] [rbp+68h]

  v45 = a2;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  v61 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  v4 = 0;
  ResourceManagerGuid = 0LL;
  Destination.Buffer = 0LL;
  Uuid = 0LL;
  pplfoLog = 0LL;
  v60 = 0LL;
  *(_QWORD *)&LogFileName.Length = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  LogFileName.Buffer = 0LL;
  CreateOptions = 0;
  P = 0LL;
  ClientCookie = 0LL;
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  v46 = 0;
  if ( CmpMiniNTBoot )
    return 0LL;
  v5 = qword_140C01170;
  if ( a1 )
    v5 = a1;
  if ( (*(_DWORD *)(v5 + 160) & 0x8001) != 0 )
    return 0LL;
  v7 = CmpUuidCreate(&Uuid);
  if ( v7 < 0 || (v7 = CmpUuidCreate(&v60), v7 < 0) )
  {
    *(_DWORD *)(v5 + 4200) = 1;
    *(_DWORD *)(v5 + 4204) = v7;
    CmpLogTxrInitEvent(v6, v5, (unsigned int)v7);
    return (unsigned int)v7;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x6D524D43u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(v5 + 4200) = 1;
LABEL_70:
    v21 = -1073741670;
    *(_DWORD *)(v5 + 4204) = -1073741670;
    CmpLogTxrInitEvent(v9, v5, 3221225626LL);
    return (unsigned int)v21;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  Resource = (PERESOURCE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C724D43u);
  v11 = Resource;
  if ( !Resource )
  {
    ExFreePoolWithTag(v10, 0x6D524D43u);
    *(_DWORD *)(v5 + 4200) = 2;
    goto LABEL_70;
  }
  v10[11] = 0LL;
  v10[3] = v10 + 2;
  v10[2] = v10 + 2;
  v10[12] = 0LL;
  *((_DWORD *)v10 + 26) = a2 != 0 ? 4 : 0;
  *(_QWORD *)((char *)v10 + 108) = 0LL;
  *((_DWORD *)v10 + 17) = 0;
  v10[9] = 0LL;
  v10[16] = v11;
  ExInitializeResourceLite(v11);
  v12 = *(_QWORD *)(v5 + 64);
  v13 = Uuid;
  v14 = v60;
  if ( *(_DWORD *)(v12 + 164) != 1836346738 )
  {
    *(_DWORD *)(v12 + 164) = 1836346738;
    goto LABEL_83;
  }
  v15 = v61;
  v16 = v61 - *(_QWORD *)(v12 + 148);
  if ( (_QWORD)v61 == *(_QWORD *)(v12 + 148) )
    v16 = *((_QWORD *)&v61 + 1) - *(_QWORD *)(v12 + 156);
  if ( !v16 )
  {
    *(UUID *)(v12 + 148) = v60;
    v12 = *(_QWORD *)(v5 + 64);
    v4 = 1;
    v46 = 1;
  }
  v17 = v15 - *(_QWORD *)(v12 + 112);
  if ( (_QWORD)v15 == *(_QWORD *)(v12 + 112) )
    v17 = *((_QWORD *)&v15 + 1) - *(_QWORD *)(v12 + 120);
  if ( !v17 )
  {
    *(UUID *)(v12 + 112) = v13;
    v12 = *(_QWORD *)(v5 + 64);
    v4 = 1;
  }
  v18 = v15 - *(_QWORD *)(v12 + 128);
  if ( !v18 )
    v18 = *((_QWORD *)&v15 + 1) - *(_QWORD *)(v12 + 136);
  if ( !v18 )
  {
    v4 = 1;
    *(_OWORD *)(v12 + 128) = *(_OWORD *)(v12 + 112);
  }
  while ( 1 )
  {
    if ( v4 )
    {
      CmpLockRegistry();
      HvLockHiveFlusherShared(v5);
      HvLockHiveWriter(v5);
      HvMarkBaseBlockDirty(v5);
      HvUnlockHiveWriter(v5);
      HvUnlockHiveFlusherShared(v5);
      CmpUnlockRegistry();
    }
    v19 = *(void **)(v5 + 1536);
    v21 = RtlStringFromGUID((const GUID *const)(*(_QWORD *)(v5 + 64) + 148LL), &GuidString);
    if ( v21 < 0 )
    {
      *(_DWORD *)(v5 + 4200) = 3;
      goto LABEL_99;
    }
    if ( a1 )
    {
      v21 = CmpQueryNameString(*(void **)(a1 + 1536), &Source);
      if ( v21 < 0 )
      {
        *(_DWORD *)(v5 + 4200) = 4;
        goto LABEL_99;
      }
      p_Source = &Source;
    }
    else
    {
      p_Source = (UNICODE_STRING *)&CmpLogPath;
      CreateOptions = 52;
    }
    Destination.MaximumLength = GuidString.Length + CmpClfsLogPrefix.Length + TmLogExt.Length + p_Source->Length;
    Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(Destination.MaximumLength);
    if ( !Destination.Buffer )
    {
      v21 = -1073741670;
      *(_DWORD *)(v5 + 4200) = 5;
LABEL_99:
      CmpLogTxrInitEvent(v20, v5, (unsigned int)v21);
      if ( ClientCookie )
      {
        ClfsMgmtDeregisterManagedClient(ClientCookie);
        ClientCookie = 0LL;
      }
      if ( pplfoLog )
        ClfsCloseLogFileObject(pplfoLog);
      if ( GuidString.Buffer )
        RtlFreeAnsiString(&GuidString);
      if ( Source.Buffer )
        RtlFreeAnsiString(&Source);
      if ( Destination.Buffer )
        RtlFreeAnsiString(&Destination);
      v42 = (void *)v10[6];
      if ( v42 )
        ZwClose(v42);
      v43 = (struct _DMA_ADAPTER *)v10[5];
      if ( v43 )
        HalPutDmaAdapter(v43);
      v44 = (void *)v10[4];
      if ( v44 )
        ZwClose(v44);
      ExFreePoolWithTag(v10, 0x6D524D43u);
      ExDeleteResourceLite(Resource);
      ExFreePoolWithTag(Resource, 0);
      *(_DWORD *)(v5 + 4204) = v21;
      return (unsigned int)v21;
    }
    RtlAppendUnicodeStringToString(&Destination, &CmpClfsLogPrefix);
    RtlAppendUnicodeStringToString(&Destination, p_Source);
    RtlAppendUnicodeStringToString(&Destination, &GuidString);
    RtlAppendUnicodeStringToString(&Destination, &TmLogExt);
    RtlFreeAnsiString(&GuidString);
    if ( a1 )
      RtlFreeAnsiString(&Source);
    v21 = CmpQueryFileSecurityDescriptor(v19, &P);
    if ( v21 < 0 )
    {
      *(_DWORD *)(v5 + 4200) = 6;
      goto LABEL_99;
    }
    v23 = P;
    v21 = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0000000, 7u, P, 3u, 8u, 0, 0x200u, 0LL, 0);
    ExFreePoolWithTag(v23, 0);
    if ( v21 >= 0 )
      break;
    if ( v46 )
    {
      *(_DWORD *)(v5 + 4200) = 7;
      goto LABEL_99;
    }
    RtlFreeAnsiString(&Destination);
    CmpLogTxrInitEvent(v41, v5, (unsigned int)v21);
LABEL_83:
    v4 = 1;
    v46 = 1;
    *(UUID *)(*(_QWORD *)(v5 + 64) + 148LL) = v14;
    *(UUID *)(*(_QWORD *)(v5 + 64) + 112LL) = v13;
    *(UUID *)(*(_QWORD *)(v5 + 64) + 128LL) = v13;
    if ( !a1 )
      v45 = 1;
  }
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  RegistrationData.Version = 1;
  v21 = ClfsMgmtRegisterManagedClient(pplfoLog, &RegistrationData, &ClientCookie);
  if ( v21 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 8;
    goto LABEL_99;
  }
  v24 = (struct _CLFS_MGMT_POLICY *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)TmContainerExt + 24LL,
                                      0x6D524D43u);
  v25 = v24;
  if ( !v24 )
  {
    *(_DWORD *)(v5 + 4200) = 9;
    goto LABEL_99;
  }
  v26 = (unsigned __int16)TmContainerExt;
  *(_OWORD *)&v24->Version = 0LL;
  v24->PolicyParameters.NewContainerSuffix.NextContainerSuffix = 0LL;
  v27 = v26;
  v28 = v26 + 24;
  v24->PolicyParameters.NewContainerPrefix.PrefixLengthInBytes = v26;
  v29 = off_140C04790;
  v24->LengthInBytes = v28;
  v24->Version = 1;
  v24->PolicyType = ClfsMgmtPolicyNewContainerExtension;
  memmove((char *)&v24->PolicyParameters + 2, v29, v27);
  v21 = ClfsMgmtInstallPolicy(pplfoLog, v25, v28);
  ExFreePoolWithTag(v25, 0);
  if ( v21 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 10;
    goto LABEL_99;
  }
  LogFileName.Length = Destination.Length - CmpClfsLogPrefix.Length;
  ObjectAttributes.Length = 48;
  LogFileName.MaximumLength = Destination.MaximumLength - CmpClfsLogPrefix.Length;
  LogFileName.Buffer = (wchar_t *)((char *)Destination.Buffer + CmpClfsLogPrefix.Length);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v30 = ZwCreateTransactionManager((PHANDLE)v10 + 4, 0xF003Fu, &ObjectAttributes, &LogFileName, CreateOptions, 0);
  v21 = v30;
  if ( v30 == -1073741771 )
  {
    if ( Destination.Buffer )
      RtlFreeAnsiString(&Destination);
    if ( pplfoLog )
    {
      ClfsCloseLogFileObject(pplfoLog);
      pplfoLog = 0LL;
    }
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( v46 )
      goto LABEL_39;
    goto LABEL_83;
  }
  if ( v30 >= 0 )
    v21 = ZwRecoverTransactionManager((HANDLE)v10[4]);
LABEL_39:
  RtlFreeAnsiString(&Destination);
  if ( v21 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 11;
    goto LABEL_99;
  }
  if ( pplfoLog )
  {
    ClfsCloseLogFileObject(pplfoLog);
    pplfoLog = 0LL;
  }
  if ( ClientCookie )
  {
    ClfsMgmtDeregisterManagedClient(ClientCookie);
    ClientCookie = 0LL;
  }
  v31 = (void *)v10[4];
  P = 0LL;
  v21 = ObReferenceObjectByHandle(v31, 0xF003Fu, (POBJECT_TYPE)TmTransactionManagerObjectType, 0, &P, 0LL);
  v10[5] = P;
  if ( v21 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 12;
    goto LABEL_99;
  }
  v32 = *(GUID *)(*(_QWORD *)(v5 + 64) + 112LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  v33 = (HANDLE *)(v10 + 6);
  ResourceManagerGuid = v32;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v21 = ZwCreateResourceManager(
          (PHANDLE)v10 + 6,
          0x1F007Fu,
          (HANDLE)v10[4],
          &ResourceManagerGuid,
          &ObjectAttributes,
          0,
          0LL);
  if ( v21 == -1073741771 )
    v21 = ZwOpenResourceManager((PHANDLE)v10 + 6, 0x1F007Fu, (HANDLE)v10[4], &ResourceManagerGuid, &ObjectAttributes);
  if ( v21 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 13;
    goto LABEL_99;
  }
  v21 = ZwRecoverResourceManager(*v33);
  if ( v21 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 14;
    goto LABEL_99;
  }
  v34 = *v33;
  P = 0LL;
  v21 = ObReferenceObjectByHandle(v34, 0x1F007Fu, (POBJECT_TYPE)TmResourceManagerObjectType, 0, &P, 0LL);
  v10[7] = P;
  if ( v21 < 0 )
  {
    *(_DWORD *)(v5 + 4200) = 15;
    goto LABEL_99;
  }
  if ( a1 )
  {
    *(_QWORD *)(a1 + 4192) = v10;
    *((_DWORD *)v10 + 16) = 1;
    goto LABEL_52;
  }
  CmRmSystem = v10;
  v37 = &qword_140C00F18;
  v38 = 7LL;
  while ( 2 )
  {
    v39 = v37[3];
    if ( v39 && (*(_DWORD *)(v39 + 160) & 2) == 0 )
    {
      ++*((_DWORD *)v10 + 16);
      v40 = v37[3];
      goto LABEL_63;
    }
    if ( *v37 && (*(_DWORD *)(*v37 + 160) & 2) == 0 )
    {
      ++*((_DWORD *)v10 + 16);
      v40 = *v37;
LABEL_63:
      *(_QWORD *)(v40 + 4192) = v10;
    }
    v37 += 25;
    if ( --v38 )
      continue;
    break;
  }
  *(_QWORD *)(CmpMasterHive + 4192) = v10;
  ++*((_DWORD *)v10 + 16);
LABEL_52:
  v10[10] = a1;
  LOCK_CM_RM_LIST();
  v35 = (_QWORD *)qword_140C47988;
  if ( *(__int64 **)qword_140C47988 != &CmpRmListHead )
    __fastfail(3u);
  *v10 = &CmpRmListHead;
  v10[1] = v35;
  *v35 = v10;
  qword_140C47988 = (__int64)v10;
  UNLOCK_CM_RM_LIST();
  if ( v45 )
    CmpStartRMLog(v10, 0LL);
  return 0LL;
}

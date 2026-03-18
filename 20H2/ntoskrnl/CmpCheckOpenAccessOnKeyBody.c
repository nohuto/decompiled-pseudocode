/*
 * XREFs of CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140204C50 (CmpAllocateTransientPoolWithTag.c)
 *     SeAccessCheck @ 0x140209C20 (SeAccessCheck.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14023F2F0 (PsGetServerSiloServiceSessionId.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x14031C770 (PsGetCurrentThreadProcess.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D3CAC (CmpSetKcbAtLayerHeight.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405F44C0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpIsKeyStackDeleted @ 0x14061B650 (CmpIsKeyStackDeleted.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmEqualTrans @ 0x1406A1CCC (CmEqualTrans.c)
 *     SeAppendPrivileges @ 0x1406B71B0 (SeAppendPrivileges.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406C3144 (CmpVEPerformOpenAccessCheck.c)
 *     CmListGetPrevElement @ 0x1406D5A2C (CmListGetPrevElement.c)
 *     CmpCheckKeyOwnerForPca @ 0x140711958 (CmpCheckKeyOwnerForPca.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14076AF88 (CmpSetAccessStateForBackupRestore.c)
 */

__int64 __fastcall CmpCheckOpenAccessOnKeyBody(
        _QWORD *Object,
        __int64 a2,
        _DWORD *a3,
        struct _ACCESS_STATE *a4,
        unsigned __int8 a5,
        char a6,
        __int64 ObjectCreated,
        char *a8,
        _DWORD *a9)
{
  __int16 v9; // ax
  struct _LOOKASIDE_LIST_EX *v11; // r9
  __int64 i; // r12
  __int64 v14; // rdx
  __int16 v15; // cx
  __int64 v16; // rdi
  char v17; // r15
  KPROCESSOR_MODE AccessMode; // r13
  __int64 v19; // r14
  ACCESS_MASK OriginalDesiredAccess; // edx
  __int64 v21; // rcx
  struct _PRIVILEGE_SET *v22; // r11
  int started; // edi
  ACCESS_MASK v24; // ecx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // r14
  struct _PRIVILEGE_SET *v28; // r12
  int v29; // edi
  __int16 v30; // dx
  PPRIVILEGE_SET j; // r15
  PPRIVILEGE_SET v32; // rax
  __int16 Control_high; // cx
  struct _KTHREAD *CurrentThread; // rax
  LUID Luid; // r15
  BOOLEAN v36; // r14
  ACCESS_MASK v37; // eax
  __int16 v38; // ax
  PERESOURCE *ClientToken; // rcx
  unsigned __int8 v40; // dl
  char v41; // al
  struct _KTHREAD *v43; // rax
  _KPROCESS *CurrentThreadProcess; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  unsigned __int16 *p_Depth; // r15
  __int64 v48; // r10
  __int64 PrevElement; // r14
  __int64 v50; // r10
  __int64 v51; // r10
  __int16 v52; // dx
  __int16 v53; // r15
  __int64 KcbAtLayerHeight; // rax
  __int64 v55; // r13
  SIZE_T v56; // r15
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-61h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-5Dh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-59h] BYREF
  __int64 v61; // [rsp+60h] [rbp-51h] BYREF
  __int128 v62; // [rsp+68h] [rbp-49h] BYREF
  PPRIVILEGE_SET v63[2]; // [rsp+78h] [rbp-39h]
  __int128 v64; // [rsp+88h] [rbp-29h] BYREF
  PPRIVILEGE_SET v65[2]; // [rsp+98h] [rbp-19h]

  v9 = *(_WORD *)(a2 + 2);
  v11 = 0LL;
  for ( i = a2; v9 >= 0; --v9 )
  {
    if ( v9 >= 2 )
      v14 = *(_QWORD *)(*(_QWORD *)(i + 24) + 8LL * v9 - 16);
    else
      v14 = *(_QWORD *)(i + 8LL * v9 + 8);
    v15 = *(_WORD *)(v14 + 66);
    if ( v15 && *(_BYTE *)(v14 + 65) == 1 )
      break;
    if ( *(_DWORD *)(v14 + 40) != -1 )
    {
      v11 = (struct _LOOKASIDE_LIST_EX *)v14;
      if ( v15 )
      {
        if ( *(_BYTE *)(v14 + 65) )
          break;
      }
    }
  }
  v16 = *(_QWORD *)v11->L.Future;
  if ( ObjectCreated )
  {
    p_Depth = &v11[2].L.Depth;
    v61 = 0LL;
    PrevElement = CmListGetPrevElement(&v11[2].L.Depth, &v61);
    if ( PrevElement )
    {
      while ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56), v48) || *(_DWORD *)(PrevElement + 68) != 9 )
      {
        PrevElement = CmListGetPrevElement(p_Depth, &v61);
        if ( !PrevElement )
          goto LABEL_9;
        v48 = ObjectCreated;
      }
      v16 = *(_QWORD *)(PrevElement + 88);
    }
  }
LABEL_9:
  v17 = a6;
  AccessMode = a5;
  if ( a6 )
  {
    LOBYTE(v11) = 1;
    if ( (int)CmpSetAccessStateForBackupRestore(a4, a5, v16 + 32, v11) < 0 )
      goto LABEL_74;
  }
  v19 = Object[1];
  OriginalDesiredAccess = a4->OriginalDesiredAccess;
  v64 = 0LL;
  WORD1(v64) = -1;
  v21 = *(_QWORD *)(v19 + 32);
  *(_OWORD *)v65 = 0LL;
  if ( (*(_DWORD *)(v21 + 160) & 0x100000) == 0 )
  {
    v22 = 0LL;
    started = 0;
    goto LABEL_12;
  }
  if ( (OriginalDesiredAccess & 0xD0026) == 0 )
  {
    v22 = 0LL;
    started = 0;
    goto LABEL_12;
  }
  if ( (OriginalDesiredAccess & 0xD0002) != 0 )
  {
    started = -1073741790;
LABEL_98:
    v22 = 0LL;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v21 + 4152) & 0x2000) == 0 )
  {
    started = -1073741790;
    goto LABEL_98;
  }
  if ( *(_BYTE *)(v19 + 65) )
  {
    started = -1073741790;
    goto LABEL_98;
  }
  started = CmpStartKcbStackForTopLayerKcb(&v64, v19);
  if ( started < 0 )
    goto LABEL_98;
  v53 = *(_WORD *)(v19 + 66) - 1;
  if ( v53 < 0 )
  {
LABEL_97:
    v17 = a6;
    goto LABEL_98;
  }
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v64, v53);
    WORD1(v64) = v53;
    v55 = KcbAtLayerHeight;
    if ( (unsigned __int8)CmpIsKeyStackDeleted(&v64, 0LL) )
    {
LABEL_95:
      started = -1073741790;
LABEL_96:
      AccessMode = a5;
      goto LABEL_97;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v55 + 32) + 160LL) & 0x100000) == 0 )
      break;
    if ( (*(_DWORD *)(*(_QWORD *)(v19 + 32) + 4152LL) & 0x2000) == 0 || *(_BYTE *)(v19 + 65) )
      goto LABEL_95;
    if ( --v53 < 0 )
      goto LABEL_96;
  }
  v17 = a6;
  v22 = 0LL;
  AccessMode = a5;
  started = 0;
LABEL_12:
  if ( v65[1] )
  {
    CmSiFreeMemory(v65[1]);
    v22 = 0LL;
  }
  if ( started < 0 || (v24 = a4->OriginalDesiredAccess, v25 = (__int64)a3, (v24 & a3[24]) != v24) )
  {
LABEL_74:
    v40 = 0;
    *a9 = -1073741790;
    v41 = 0;
    goto LABEL_44;
  }
  if ( v17 && !a4->RemainingDesiredAccess || !v24 && (*a3 & 0x1000) != 0 )
    goto LABEL_43;
  v26 = *((_DWORD *)Object + 12);
  GrantedAccess = 0;
  Privileges = 0LL;
  v62 = 0LL;
  WORD1(v62) = -1;
  *(_OWORD *)v63 = 0LL;
  if ( (v26 & 9) == 0 )
  {
    v27 = Object[1];
    v28 = 0LL;
    v29 = *(__int16 *)(v27 + 66);
    v30 = *(_WORD *)(v27 + 66);
    if ( v29 >= 2 )
    {
      v56 = 8LL * (unsigned int)(v29 - 1);
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v56, 0x35364D43u, v11);
      v28 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        AccessStatus = -1073741670;
        v36 = 0;
LABEL_39:
        v25 = (__int64)a3;
        i = a2;
        v17 = a6;
        goto LABEL_40;
      }
      memset(TransientPoolWithTag, 0, v56);
      v30 = *(_WORD *)(v27 + 66);
      v22 = 0LL;
    }
    LOWORD(v62) = v29;
    v63[1] = v28;
    WORD1(v62) = v30;
    if ( v30 )
    {
      v50 = *(_QWORD *)(v27 + 192);
      if ( v50 )
      {
        do
        {
          CmpSetKcbAtLayerHeight((__int64)&v62, v30, *(_QWORD *)(v50 + 16));
          v50 = *(_QWORD *)(v51 + 24);
          v30 = v52 - 1;
        }
        while ( v50 );
        v28 = v63[1];
        v30 = WORD1(v62);
      }
    }
    else
    {
      *((_QWORD *)&v62 + 1) = v27;
    }
    AccessStatus = (int)v22;
    for ( j = v22; v30 >= 0; --v30 )
    {
      if ( v30 >= 2 )
        v32 = (PPRIVILEGE_SET)*((_QWORD *)v28 + v30 - 2);
      else
        v32 = v63[v30 - 1];
      Control_high = HIWORD(v32[3].Control);
      if ( Control_high && BYTE1(v32[3].Control) == 1 )
        break;
      if ( v32[2].PrivilegeCount != -1 )
      {
        j = v32;
        if ( Control_high )
        {
          if ( BYTE1(v32[3].Control) )
            break;
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    Luid = j[4].Privilege[0].Luid;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)a4->SubjectSecurityContext.PrimaryToken + 6), 1u);
    if ( a4->SubjectSecurityContext.ClientToken )
    {
      v43 = KeGetCurrentThread();
      --v43->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)a4->SubjectSecurityContext.ClientToken + 6), 1u);
    }
    v36 = SeAccessCheck(
            (PSECURITY_DESCRIPTOR)(*(_QWORD *)&Luid + 32LL),
            &a4->SubjectSecurityContext,
            1u,
            a4->RemainingDesiredAccess,
            a4->PreviouslyGrantedAccess,
            &Privileges,
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            AccessMode,
            &GrantedAccess,
            &AccessStatus);
    if ( Privileges )
    {
      SeAppendPrivileges(a4, Privileges);
      CmSiFreeMemory(Privileges);
    }
    if ( v36 )
    {
      v37 = GrantedAccess;
      a4->PreviouslyGrantedAccess |= GrantedAccess;
      a4->RemainingDesiredAccess &= ~(v37 | 0x2000000);
    }
    *((_WORD *)Object + 24) |= 2u;
    v38 = *((_WORD *)Object + 24);
    if ( AccessMode )
    {
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)CmKeyObjectType + 1,
        Object,
        0LL,
        (PSECURITY_DESCRIPTOR)(*(_QWORD *)&Luid + 32LL),
        a4,
        0,
        v36,
        AccessMode,
        0LL,
        &a4->GenerateOnClose);
      v38 = *((_WORD *)Object + 24);
    }
    *((_WORD *)Object + 24) = v38 & 0xFFFD;
    ExReleaseResourceLite(*((PERESOURCE *)a4->SubjectSecurityContext.PrimaryToken + 6));
    KeLeaveCriticalRegion();
    ClientToken = (PERESOURCE *)a4->SubjectSecurityContext.ClientToken;
    if ( ClientToken )
    {
      ExReleaseResourceLite(ClientToken[6]);
      KeLeaveCriticalRegion();
    }
    goto LABEL_39;
  }
  AccessStatus = -1073741444;
  v36 = 0;
LABEL_40:
  if ( v63[1] )
  {
    CmSiFreeMemory(v63[1]);
    v25 = (__int64)a3;
  }
  if ( v36 )
  {
LABEL_43:
    v40 = 1;
    *a9 = 0;
    v41 = 0;
    goto LABEL_44;
  }
  if ( v17 )
    goto LABEL_49;
  if ( (int)CmpVEPerformOpenAccessCheck(Object, ObjectCreated, a4, AccessMode, v25, AccessStatus) >= 0 )
  {
    v40 = 1;
    *a9 = 0;
    v41 = 0;
    goto LABEL_44;
  }
  if ( KeGetCurrentThread()->PreviousMode == 1
    && (CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess),
        ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo),
        (unsigned int)MmGetSessionIdEx((__int64)CurrentThreadProcess) != ServerSiloServiceSessionId)
    && (a4->RemainingDesiredAccess & 0xD0026) != 0
    && (unsigned __int8)CmpCheckKeyOwnerForPca(i) )
  {
    v41 = 1;
    v40 = 0;
    *a9 = -1073741790;
  }
  else
  {
LABEL_49:
    v41 = 0;
    v40 = 0;
    *a9 = -1073741790;
  }
LABEL_44:
  *a8 = v41;
  return v40;
}

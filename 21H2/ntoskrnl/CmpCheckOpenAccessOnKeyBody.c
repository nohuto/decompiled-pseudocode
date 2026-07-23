/*
 * XREFs of CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x14023C620 (PsGetCurrentThreadProcess.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14027E130 (PsGetServerSiloServiceSessionId.c)
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6C8C (CmpSetKcbAtLayerHeight.c)
 *     CmpCheckKeyOwnerForPca @ 0x1405DA778 (CmpCheckKeyOwnerForPca.c)
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1405EA280 (CmpVEPerformOpenAccessCheck.c)
 *     SeAppendPrivileges @ 0x1405EA7C0 (SeAppendPrivileges.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406DC580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406DEBC0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x140712920 (CmpIsKeyStackDeleted.c)
 *     CmRmIsKCBVisible @ 0x1407139B0 (CmRmIsKCBVisible.c)
 *     CmListGetPrevElement @ 0x140768C48 (CmListGetPrevElement.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14076F0B4 (CmpSetAccessStateForBackupRestore.c)
 */

__int64 __fastcall CmpCheckOpenAccessOnKeyBody(
        _QWORD *Object,
        __int64 a2,
        __int64 a3,
        struct _ACCESS_STATE *a4,
        unsigned __int8 AccessMode,
        char a6,
        __int64 a7,
        bool *a8,
        _DWORD *a9)
{
  __int64 v9; // r15
  _DWORD *v10; // r14
  __int64 SecurityCacheEntryForKcbStack; // rax
  __int64 v14; // r8
  struct _LOOKASIDE_LIST_EX *v15; // r9
  char v16; // bl
  unsigned __int8 v17; // dl
  ACCESS_MASK OriginalDesiredAccess; // ecx
  __int64 v19; // rsi
  __int64 v20; // rdx
  int started; // edi
  __int16 v22; // bx
  __int64 KcbAtLayerHeight; // rax
  __int64 v24; // r14
  ACCESS_MASK v25; // ecx
  __int64 v26; // r9
  int v27; // eax
  char *NextElement; // rax
  int v29; // ecx
  __int64 v30; // rsi
  struct _PRIVILEGE_SET *v31; // r14
  int v32; // edi
  __int16 v33; // bx
  SIZE_T v34; // rbx
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v36; // r10
  __int64 v37; // r10
  PPRIVILEGE_SET v38; // rsi
  PPRIVILEGE_SET v39; // rdi
  LUID Luid; // r14
  __int64 PrevElement; // rbx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _KTHREAD *CurrentThread; // rax
  void *v45; // rsi
  struct _KTHREAD *v46; // rax
  KPROCESSOR_MODE v47; // r14
  BOOLEAN v48; // bl
  ACCESS_MASK v49; // eax
  PERESOURCE *ClientToken; // rcx
  _KPROCESS *CurrentThreadProcess; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  bool v55; // [rsp+50h] [rbp-61h]
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-5Dh] BYREF
  PPRIVILEGE_SET v57; // [rsp+58h] [rbp-59h] BYREF
  _QWORD *v58; // [rsp+60h] [rbp-51h] BYREF
  __int64 v59; // [rsp+68h] [rbp-49h] BYREF
  __int128 v60; // [rsp+70h] [rbp-41h] BYREF
  PPRIVILEGE_SET v61[2]; // [rsp+80h] [rbp-31h]
  __int128 v62; // [rsp+90h] [rbp-21h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+A0h] [rbp-11h]
  NTSTATUS AccessStatus; // [rsp+F0h] [rbp+3Fh] BYREF
  __int64 v65; // [rsp+F8h] [rbp+47h]
  __int64 v66; // [rsp+100h] [rbp+4Fh]

  v66 = a3;
  v65 = a2;
  v9 = a7;
  v10 = (_DWORD *)a3;
  v55 = 0;
  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a2, a7, (char *)Object + 4);
  v16 = a6;
  if ( !a6
    || (LOBYTE(v15) = 1,
        (int)CmpSetAccessStateForBackupRestore(a4, AccessMode, SecurityCacheEntryForKcbStack + 32, v15) >= 0) )
  {
    OriginalDesiredAccess = a4->OriginalDesiredAccess;
    v19 = Object[1];
    v62 = 0LL;
    *(_OWORD *)Privileges = 0LL;
    v20 = *(_QWORD *)(v19 + 32);
    WORD1(v62) = -1;
    if ( (*(_DWORD *)(v20 + 160) & 0x100000) != 0 )
    {
      if ( (OriginalDesiredAccess & 0xD0026) != 0 )
      {
        if ( (OriginalDesiredAccess & 0xD0002) != 0 )
        {
          started = -1073741790;
        }
        else if ( (*(_DWORD *)(v20 + 4152) & 0x2000) != 0 )
        {
          if ( *(_BYTE *)(v19 + 65) )
          {
            started = -1073741790;
          }
          else
          {
            started = CmpStartKcbStackForTopLayerKcb((__int64)&v62, v19, v14, v15);
            if ( started >= 0 )
            {
              v22 = *(_WORD *)(v19 + 66) - 1;
              if ( v22 >= 0 )
              {
                while ( 1 )
                {
                  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(&v62);
                  WORD1(v62) = v22;
                  v24 = KcbAtLayerHeight;
                  if ( (unsigned __int8)CmpIsKeyStackDeleted(&v62, 0LL) )
                  {
LABEL_22:
                    started = -1073741790;
                    goto LABEL_24;
                  }
                  if ( (*(_DWORD *)(*(_QWORD *)(v24 + 32) + 160LL) & 0x100000) == 0 )
                    break;
                  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 32) + 4152LL) & 0x2000) == 0 || *(_BYTE *)(v19 + 65) )
                    goto LABEL_22;
                  if ( --v22 < 0 )
                    goto LABEL_24;
                }
                started = 0;
LABEL_24:
                v10 = (_DWORD *)v66;
              }
              v16 = a6;
            }
          }
        }
        else
        {
          started = -1073741790;
        }
      }
      else
      {
        started = 0;
      }
    }
    else
    {
      started = 0;
    }
    if ( Privileges[1] )
      CmSiFreeMemory(Privileges[1]);
    if ( started < 0 || (v25 = a4->OriginalDesiredAccess, (v25 & v10[24]) != v25) )
    {
      *a9 = -1073741790;
      goto LABEL_95;
    }
    if ( v16 && !a4->RemainingDesiredAccess || !v25 && (*v10 & 0x1000) != 0 )
      goto LABEL_89;
    v26 = Object[1];
    GrantedAccess = 0;
    v60 = 0LL;
    WORD1(v60) = -1;
    v27 = *((_DWORD *)Object + 12);
    v57 = 0LL;
    v58 = 0LL;
    *(_OWORD *)v61 = 0LL;
    if ( (v27 & 9) == 0 )
    {
      if ( !v9 )
        goto LABEL_43;
      NextElement = CmListGetNextElement((_QWORD **)(v26 + 208), &v58, 32);
      if ( !NextElement )
        goto LABEL_43;
      while ( 1 )
      {
        v29 = *((_DWORD *)NextElement + 17);
        if ( v29 == 2 || v29 == 11 )
          break;
        NextElement = CmListGetNextElement((_QWORD **)(v26 + 208), &v58, 32);
        if ( !NextElement )
          goto LABEL_43;
      }
      if ( !CmEqualTrans(*((_QWORD *)NextElement + 7), v9) )
      {
LABEL_43:
        v30 = Object[1];
        v31 = 0LL;
        v32 = *(__int16 *)(v30 + 66);
        v33 = *(_WORD *)(v30 + 66);
        if ( v32 >= 2 )
        {
          v34 = 8LL * (unsigned int)(v32 - 1);
          TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                            PagedPool,
                                                            v34,
                                                            0x35364D43u,
                                                            (PLOOKASIDE_LIST_EX)v26);
          v31 = TransientPoolWithTag;
          if ( !TransientPoolWithTag )
          {
            AccessStatus = -1073741670;
LABEL_83:
            v47 = AccessMode;
            v48 = 0;
LABEL_84:
            if ( v61[1] )
              CmSiFreeMemory(v61[1]);
            if ( v48 )
              goto LABEL_89;
            if ( !a6 )
            {
              if ( (int)CmpVEPerformOpenAccessCheck(Object, v9, a4, v47, v66, AccessStatus) >= 0 )
              {
LABEL_89:
                v17 = 1;
                *a9 = 0;
                goto LABEL_96;
              }
              if ( KeGetCurrentThread()->PreviousMode == 1 )
              {
                CurrentThreadProcess = PsGetCurrentThreadProcess();
                ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess);
                ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
                if ( (unsigned int)MmGetSessionIdEx((__int64)CurrentThreadProcess) != ServerSiloServiceSessionId
                  && (a4->RemainingDesiredAccess & 0xD0026) != 0 )
                {
                  v55 = CmpCheckKeyOwnerForPca(v65, v9) != 0;
                }
              }
            }
            *a9 = -1073741790;
LABEL_95:
            v17 = 0;
            goto LABEL_96;
          }
          memset(TransientPoolWithTag, 0, v34);
          v33 = *(_WORD *)(v30 + 66);
        }
        LOWORD(v60) = v32;
        v61[1] = v31;
        WORD1(v60) = v33;
        if ( v33 )
        {
          v36 = *(_QWORD *)(v30 + 192);
          if ( v36 )
          {
            do
            {
              CmpSetKcbAtLayerHeight((__int64)&v60, v33, *(_QWORD *)(v36 + 16));
              v36 = *(_QWORD *)(v37 + 24);
              --v33;
            }
            while ( v36 );
            v31 = v61[1];
            v33 = WORD1(v60);
          }
        }
        else
        {
          *((_QWORD *)&v60 + 1) = v30;
        }
        v38 = 0LL;
        for ( AccessStatus = 0; v33 >= 0; --v33 )
        {
          if ( v33 < 2 )
            v39 = v61[v33 - 1];
          else
            v39 = (PPRIVILEGE_SET)*((_QWORD *)v31 + v33 - 2);
          if ( HIWORD(v39[3].Control) && BYTE1(v39[3].Control) == 1 )
            break;
          if ( v39[2].PrivilegeCount != -1 )
          {
            if ( (unsigned __int8)CmRmIsKCBVisible(v39, v9) )
            {
              v38 = v39;
              if ( HIWORD(v39[3].Control) )
              {
                if ( BYTE1(v39[3].Control) )
                  break;
              }
            }
          }
        }
        Luid = v38[4].Privilege[0].Luid;
        if ( v9 )
        {
          v59 = 0LL;
          PrevElement = CmListGetPrevElement(v38[10].Privilege, &v59, v14, v26);
          if ( PrevElement )
          {
            while ( !CmEqualTrans(*(_QWORD *)(PrevElement + 56), v9) || *(_DWORD *)(PrevElement + 68) != 9 )
            {
              PrevElement = CmListGetPrevElement(v38[10].Privilege, &v59, v42, v43);
              if ( !PrevElement )
                goto LABEL_70;
            }
            Luid = *(LUID *)(PrevElement + 88);
          }
        }
LABEL_70:
        CurrentThread = KeGetCurrentThread();
        v45 = (void *)(*(_QWORD *)&Luid + 32LL);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)a4->SubjectSecurityContext.PrimaryToken + 6), 1u);
        if ( a4->SubjectSecurityContext.ClientToken )
        {
          v46 = KeGetCurrentThread();
          --v46->KernelApcDisable;
          ExAcquireResourceSharedLite(*((PERESOURCE *)a4->SubjectSecurityContext.ClientToken + 6), 1u);
        }
        v47 = AccessMode;
        v48 = SeAccessCheck(
                v45,
                &a4->SubjectSecurityContext,
                1u,
                a4->RemainingDesiredAccess,
                a4->PreviouslyGrantedAccess,
                &v57,
                (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                AccessMode,
                &GrantedAccess,
                &AccessStatus);
        if ( v57 )
        {
          SeAppendPrivileges(a4, v57);
          CmSiFreeMemory(v57);
        }
        if ( v48 )
        {
          v49 = GrantedAccess;
          a4->PreviouslyGrantedAccess |= GrantedAccess;
          a4->RemainingDesiredAccess &= ~(v49 | 0x2000000);
        }
        *((_WORD *)Object + 24) |= 2u;
        if ( v9 )
        {
          SeOpenObjectAuditAlarmWithTransaction(
            (PUNICODE_STRING)CmKeyObjectType + 1,
            Object,
            0LL,
            v45,
            a4,
            0,
            v48,
            v47,
            (GUID *)(v9 + 88),
            &a4->GenerateOnClose);
        }
        else if ( v47 )
        {
          SeOpenObjectAuditAlarmWithTransaction(
            (PUNICODE_STRING)CmKeyObjectType + 1,
            Object,
            0LL,
            v45,
            a4,
            0,
            v48,
            v47,
            0LL,
            &a4->GenerateOnClose);
        }
        *((_WORD *)Object + 24) &= ~2u;
        ExReleaseResourceLite(*((PERESOURCE *)a4->SubjectSecurityContext.PrimaryToken + 6));
        KeLeaveCriticalRegion();
        ClientToken = (PERESOURCE *)a4->SubjectSecurityContext.ClientToken;
        if ( ClientToken )
        {
          ExReleaseResourceLite(ClientToken[6]);
          KeLeaveCriticalRegion();
        }
        goto LABEL_84;
      }
    }
    AccessStatus = -1073741444;
    goto LABEL_83;
  }
  v17 = 0;
  *a9 = -1073741790;
LABEL_96:
  *a8 = v55;
  return v17;
}

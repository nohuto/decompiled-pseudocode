/*
 * XREFs of CmpUndoDeleteKeyForTransEx @ 0x1405CD308
 * Callers:
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140213DB0 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14026D0B0 (CmpTransEnlistUowInCmTrans.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1402AB7E0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpDereferenceSecurityNode @ 0x1403F086C (CmpDereferenceSecurityNode.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpAllocateUnitOfWork @ 0x140617BA0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140619820 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140619E60 (CmpLockIXLockExclusive.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmUnlockHiveSecurity @ 0x14065F004 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x14065F024 (CmLockHiveSecurityExclusive.c)
 *     CmpRundownUnitOfWork @ 0x140664278 (CmpRundownUnitOfWork.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmListGetPrevElement @ 0x140768C48 (CmListGetPrevElement.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpUndoDeleteKeyForTransEx(ULONG_PTR BugCheckParameter3, __int64 a2, void *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  void *v6; // r15
  __int64 *v7; // r13
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 PrevElement; // r14
  __int64 v12; // rax
  unsigned int v13; // r9d
  unsigned int v14; // r12d
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *PoolWithTag; // rax
  __int64 v20; // rax
  __int64 v21; // r15
  int SecurityDescriptorNode; // edi
  __int64 *v23; // rsi
  _QWORD *UnitOfWork; // rax
  int *v25; // rdi
  int v26; // eax
  __int64 v27; // rcx
  ULONG_PTR v28; // rsi
  __int64 v29; // rax
  ULONG_PTR v30; // rdx
  ULONG_PTR v31; // rcx
  unsigned int v32; // r15d
  _DWORD *v33; // rax
  __int64 v34; // rax
  ULONG_PTR v35; // rdx
  __int64 v36; // rax
  ULONG_PTR *v37; // rsi
  __int64 v38; // r14
  unsigned int v40; // [rsp+40h] [rbp-38h] BYREF
  int v41; // [rsp+44h] [rbp-34h]
  _DWORD v42[2]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v43[2]; // [rsp+50h] [rbp-28h] BYREF
  int *v44; // [rsp+58h] [rbp-20h]
  __int64 v45; // [rsp+60h] [rbp-18h]
  __int64 v46; // [rsp+68h] [rbp-10h]
  ULONG_PTR v47; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v48; // [rsp+C8h] [rbp+50h]
  void *v49; // [rsp+D0h] [rbp+58h]
  __int64 v50; // [rsp+D8h] [rbp+60h] BYREF

  v49 = a3;
  v48 = a2;
  v42[1] = 0;
  v43[1] = 0;
  v4 = *(_QWORD *)(BugCheckParameter3 + 72);
  v5 = a2;
  v41 = -1;
  LODWORD(v47) = -1;
  v42[0] = -1;
  v6 = a3;
  v45 = 0LL;
  v7 = 0LL;
  v43[0] = -1;
  v40 = 0;
  v50 = 0LL;
  PrevElement = CmListGetPrevElement(v4 + 208, &v50, a3, 0xFFFFFFFFLL);
  if ( !PrevElement )
    return 3221225524LL;
  do
  {
    if ( *(_DWORD *)(PrevElement + 68) == 3 && *(_QWORD *)(PrevElement + 88) == BugCheckParameter3 )
      break;
    PrevElement = CmListGetPrevElement(v8, &v50, v9, v10);
  }
  while ( PrevElement );
  if ( !PrevElement )
    return 3221225524LL;
  v50 = 0LL;
  v12 = CmListGetPrevElement(BugCheckParameter3 + 208, &v50, v9, v10);
  v46 = v12;
  if ( !v12 || *(_DWORD *)(v12 + 68) != 2 )
    return 3221225524LL;
  if ( *(_QWORD *)(BugCheckParameter3 + 288) == v5 )
  {
    v14 = *(_DWORD *)(BugCheckParameter3 + 280);
    v15 = *(_DWORD *)(BugCheckParameter3 + 284);
  }
  else
  {
    v16 = *(_QWORD *)(BugCheckParameter3 + 32);
    v17 = *(unsigned int *)(BugCheckParameter3 + 40);
    v50 = v13;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v16 + 8))(v16, v17, &v50);
    if ( !v18 )
      return 3221225626LL;
    v14 = *(_DWORD *)(v18 + 36);
    v15 = *(_DWORD *)(v18 + 40);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(BugCheckParameter3 + 32) + 16LL))(
      *(_QWORD *)(BugCheckParameter3 + 32),
      &v50);
  }
  if ( v14 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * v14, 0x37344D43u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v14);
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 32) + 8LL))(
              *(_QWORD *)(BugCheckParameter3 + 32),
              v15,
              v42);
      v21 = v20;
      if ( v20 )
      {
        LODWORD(v50) = 0;
        v23 = v7;
        v44 = (int *)v20;
        while ( 1 )
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
          *v23 = (__int64)UnitOfWork;
          if ( !UnitOfWork )
            break;
          CmpTransEnlistUowInKcb(UnitOfWork, BugCheckParameter3);
          SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)*v23, v48);
          if ( SecurityDescriptorNode < 0 )
            goto LABEL_45;
          if ( !(unsigned __int8)CmpLockIXLockIntent(BugCheckParameter3 + 248, *v23)
            || !(unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 264, *v23, 1LL) )
          {
            SecurityDescriptorNode = -1072103423;
            goto LABEL_45;
          }
          v25 = v44;
          *(_DWORD *)(*v23 + 68) = 6;
          v26 = *v25;
          v27 = *v23++;
          v44 = v25 + 1;
          *(_DWORD *)(v27 + 88) = v26;
          LODWORD(v50) = v50 + 1;
          if ( (unsigned int)v50 >= v14 )
          {
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 32) + 16LL))(
              *(_QWORD *)(BugCheckParameter3 + 32),
              v42);
            v5 = v48;
            v6 = v49;
            goto LABEL_24;
          }
        }
      }
      SecurityDescriptorNode = -1073741670;
      goto LABEL_45;
    }
    return 3221225626LL;
  }
LABEL_24:
  v28 = CmpAllocateUnitOfWork();
  if ( v28 )
  {
    HvLockHiveFlusherShared(*(_QWORD *)(BugCheckParameter3 + 32));
    CmLockHiveSecurityExclusive(*(_QWORD *)(BugCheckParameter3 + 32));
    CmpTransEnlistUowInKcb((_QWORD *)v28, BugCheckParameter3);
    SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)v28, v5);
    if ( SecurityDescriptorNode < 0 )
    {
      v32 = v41;
    }
    else
    {
      if ( !(unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 248, v28, 0LL)
        || !(unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 264, v28, 1LL) )
      {
        SecurityDescriptorNode = -1072103423;
LABEL_43:
        CmUnlockHiveSecurity(*(_QWORD *)(BugCheckParameter3 + 32));
        HvUnlockHiveFlusherShared(*(_QWORD *)(BugCheckParameter3 + 32));
        v21 = 0LL;
        if ( v28 )
        {
          CmpRundownUnitOfWork(v28);
          ExFreePoolWithTag((PVOID)v28, 0x77554D43u);
        }
        goto LABEL_45;
      }
      *(_DWORD *)(v28 + 96) = -1;
      *(_QWORD *)(v28 + 88) = 0LL;
      *(_DWORD *)(v28 + 68) = 9;
      *(_BYTE *)(v28 + 100) = 0;
      v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 32) + 8LL))(
              *(_QWORD *)(BugCheckParameter3 + 32),
              *(unsigned int *)(BugCheckParameter3 + 40),
              v43);
      v30 = *(unsigned int *)(BugCheckParameter3 + 40);
      v31 = *(_QWORD *)(BugCheckParameter3 + 32);
      v45 = v29;
      SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v31, v30, v29, 1u, v6, 1, (unsigned int *)&v47);
      if ( SecurityDescriptorNode < 0 )
      {
        v32 = v47;
      }
      else
      {
        if ( !CmpFindSecurityCellCacheIndex(*(_QWORD *)(BugCheckParameter3 + 32), v47, &v40) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, (unsigned int)v47);
        v32 = -1;
        v33 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 32) + 1880LL) + 16LL * v40 + 8);
        *(_QWORD *)(v28 + 88) = v33;
        *(_DWORD *)(v28 + 96) = *v33;
        v34 = v46;
        *(_BYTE *)(v28 + 100) = 1;
        v28 = 0LL;
        *(_DWORD *)(PrevElement + 68) = 13;
        *(_DWORD *)(v34 + 68) = 14;
        if ( *(_QWORD *)(BugCheckParameter3 + 288) )
        {
          v35 = *(unsigned int *)(BugCheckParameter3 + 284);
          if ( (_DWORD)v35 != -1 )
            HvFreeCell(*(_QWORD *)(BugCheckParameter3 + 32), v35);
        }
        v36 = v48;
        *(_DWORD *)(BugCheckParameter3 + 280) = 0;
        *(_DWORD *)(BugCheckParameter3 + 284) = -1;
        *(_QWORD *)(BugCheckParameter3 + 288) = v36;
      }
    }
    if ( v32 != -1 )
      CmpDereferenceSecurityNode(*(_QWORD *)(BugCheckParameter3 + 32), v32);
    if ( v45 )
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 32) + 16LL))(
        *(_QWORD *)(BugCheckParameter3 + 32),
        v43);
    goto LABEL_43;
  }
  SecurityDescriptorNode = -1073741670;
  v21 = 0LL;
LABEL_45:
  if ( v7 )
  {
    if ( SecurityDescriptorNode < 0 && v14 )
    {
      v37 = (ULONG_PTR *)v7;
      v38 = v14;
      do
      {
        if ( *v37 )
        {
          CmpRundownUnitOfWork(*v37);
          ExFreePoolWithTag((PVOID)*v37, 0x77554D43u);
        }
        ++v37;
        --v38;
      }
      while ( v38 );
    }
    ExFreePoolWithTag(v7, 0x37344D43u);
  }
  if ( v21 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 32) + 16LL))(
      *(_QWORD *)(BugCheckParameter3 + 32),
      v42);
  return (unsigned int)SecurityDescriptorNode;
}

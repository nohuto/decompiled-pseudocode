/*
 * XREFs of CmpUndoDeleteKeyForTrans @ 0x1407272EC
 * Callers:
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x1402F2D0C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402F30C0 (CmpTransEnlistUowInKcb.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpLockIXLockExclusive @ 0x1406A183C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1406A189C (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmListGetPrevElement @ 0x1406D5A2C (CmListGetPrevElement.c)
 *     CmpAllocateUnitOfWork @ 0x1406D9BBC (CmpAllocateUnitOfWork.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpUndoDeleteKeyForTrans(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 *v4; // r15
  int v5; // edi
  __int64 v6; // rcx
  __int64 PrevElement; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // r10d
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 *PoolWithTag; // rax
  __int64 v19; // rax
  __int64 *v20; // r14
  _QWORD *UnitOfWork; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r12
  PVOID *v27; // r14
  int *v28; // [rsp+20h] [rbp-18h]
  __int64 v29; // [rsp+80h] [rbp+48h] BYREF
  __int64 v30; // [rsp+88h] [rbp+50h]
  __int64 v31; // [rsp+90h] [rbp+58h] BYREF
  int v32; // [rsp+98h] [rbp+60h] BYREF
  int v33; // [rsp+9Ch] [rbp+64h]

  v30 = a2;
  v29 = 0LL;
  v3 = *(_QWORD *)(a1 + 72);
  v4 = 0LL;
  v5 = 0;
  v32 = -1;
  v6 = v3 + 208;
  v33 = 0;
  do
  {
    PrevElement = CmListGetPrevElement(v6, &v29);
    v8 = PrevElement;
    if ( !PrevElement )
      return 3221225524LL;
  }
  while ( *(_DWORD *)(PrevElement + 68) != 3 || *(_QWORD *)(PrevElement + 88) != a1 );
  v29 = 0LL;
  v9 = CmListGetPrevElement(a1 + 208, &v29);
  v12 = v9;
  if ( !v9 || *(_DWORD *)(v9 + 68) != 2 )
    return 3221225524LL;
  if ( *(_QWORD *)(a1 + 288) == v10 )
  {
    v16 = *(unsigned int *)(a1 + 280);
    LODWORD(v29) = *(_DWORD *)(a1 + 284);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 32);
    v14 = *(unsigned int *)(a1 + 40);
    v31 = v11;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v13 + 8))(v13, v14, &v31);
    if ( !v15 )
      return 3221225626LL;
    v16 = *(unsigned int *)(v15 + 36);
    v17 = *(_QWORD *)(a1 + 32);
    LODWORD(v29) = *(_DWORD *)(v15 + 40);
    (*(void (__fastcall **)(__int64, __int64 *))(v17 + 16))(v17, &v31);
  }
  if ( (_DWORD)v16 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v16, 0x37344D43u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)v16);
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
              *(_QWORD *)(a1 + 32),
              (unsigned int)v29,
              &v32);
      v31 = v19;
      if ( v19 )
      {
        LODWORD(v29) = 0;
        v20 = v4;
        v28 = (int *)v19;
        while ( 1 )
        {
          UnitOfWork = CmpAllocateUnitOfWork();
          *v20 = (__int64)UnitOfWork;
          if ( !UnitOfWork )
            break;
          CmpTransEnlistUowInKcb(UnitOfWork, a1);
          v5 = CmpTransEnlistUowInCmTrans((_QWORD *)*v20, v30);
          if ( v5 < 0 )
            goto LABEL_31;
          if ( !CmpLockIXLockIntent((unsigned int *)(a1 + 248), *v20)
            || !CmpLockIXLockExclusive(a1 + 264, (_QWORD *)*v20, 1) )
          {
            v5 = -1072103423;
            goto LABEL_31;
          }
          *(_DWORD *)(*v20 + 68) = 6;
          v22 = *v28;
          v23 = *v20++;
          ++v28;
          *(_DWORD *)(v23 + 88) = v22;
          LODWORD(v29) = v29 + 1;
          if ( (unsigned int)v29 >= (unsigned int)v16 )
          {
            (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v32);
            goto LABEL_20;
          }
        }
        v5 = -1073741670;
LABEL_31:
        v25 = v31;
      }
      else
      {
        v5 = -1073741670;
        v25 = 0LL;
      }
      goto LABEL_21;
    }
    return 3221225626LL;
  }
LABEL_20:
  *(_DWORD *)(v8 + 68) = 13;
  *(_DWORD *)(v12 + 68) = 13;
  v24 = v30;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 284) = -1;
  *(_QWORD *)(a1 + 288) = v24;
  v25 = 0LL;
LABEL_21:
  if ( v4 )
  {
    if ( v5 < 0 && (_DWORD)v16 )
    {
      v27 = (PVOID *)v4;
      do
      {
        if ( *v27 )
        {
          CmpRundownUnitOfWork(*v27);
          ExFreePoolWithTag(*v27, 0x77554D43u);
        }
        ++v27;
        --v16;
      }
      while ( v16 );
    }
    ExFreePoolWithTag(v4, 0x37344D43u);
  }
  if ( v25 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v32);
  return (unsigned int)v5;
}

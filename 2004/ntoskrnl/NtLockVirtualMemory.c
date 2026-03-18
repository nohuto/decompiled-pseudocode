/*
 * XREFs of NtLockVirtualMemory @ 0x14024CD50
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     MiLockPageTablePage @ 0x14024F390 (MiLockPageTablePage.c)
 *     MiUpdatePfnPriority @ 0x1402501B0 (MiUpdatePfnPriority.c)
 *     MiLockWsle @ 0x140250290 (MiLockWsle.c)
 *     MiVadPagesTradable @ 0x140253B08 (MiVadPagesTradable.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x140256100 (MiGetNextPageTable.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14025A290 (MiPageTableLockIsContended.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025AF90 (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockPageTableCharges @ 0x14025E10C (MiUnlockPageTableCharges.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x1402ADBF0 (MiVadPureReserve.c)
 *     MiLockPageAndSetDirty @ 0x1402B7090 (MiLockPageAndSetDirty.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 *     MiUnlockVa @ 0x1403479AC (MiUnlockVa.c)
 *     MiLockPageTable @ 0x14037FCAC (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x1403B2B80 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiShouldYieldProcessor @ 0x140531508 (MiShouldYieldProcessor.c)
 *     MiLockPageAtDpc @ 0x14054A47C (MiLockPageAtDpc.c)
 *     MiLockVadRange @ 0x1406022F8 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x140607244 (MiLockUnlockCommon.c)
 *     MiUnlockVadRange @ 0x140607384 (MiUnlockVadRange.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtLockVirtualMemory(HANDLE Handle, unsigned __int64 *a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r10
  unsigned int v10; // edi
  _QWORD *v11; // rdx
  unsigned __int64 Address; // rdi
  _QWORD *v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // r14
  char *v19; // r15
  int v20; // r9d
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  _QWORD **v24; // rax
  _QWORD *i; // rcx
  unsigned __int64 NextPageTable; // rax
  __int64 v27; // rdx
  ULONG_PTR v28; // r14
  __int64 v29; // rdx
  unsigned __int64 v30; // r13
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  ULONG_PTR v35; // r13
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  int v38; // r13d
  unsigned int EffectivePagePriorityThread; // edi
  char v40; // al
  BOOL v41; // r13d
  bool v42; // zf
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  char v45; // [rsp+40h] [rbp-118h]
  int v46; // [rsp+44h] [rbp-114h]
  unsigned int v47; // [rsp+44h] [rbp-114h]
  unsigned __int64 v48; // [rsp+48h] [rbp-110h]
  _QWORD *v49; // [rsp+50h] [rbp-108h]
  unsigned __int64 v50; // [rsp+50h] [rbp-108h]
  char v51; // [rsp+58h] [rbp-100h]
  unsigned __int64 v52; // [rsp+60h] [rbp-F8h]
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-E8h]
  int v55; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-D8h]
  PVOID P; // [rsp+88h] [rbp-D0h]
  int v58; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v59; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v60; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v61; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-A8h]
  __int64 v63; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v64; // [rsp+C0h] [rbp-98h]
  __int64 v65; // [rsp+C8h] [rbp-90h]
  char *v66; // [rsp+D0h] [rbp-88h]
  __int64 v67; // [rsp+D8h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  _QWORD *v69; // [rsp+E8h] [rbp-70h]
  unsigned __int64 *v70; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v69 = a3;
  v70 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v63 = 0LL;
  v61 = 0LL;
  Object = 0LL;
  v58 = 0;
  v4 = 0;
  v51 = 0;
  v55 = 0;
  result = MiLockUnlockCommon(Handle, (__int64)&v61, (__int64)&v63, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = v61;
  v7 = (v61 + v63 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v59 = v7;
  v8 = v61 & 0xFFFFFFFFFFFFF000uLL;
  v52 = v61 & 0xFFFFFFFFFFFFF000uLL;
  v48 = 0LL;
  P = MiAllocatePool(
        64,
        8
      * (((((v7 - (v61 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
       + ((((unsigned __int8)((v7 - (v61 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
        0x6B6C6D4Du);
  if ( !P )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return 3221225626LL;
  }
  if ( Handle != (HANDLE)-1LL )
  {
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v4 = 2;
    v51 = 2;
    v55 = 2;
  }
  BugCheckParameter4 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v60 = v8;
  v65 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = MiLockVadRange(Object, v8, v7, 0LL);
  v64 = v9;
  if ( !v9 )
  {
    v10 = -1073741819;
LABEL_90:
    MiUnlockVadRange(Object, v60, v9, 0LL);
    if ( (v4 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v10;
  }
  Address = (unsigned __int64)MiLocateAddress(v8);
  v49 = (_QWORD *)Address;
  v13 = (_QWORD *)Address;
  v14 = 0LL;
  if ( v15 )
  {
    while ( (unsigned int)MiVadPagesTradable(v13, v11, v14) )
    {
      v11 = v13;
      v17 = (_QWORD *)v13[1];
      if ( v17 )
      {
        v13 = (_QWORD *)v13[1];
        v11 = (_QWORD *)*v17;
        if ( *v17 )
        {
          do
          {
            v13 = v11;
            v11 = (_QWORD *)*v11;
          }
          while ( v11 );
        }
      }
      else
      {
        while ( 1 )
        {
          v13 = (_QWORD *)(v13[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v13 || (_QWORD *)*v13 == v11 )
            break;
          v11 = v13;
        }
      }
      v14 = v16 + 1;
      if ( v14 >= v9 )
        goto LABEL_18;
    }
    v10 = -1073741747;
    goto LABEL_90;
  }
LABEL_18:
  v46 = MiVadPureReserve(Address);
  v18 = 0LL;
  v19 = (char *)Object + 1664;
  v66 = (char *)Object + 1664;
  v62 = *((_QWORD *)Object + 210);
LABEL_19:
  v45 = MiLockWorkingSetShared(v19);
  LOBYTE(v20) = v45;
LABEL_20:
  v21 = v52;
  v22 = 0xFFFFF6FB40000000uLL;
  while ( v21 <= v7 )
  {
    if ( v21 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v23 = Address;
      v24 = *(_QWORD ***)(Address + 8);
      if ( v24 )
      {
        Address = *(_QWORD *)(Address + 8);
        v49 = v24;
        for ( i = *v24; i; i = (_QWORD *)*i )
        {
          Address = (unsigned __int64)i;
          v49 = i;
        }
      }
      else
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v49 = (_QWORD *)Address;
        if ( Address )
        {
          do
          {
            if ( *(_QWORD *)Address == v23 )
              break;
            v23 = Address;
            Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( Address );
          v49 = (_QWORD *)Address;
        }
      }
      v46 = MiVadPureReserve(Address);
    }
    BugCheckParameter2 = ((v21 >> 18) & 0x3FFFFFF8) + v22;
    if ( v18 != BugCheckParameter2 )
    {
      if ( v18 )
      {
        MiUnlockPageTable(v19, v18);
        v18 = 0LL;
        LOBYTE(v20) = v45;
      }
      if ( v46 )
      {
        NextPageTable = MiGetNextPageTable(BugCheckParameter4, v65, 0, v20, 0, (__int64)&v58);
        if ( NextPageTable )
          v18 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != BugCheckParameter4 )
        {
          v10 = -1073741819;
          goto LABEL_64;
        }
      }
      else
      {
        v28 = BugCheckParameter4;
        MiMakeSystemAddressValid(BugCheckParameter4, 0);
        v18 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)BugCheckParameter4 & 1) == 0 )
    {
      MiUnlockPageTable(v19, v18);
      v18 = 0LL;
      BugCheckParameter2 = 0LL;
      LOBYTE(v29) = v45;
      MiUnlockWorkingSetShared(v19, v29);
      goto LABEL_19;
    }
    v67 = MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
    v30 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v67) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v52) & 0xF) == 8 )
    {
      v4 |= 1u;
      v51 = v4;
      v55 = v4;
    }
    else
    {
      if ( *((_QWORD *)v19 + 14) <= (unsigned __int64)(*(_QWORD *)(v62 + 32) + 6LL) )
      {
        v10 = -1073741663;
        goto LABEL_64;
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v30) && !(unsigned int)MiLockPageTablePage(v31, 1LL) )
        goto LABEL_63;
      BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(BugCheckParameter2) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL;
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2LL) )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v30) )
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v30 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        goto LABEL_63;
      }
      v32 = 0LL;
      if ( (*(_DWORD *)(v30 + 16) & 0x400LL) != 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v30) )
        {
          v32 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v30 + 40) >> 39) & 0x3FFLL));
          if ( !(unsigned int)MiChargeCommit(v32, 1LL, 0LL) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v30 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            v10 = -1073741523;
            goto LABEL_64;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v32 + 7616), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v30 + 16) )
      {
        MiLockPageAndSetDirty(v30, 1LL);
      }
      if ( !(unsigned int)MiLockWsle(v19, v52) )
      {
        MiUnlockPageTableCharges(BugCheckParameter2);
        if ( (unsigned int)MI_PFN_IS_PROTO(v30) )
        {
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v30 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          if ( (*(_DWORD *)(v30 + 16) & 0x400LL) != 0 )
            MiReturnCommit(v32, 1LL);
        }
LABEL_63:
        v10 = -1073741670;
LABEL_64:
        v47 = v10;
        if ( v18 )
        {
          MiUnlockPageTable(v19, v18);
          v18 = 0LL;
        }
        if ( !v48 )
        {
LABEL_87:
          if ( v18 )
            MiUnlockPageTable(v19, v18);
          LOBYTE(v27) = v45;
          MiUnlockWorkingSetShared(v19, v27);
          v9 = v64;
          goto LABEL_90;
        }
        v34 = v48 - 1;
        v50 = v48 - 1;
        v35 = (v48 << 12) + v60 - 4096;
        BugCheckParameter2 = v35;
        v36 = v48;
        while ( 2 )
        {
          if ( _bittest64((const signed __int64 *)P, v34) == 1 )
          {
            v37 = ((v35 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v62 = v37;
            if ( v18 != v37 )
            {
              if ( v18 )
              {
                MiUnlockPageTable(v19, v18);
                v37 = v62;
              }
              v18 = v37;
              MiLockPageTable(v19, v37);
            }
            MiUnlockVa(v19, v35);
            v34 = v50;
          }
          v38 = 0;
          if ( (v34 & 0xF) != 0 )
          {
LABEL_81:
            if ( v38 == 1 )
              goto LABEL_82;
          }
          else
          {
            if ( !(unsigned int)MiWorkingSetIsContended(v19)
              && (!v18 || !(unsigned int)MiPageTableLockIsContended(v19, v18)) )
            {
              if ( (unsigned int)MiShouldYieldProcessor() )
                v38 = 1;
              v34 = v50;
              goto LABEL_81;
            }
LABEL_82:
            if ( v18 )
            {
              MiUnlockPageTable(v19, v18);
              v18 = 0LL;
            }
            LOBYTE(v27) = v45;
            MiUnlockWorkingSetShared(v19, v27);
            MiLockWorkingSetShared(v19);
            v34 = v50;
          }
          v35 = BugCheckParameter2 - 4096;
          BugCheckParameter2 -= 4096LL;
          v50 = --v34;
          if ( !--v36 )
          {
            LOBYTE(v4) = v51;
            v10 = v47;
            goto LABEL_87;
          }
          continue;
        }
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v33);
      MiLockPageAtDpc(v30);
      MiUpdatePfnPriority(v30, EffectivePagePriorityThread, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v48);
      Address = (unsigned __int64)v49;
    }
    ++v48;
    v40 = BugCheckParameter4 + 8;
    BugCheckParameter4 += 8LL;
    v21 = v52 + 4096;
    v52 = v21;
    v41 = 0;
    if ( v21 <= v59 && (v40 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(v19) || (unsigned int)MiPageTableLockIsContended(v19, v18) )
      {
LABEL_101:
        MiUnlockPageTable(v19, v18);
        LOBYTE(v43) = v45;
        MiUnlockWorkingSetShared(v19, v43);
        v18 = 0LL;
        MiLockWorkingSetShared(v19);
        v7 = v59;
        LOBYTE(v20) = v45;
        goto LABEL_20;
      }
      v41 = MiShouldYieldProcessor() != 0;
      v21 = v52;
    }
    v42 = !v41;
    v7 = v59;
    LOBYTE(v20) = v45;
    v22 = 0xFFFFF6FB40000000uLL;
    if ( !v42 )
      goto LABEL_101;
  }
  if ( v18 )
  {
    MiUnlockPageTable(v19, v18);
    LOBYTE(v20) = v45;
  }
  LOBYTE(v21) = v20;
  MiUnlockWorkingSetShared(v19, v21);
  MiUnlockVadRange(Object, v60, v64, 0LL);
  if ( (v4 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v44 = v61 & 0xFFFFFFFFFFFFF000uLL;
  *v69 = v7 - (v61 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v70 = v44;
  return (v4 & 1) != 0 ? 0x40000019 : 0;
}

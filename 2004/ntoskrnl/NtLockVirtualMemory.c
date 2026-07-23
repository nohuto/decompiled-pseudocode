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

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r10
  NTSTATUS v11; // edi
  _QWORD *v12; // rdx
  unsigned __int64 Address; // rdi
  _QWORD *v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // r14
  char *v20; // r15
  int v21; // r9d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  _QWORD **v25; // rax
  _QWORD *i; // rcx
  unsigned __int64 NextPageTable; // rax
  __int64 v28; // rdx
  ULONG_PTR v29; // r14
  __int64 v30; // rdx
  unsigned __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  ULONG_PTR v36; // r13
  unsigned __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // r13d
  unsigned int EffectivePagePriorityThread; // edi
  char v41; // al
  BOOL v42; // r13d
  bool v43; // zf
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  char v46; // [rsp+40h] [rbp-118h]
  int v47; // [rsp+44h] [rbp-114h]
  NTSTATUS v48; // [rsp+44h] [rbp-114h]
  unsigned __int64 v49; // [rsp+48h] [rbp-110h]
  _QWORD *v50; // [rsp+50h] [rbp-108h]
  unsigned __int64 v51; // [rsp+50h] [rbp-108h]
  char v52; // [rsp+58h] [rbp-100h]
  unsigned __int64 v53; // [rsp+60h] [rbp-F8h]
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-E8h]
  int v56; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-D8h]
  PVOID P; // [rsp+88h] [rbp-D0h]
  int v59; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v60; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-A8h]
  __int64 v64; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v65; // [rsp+C0h] [rbp-98h]
  __int64 v66; // [rsp+C8h] [rbp-90h]
  char *v67; // [rsp+D0h] [rbp-88h]
  __int64 v68; // [rsp+D8h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  PSIZE_T v70; // [rsp+E8h] [rbp-70h]
  PVOID *v71; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v70 = RegionSize;
  v71 = BaseAddress;
  memset(&ApcState, 0, sizeof(ApcState));
  v64 = 0LL;
  v62 = 0LL;
  Object = 0LL;
  v59 = 0;
  v5 = 0;
  v52 = 0;
  v56 = 0;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v62, (__int64)&v64, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v7 = v62;
  v8 = (v62 + v64 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v60 = v8;
  v9 = v62 & 0xFFFFFFFFFFFFF000uLL;
  v53 = v62 & 0xFFFFFFFFFFFFF000uLL;
  v49 = 0LL;
  P = MiAllocatePool(
        64,
        8
      * (((((v8 - (v62 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
       + ((((unsigned __int8)((v8 - (v62 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
        0x6B6C6D4Du);
  if ( !P )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v5 = 2;
    v52 = 2;
    v56 = 2;
  }
  BugCheckParameter4 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v61 = v9;
  v66 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MiLockVadRange(Object, v9, v8, 0LL);
  v65 = v10;
  if ( !v10 )
  {
    v11 = -1073741819;
LABEL_90:
    MiUnlockVadRange(Object, v61, v10, 0LL);
    if ( (v5 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v11;
  }
  Address = (unsigned __int64)MiLocateAddress(v9);
  v50 = (_QWORD *)Address;
  v14 = (_QWORD *)Address;
  v15 = 0LL;
  if ( v16 )
  {
    while ( (unsigned int)MiVadPagesTradable(v14, v12, v15) )
    {
      v12 = v14;
      v18 = (_QWORD *)v14[1];
      if ( v18 )
      {
        v14 = (_QWORD *)v14[1];
        v12 = (_QWORD *)*v18;
        if ( *v18 )
        {
          do
          {
            v14 = v12;
            v12 = (_QWORD *)*v12;
          }
          while ( v12 );
        }
      }
      else
      {
        while ( 1 )
        {
          v14 = (_QWORD *)(v14[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v14 || (_QWORD *)*v14 == v12 )
            break;
          v12 = v14;
        }
      }
      v15 = v17 + 1;
      if ( v15 >= v10 )
        goto LABEL_18;
    }
    v11 = -1073741747;
    goto LABEL_90;
  }
LABEL_18:
  v47 = MiVadPureReserve(Address);
  v19 = 0LL;
  v20 = (char *)Object + 1664;
  v67 = (char *)Object + 1664;
  v63 = *((_QWORD *)Object + 210);
LABEL_19:
  v46 = MiLockWorkingSetShared(v20);
  LOBYTE(v21) = v46;
LABEL_20:
  v22 = v53;
  v23 = 0xFFFFF6FB40000000uLL;
  while ( v22 <= v8 )
  {
    if ( v22 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v24 = Address;
      v25 = *(_QWORD ***)(Address + 8);
      if ( v25 )
      {
        Address = *(_QWORD *)(Address + 8);
        v50 = v25;
        for ( i = *v25; i; i = (_QWORD *)*i )
        {
          Address = (unsigned __int64)i;
          v50 = i;
        }
      }
      else
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v50 = (_QWORD *)Address;
        if ( Address )
        {
          do
          {
            if ( *(_QWORD *)Address == v24 )
              break;
            v24 = Address;
            Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( Address );
          v50 = (_QWORD *)Address;
        }
      }
      v47 = MiVadPureReserve(Address);
    }
    BugCheckParameter2 = ((v22 >> 18) & 0x3FFFFFF8) + v23;
    if ( v19 != BugCheckParameter2 )
    {
      if ( v19 )
      {
        MiUnlockPageTable(v20, v19);
        v19 = 0LL;
        LOBYTE(v21) = v46;
      }
      if ( v47 )
      {
        NextPageTable = MiGetNextPageTable(BugCheckParameter4, v66, 0, v21, 0, (__int64)&v59);
        if ( NextPageTable )
          v19 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != BugCheckParameter4 )
        {
          v11 = -1073741819;
          goto LABEL_64;
        }
      }
      else
      {
        v29 = BugCheckParameter4;
        MiMakeSystemAddressValid(BugCheckParameter4, 0);
        v19 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)BugCheckParameter4 & 1) == 0 )
    {
      MiUnlockPageTable(v20, v19);
      v19 = 0LL;
      BugCheckParameter2 = 0LL;
      LOBYTE(v30) = v46;
      MiUnlockWorkingSetShared(v20, v30);
      goto LABEL_19;
    }
    v68 = MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
    v31 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v68) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v53) & 0xF) == 8 )
    {
      v5 |= 1u;
      v52 = v5;
      v56 = v5;
    }
    else
    {
      if ( *((_QWORD *)v20 + 14) <= (unsigned __int64)(*(_QWORD *)(v63 + 32) + 6LL) )
      {
        v11 = -1073741663;
        goto LABEL_64;
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v31) && !(unsigned int)MiLockPageTablePage(v32, 1LL) )
        goto LABEL_63;
      BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(BugCheckParameter2) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL;
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2LL) )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v31) )
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        goto LABEL_63;
      }
      v33 = 0LL;
      if ( (*(_DWORD *)(v31 + 16) & 0x400LL) != 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v31) )
        {
          v33 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v31 + 40) >> 39) & 0x3FFLL));
          if ( !(unsigned int)MiChargeCommit(v33, 1LL, 0LL) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            v11 = -1073741523;
            goto LABEL_64;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v33 + 7616), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v31 + 16) )
      {
        MiLockPageAndSetDirty(v31, 1LL);
      }
      if ( !(unsigned int)MiLockWsle(v20, v53) )
      {
        MiUnlockPageTableCharges(BugCheckParameter2);
        if ( (unsigned int)MI_PFN_IS_PROTO(v31) )
        {
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          if ( (*(_DWORD *)(v31 + 16) & 0x400LL) != 0 )
            MiReturnCommit(v33, 1LL);
        }
LABEL_63:
        v11 = -1073741670;
LABEL_64:
        v48 = v11;
        if ( v19 )
        {
          MiUnlockPageTable(v20, v19);
          v19 = 0LL;
        }
        if ( !v49 )
        {
LABEL_87:
          if ( v19 )
            MiUnlockPageTable(v20, v19);
          LOBYTE(v28) = v46;
          MiUnlockWorkingSetShared(v20, v28);
          v10 = v65;
          goto LABEL_90;
        }
        v35 = v49 - 1;
        v51 = v49 - 1;
        v36 = (v49 << 12) + v61 - 4096;
        BugCheckParameter2 = v36;
        v37 = v49;
        while ( 2 )
        {
          if ( _bittest64((const signed __int64 *)P, v35) == 1 )
          {
            v38 = ((v36 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v63 = v38;
            if ( v19 != v38 )
            {
              if ( v19 )
              {
                MiUnlockPageTable(v20, v19);
                v38 = v63;
              }
              v19 = v38;
              MiLockPageTable(v20, v38);
            }
            MiUnlockVa(v20, v36);
            v35 = v51;
          }
          v39 = 0;
          if ( (v35 & 0xF) != 0 )
          {
LABEL_81:
            if ( v39 == 1 )
              goto LABEL_82;
          }
          else
          {
            if ( !(unsigned int)MiWorkingSetIsContended(v20)
              && (!v19 || !(unsigned int)MiPageTableLockIsContended(v20, v19)) )
            {
              if ( (unsigned int)MiShouldYieldProcessor() )
                v39 = 1;
              v35 = v51;
              goto LABEL_81;
            }
LABEL_82:
            if ( v19 )
            {
              MiUnlockPageTable(v20, v19);
              v19 = 0LL;
            }
            LOBYTE(v28) = v46;
            MiUnlockWorkingSetShared(v20, v28);
            MiLockWorkingSetShared(v20);
            v35 = v51;
          }
          v36 = BugCheckParameter2 - 4096;
          BugCheckParameter2 -= 4096LL;
          v51 = --v35;
          if ( !--v37 )
          {
            LOBYTE(v5) = v52;
            v11 = v48;
            goto LABEL_87;
          }
          continue;
        }
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v34);
      MiLockPageAtDpc(v31);
      MiUpdatePfnPriority(v31, EffectivePagePriorityThread, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v49);
      Address = (unsigned __int64)v50;
    }
    ++v49;
    v41 = BugCheckParameter4 + 8;
    BugCheckParameter4 += 8LL;
    v22 = v53 + 4096;
    v53 = v22;
    v42 = 0;
    if ( v22 <= v60 && (v41 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(v20) || (unsigned int)MiPageTableLockIsContended(v20, v19) )
      {
LABEL_101:
        MiUnlockPageTable(v20, v19);
        LOBYTE(v44) = v46;
        MiUnlockWorkingSetShared(v20, v44);
        v19 = 0LL;
        MiLockWorkingSetShared(v20);
        v8 = v60;
        LOBYTE(v21) = v46;
        goto LABEL_20;
      }
      v42 = MiShouldYieldProcessor() != 0;
      v22 = v53;
    }
    v43 = !v42;
    v8 = v60;
    LOBYTE(v21) = v46;
    v23 = 0xFFFFF6FB40000000uLL;
    if ( !v43 )
      goto LABEL_101;
  }
  if ( v19 )
  {
    MiUnlockPageTable(v20, v19);
    LOBYTE(v21) = v46;
  }
  LOBYTE(v22) = v21;
  MiUnlockWorkingSetShared(v20, v22);
  MiUnlockVadRange(Object, v61, v65, 0LL);
  if ( (v5 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v45 = v62 & 0xFFFFFFFFFFFFF000uLL;
  *v70 = v8 - (v62 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v71 = (PVOID)v45;
  return (v5 & 1) != 0 ? 0x40000019 : 0;
}

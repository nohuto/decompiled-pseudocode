/*
 * XREFs of NtLockVirtualMemory @ 0x140270060
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x1402075C0 (KeUnstackDetachProcess.c)
 *     MiLockPageTablePage @ 0x140209DF0 (MiLockPageTablePage.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x14021B990 (MiVadPureReserve.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     KeStackAttachProcess @ 0x14025C110 (KeStackAttachProcess.c)
 *     MiUnlockVa @ 0x14026FB00 (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x14026FD98 (MiUnlockPageTableCharges.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x140270DA4 (MiUpdatePfnPriority.c)
 *     MiGetEffectivePagePriorityThread @ 0x140270E84 (MiGetEffectivePagePriorityThread.c)
 *     MiLockWsle @ 0x140270EB0 (MiLockWsle.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiVadPagesTradable @ 0x1402BBEC0 (MiVadPagesTradable.c)
 *     MiPageTableLockIsContended @ 0x140308460 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiGetNextPageTable @ 0x14030D820 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x14030FA6C (MiLockPageAndSetDirty.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     MiLockPageTable @ 0x14038216C (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x1403B6C60 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiShouldYieldProcessor @ 0x1405369D8 (MiShouldYieldProcessor.c)
 *     MiLockPageAtDpc @ 0x14054F91C (MiLockPageAtDpc.c)
 *     MiLockVadRange @ 0x14061DC20 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x140620130 (MiUnlockVadRange.c)
 *     MiLockUnlockCommon @ 0x14069975C (MiLockUnlockCommon.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  __int64 Address; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD **v16; // rax
  _QWORD *i; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  __int64 v21; // r14
  char *v22; // r15
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  _QWORD **v27; // rax
  _QWORD *j; // rcx
  unsigned __int64 NextPageTable; // rax
  ULONG_PTR v30; // r14
  unsigned __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rcx
  ULONG_PTR v42; // r13
  unsigned __int64 v43; // rdi
  __int64 v44; // rax
  int v45; // r13d
  __int64 v46; // rdx
  __int64 v47; // r8
  _DWORD *v48; // r9
  unsigned int EffectivePagePriorityThread; // edi
  __int64 v50; // r9
  char v51; // al
  BOOL v52; // r13d
  bool v53; // zf
  __int64 v54; // rdx
  __int64 v55; // r8
  _DWORD *v56; // r9
  unsigned __int64 v57; // rax
  unsigned __int8 v58; // [rsp+40h] [rbp-118h]
  int v59; // [rsp+44h] [rbp-114h]
  unsigned int v60; // [rsp+44h] [rbp-114h]
  unsigned __int64 v61; // [rsp+48h] [rbp-110h]
  _QWORD *v62; // [rsp+50h] [rbp-108h]
  unsigned __int64 v63; // [rsp+50h] [rbp-108h]
  char v64; // [rsp+58h] [rbp-100h]
  unsigned __int64 v65; // [rsp+60h] [rbp-F8h]
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-E8h]
  int v68; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-D8h]
  PVOID P; // [rsp+88h] [rbp-D0h]
  int v71; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v72; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v73; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v74; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+B0h] [rbp-A8h]
  __int64 v76; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v77; // [rsp+C0h] [rbp-98h]
  __int64 v78; // [rsp+C8h] [rbp-90h]
  char *v79; // [rsp+D0h] [rbp-88h]
  __int64 v80; // [rsp+D8h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  _QWORD *v82; // [rsp+E8h] [rbp-70h]
  unsigned __int64 *v83; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v82 = a3;
  v83 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v76 = 0LL;
  v74 = 0LL;
  Object = 0LL;
  v71 = 0;
  v4 = 0;
  v64 = 0;
  v68 = 0;
  result = MiLockUnlockCommon(Handle, (__int64)&v74, (__int64)&v76, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = v74;
  v7 = (v74 + v76 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v72 = v7;
  v8 = v74 & 0xFFFFFFFFFFFFF000uLL;
  v65 = v74 & 0xFFFFFFFFFFFFF000uLL;
  v61 = 0LL;
  P = MiAllocatePool(
        64,
        8
      * (((((v7 - (v74 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
       + ((((unsigned __int8)((v7 - (v74 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
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
    v64 = 2;
    v68 = 2;
  }
  BugCheckParameter1 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v73 = v8;
  v78 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = MiLockVadRange(Object, v8, v7, 0LL);
  v77 = v9;
  if ( !v9 )
  {
    v10 = -1073741819;
LABEL_90:
    MiUnlockVadRange(Object, v73, v9, 0LL);
    if ( (v4 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v10;
  }
  Address = (__int64)MiLocateAddress(v8);
  v62 = (_QWORD *)Address;
  v12 = (_QWORD *)Address;
  if ( v13 )
  {
    while ( (unsigned int)MiVadPagesTradable(v12) )
    {
      v15 = v12;
      v16 = (_QWORD **)v12[1];
      if ( v16 )
      {
        v12 = (_QWORD *)v12[1];
        for ( i = *v16; i; i = (_QWORD *)*i )
          v12 = i;
      }
      else
      {
        while ( 1 )
        {
          v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v12 || (_QWORD *)*v12 == v15 )
            break;
          v15 = v12;
        }
      }
      if ( v14 + 1 >= v9 )
        goto LABEL_18;
    }
    v10 = -1073741747;
    goto LABEL_90;
  }
LABEL_18:
  v59 = MiVadPureReserve(Address);
  v21 = 0LL;
  v22 = (char *)Object + 1664;
  v79 = (char *)Object + 1664;
  v75 = *((_QWORD *)Object + 210);
LABEL_19:
  v58 = MiLockWorkingSetShared((__int64)v22, v18, v19, v20);
  LOBYTE(v23) = v58;
LABEL_20:
  v24 = v65;
  v25 = 0xFFFFF6FB40000000uLL;
  while ( v24 <= v7 )
  {
    if ( v24 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v26 = Address;
      v27 = *(_QWORD ***)(Address + 8);
      if ( v27 )
      {
        Address = *(_QWORD *)(Address + 8);
        v62 = v27;
        for ( j = *v27; j; j = (_QWORD *)*j )
        {
          Address = (__int64)j;
          v62 = j;
        }
      }
      else
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v62 = (_QWORD *)Address;
        if ( Address )
        {
          do
          {
            if ( *(_QWORD *)Address == v26 )
              break;
            v26 = Address;
            Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( Address );
          v62 = (_QWORD *)Address;
        }
      }
      v59 = MiVadPureReserve(Address);
    }
    BugCheckParameter2 = ((v24 >> 18) & 0x3FFFFFF8) + v25;
    if ( v21 != BugCheckParameter2 )
    {
      if ( v21 )
      {
        MiUnlockPageTable(v22, v21, v25, v23);
        v21 = 0LL;
        LOBYTE(v23) = v58;
      }
      if ( v59 )
      {
        NextPageTable = MiGetNextPageTable(BugCheckParameter1, v78, 0, v23, 0, (__int64)&v71);
        if ( NextPageTable )
          v21 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != BugCheckParameter1 )
        {
          v10 = -1073741819;
          goto LABEL_64;
        }
      }
      else
      {
        v30 = BugCheckParameter1;
        MiMakeSystemAddressValid(BugCheckParameter1, 0);
        v21 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)BugCheckParameter1 & 1) == 0 )
    {
      MiUnlockPageTable(v22, v21, v25, v23);
      v21 = 0LL;
      BugCheckParameter2 = 0LL;
      MiUnlockWorkingSetShared((__int64)v22, v58);
      v18 = v65;
      goto LABEL_19;
    }
    v80 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
    v31 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v80) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v65) & 0xF) == 8 )
    {
      v4 |= 1u;
      v64 = v4;
      v68 = v4;
    }
    else
    {
      if ( *((_QWORD *)v22 + 14) <= (unsigned __int64)(*(_QWORD *)(v75 + 32) + 6LL) )
      {
        v10 = -1073741663;
        goto LABEL_64;
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v31) && !(unsigned int)MiLockPageTablePage(v32, 1) )
        goto LABEL_63;
      BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(BugCheckParameter2) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL;
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v31) )
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1uLL, v25, v23);
        goto LABEL_63;
      }
      v33 = 0LL;
      if ( (*(_DWORD *)(v31 + 16) & 0x400LL) != 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v31) )
        {
          v33 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v31 + 40) >> 39) & 0x3FFLL));
          if ( !(unsigned int)MiChargeCommit(v33, 1uLL, 0) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2, 2uLL, v34, v35);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1uLL, v36, v37);
            v10 = -1073741523;
            goto LABEL_64;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v33 + 7616), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v31 + 16) )
      {
        MiLockPageAndSetDirty(v31, 1LL);
      }
      if ( !(unsigned int)MiLockWsle(v22, v65) )
      {
        MiUnlockPageTableCharges(BugCheckParameter2, 2uLL, v39, v40);
        if ( (unsigned int)MI_PFN_IS_PROTO(v31) )
        {
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1uLL, v25, v23);
          if ( (*(_DWORD *)(v31 + 16) & 0x400LL) != 0 )
            MiReturnCommit(v33, 1LL);
        }
LABEL_63:
        v10 = -1073741670;
LABEL_64:
        v60 = v10;
        if ( v21 )
        {
          MiUnlockPageTable(v22, v21, v25, v23);
          v21 = 0LL;
        }
        if ( !v61 )
        {
LABEL_87:
          if ( v21 )
            MiUnlockPageTable(v22, v21, v25, v23);
          MiUnlockWorkingSetShared((__int64)v22, v58);
          v9 = v77;
          goto LABEL_90;
        }
        v41 = v61 - 1;
        v63 = v61 - 1;
        v42 = (v61 << 12) + v73 - 4096;
        BugCheckParameter2 = v42;
        v43 = v61;
        while ( 2 )
        {
          if ( _bittest64((const signed __int64 *)P, v41) == 1 )
          {
            v44 = ((v42 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v75 = v44;
            if ( v21 != v44 )
            {
              if ( v21 )
              {
                MiUnlockPageTable(v22, v21, v25, v23);
                v44 = v75;
              }
              v21 = v44;
              MiLockPageTable(v22, v44);
            }
            MiUnlockVa((__int64)v22, v42);
            v41 = v63;
          }
          v45 = 0;
          if ( (v41 & 0xF) != 0 )
          {
LABEL_81:
            if ( v45 == 1 )
              goto LABEL_82;
          }
          else
          {
            if ( !(unsigned int)MiWorkingSetIsContended(v22) && (!v21 || !(unsigned int)MiPageTableLockIsContended(v22)) )
            {
              if ( (unsigned int)MiShouldYieldProcessor() )
                v45 = 1;
              v41 = v63;
              goto LABEL_81;
            }
LABEL_82:
            if ( v21 )
            {
              MiUnlockPageTable(v22, v21, v25, v23);
              v21 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v22, v58);
            MiLockWorkingSetShared((__int64)v22, v46, v47, v48);
            v41 = v63;
          }
          v42 = BugCheckParameter2 - 4096;
          BugCheckParameter2 -= 4096LL;
          v63 = --v41;
          if ( !--v43 )
          {
            LOBYTE(v4) = v64;
            v10 = v60;
            goto LABEL_87;
          }
          continue;
        }
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v38);
      MiLockPageAtDpc(v31);
      MiUpdatePfnPriority(v31, EffectivePagePriorityThread, 0LL, v50);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v61);
      Address = (__int64)v62;
    }
    ++v61;
    v51 = BugCheckParameter1 + 8;
    BugCheckParameter1 += 8LL;
    v24 = v65 + 4096;
    v65 = v24;
    v52 = 0;
    if ( v24 <= v72 && (v51 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(v22) || (unsigned int)MiPageTableLockIsContended(v22) )
      {
LABEL_101:
        MiUnlockPageTable(v22, v21, v25, v23);
        MiUnlockWorkingSetShared((__int64)v22, v58);
        v21 = 0LL;
        MiLockWorkingSetShared((__int64)v22, v54, v55, v56);
        v7 = v72;
        LOBYTE(v23) = v58;
        goto LABEL_20;
      }
      v52 = MiShouldYieldProcessor() != 0;
      v24 = v65;
    }
    v53 = !v52;
    v7 = v72;
    LOBYTE(v23) = v58;
    v25 = 0xFFFFF6FB40000000uLL;
    if ( !v53 )
      goto LABEL_101;
  }
  if ( v21 )
  {
    MiUnlockPageTable(v22, v21, 0xFFFFF6FB40000000uLL, v23);
    LOBYTE(v23) = v58;
  }
  MiUnlockWorkingSetShared((__int64)v22, v23);
  MiUnlockVadRange(Object, v73, v77, 0LL);
  if ( (v4 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v57 = v74 & 0xFFFFFFFFFFFFF000uLL;
  *v82 = v7 - (v74 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v83 = v57;
  return (v4 & 1) != 0 ? 0x40000019 : 0;
}

/*
 * XREFs of NtLockVirtualMemory @ 0x1402D3000
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x140235D70 (MiGetNextPageTable.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     MiLockPageTablePage @ 0x14026B110 (MiLockPageTablePage.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x14027D170 (MiVadPureReserve.c)
 *     MiLockPageAndSetDirty @ 0x14029F10C (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402D1080 (MiGetEffectivePagePriorityThread.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x1402D3D44 (MiUpdatePfnPriority.c)
 *     MiLockWsle @ 0x1402D3E24 (MiLockWsle.c)
 *     MiUnlockPageTableCharges @ 0x1402D3FC8 (MiUnlockPageTableCharges.c)
 *     MiUnlockVa @ 0x1402D4B38 (MiUnlockVa.c)
 *     MiVadPagesTradable @ 0x14034120C (MiVadPagesTradable.c)
 *     MiLockPageTable @ 0x140381A6C (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x1403B54F0 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiShouldYieldProcessor @ 0x140534ED8 (MiShouldYieldProcessor.c)
 *     MiLockPageAtDpc @ 0x14054DE4C (MiLockPageAtDpc.c)
 *     MiUnlockVadRange @ 0x14062DF70 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x14062E080 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1406BD73C (MiLockUnlockCommon.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  unsigned __int64 v18; // r14
  char *v19; // r15
  unsigned __int8 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD **v24; // rax
  _QWORD *j; // rcx
  unsigned __int64 NextPageTable; // rax
  ULONG_PTR v27; // r14
  __int64 v28; // r13
  __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rcx
  ULONG_PTR v32; // r13
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  int v35; // r13d
  unsigned int EffectivePagePriorityThread; // edi
  char v37; // al
  BOOL v38; // r13d
  bool v39; // zf
  unsigned __int64 v40; // rax
  unsigned __int8 v41; // [rsp+40h] [rbp-118h]
  int v42; // [rsp+44h] [rbp-114h]
  unsigned int v43; // [rsp+44h] [rbp-114h]
  unsigned __int64 v44; // [rsp+48h] [rbp-110h]
  _QWORD *v45; // [rsp+50h] [rbp-108h]
  unsigned __int64 v46; // [rsp+50h] [rbp-108h]
  char v47; // [rsp+58h] [rbp-100h]
  unsigned __int64 v48; // [rsp+60h] [rbp-F8h]
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-E8h]
  int v51; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-D8h]
  PVOID P; // [rsp+88h] [rbp-D0h]
  int v54; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v55; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v56; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v57; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-A8h]
  __int64 v59; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v60; // [rsp+C0h] [rbp-98h]
  __int64 v61; // [rsp+C8h] [rbp-90h]
  char *v62; // [rsp+D0h] [rbp-88h]
  __int64 v63; // [rsp+D8h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  _QWORD *v65; // [rsp+E8h] [rbp-70h]
  unsigned __int64 *v66; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v65 = a3;
  v66 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v59 = 0LL;
  v57 = 0LL;
  Object = 0LL;
  v54 = 0;
  v4 = 0;
  v47 = 0;
  v51 = 0;
  result = MiLockUnlockCommon(Handle, (__int64)&v57, (__int64)&v59, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = v57;
  v7 = (v57 + v59 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v55 = v7;
  v8 = v57 & 0xFFFFFFFFFFFFF000uLL;
  v48 = v57 & 0xFFFFFFFFFFFFF000uLL;
  v44 = 0LL;
  P = MiAllocatePool(
        64,
        8
      * (((((v7 - (v57 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
       + ((((unsigned __int8)((v7 - (v57 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
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
    v47 = 2;
    v51 = 2;
  }
  BugCheckParameter4 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v56 = v8;
  v61 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = MiLockVadRange(Object, v8, v7, 0LL);
  v60 = v9;
  if ( !v9 )
  {
    v10 = -1073741819;
LABEL_90:
    MiUnlockVadRange(Object, v56, v9, 0LL);
    if ( (v4 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v10;
  }
  Address = (__int64)MiLocateAddress(v8);
  v45 = (_QWORD *)Address;
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
  v42 = MiVadPureReserve(Address);
  v18 = 0LL;
  v19 = (char *)Object + 1664;
  v62 = (char *)Object + 1664;
  v58 = *((_QWORD *)Object + 210);
LABEL_19:
  v41 = MiLockWorkingSetShared((__int64)v19);
  v20 = v41;
LABEL_20:
  v21 = v48;
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
        v45 = v24;
        for ( j = *v24; j; j = (_QWORD *)*j )
        {
          Address = (__int64)j;
          v45 = j;
        }
      }
      else
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v45 = (_QWORD *)Address;
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
          v45 = (_QWORD *)Address;
        }
      }
      v42 = MiVadPureReserve(Address);
    }
    BugCheckParameter2 = ((v21 >> 18) & 0x3FFFFFF8) + v22;
    if ( v18 != BugCheckParameter2 )
    {
      if ( v18 )
      {
        MiUnlockPageTable(v19, v18);
        v18 = 0LL;
        v20 = v41;
      }
      if ( v42 )
      {
        NextPageTable = MiGetNextPageTable(BugCheckParameter4, v61, 0LL, v20, 0, &v54);
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
        v27 = BugCheckParameter4;
        MiMakeSystemAddressValid(BugCheckParameter4, 0LL, (*(_DWORD *)(Address + 48) >> 12) & 0x3F, v20, 0);
        v18 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)BugCheckParameter4 & 1) == 0 )
    {
      MiUnlockPageTable(v19, v18);
      v18 = 0LL;
      BugCheckParameter2 = 0LL;
      MiUnlockWorkingSetShared((__int64)v19, v41);
      goto LABEL_19;
    }
    v63 = MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
    v28 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v63) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v48) & 0xF) == 8 )
    {
      v4 |= 1u;
      v47 = v4;
      v51 = v4;
    }
    else
    {
      if ( *((_QWORD *)v19 + 14) <= (unsigned __int64)(*(_QWORD *)(v58 + 32) + 6LL) )
      {
        v10 = -1073741663;
        goto LABEL_64;
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v28) && !(unsigned int)MiLockPageTablePage(v29, 1) )
        goto LABEL_63;
      BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(BugCheckParameter2) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL;
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v28) )
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        goto LABEL_63;
      }
      v30 = 0LL;
      if ( (*(_DWORD *)(v28 + 16) & 0x400LL) != 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v28) )
        {
          v30 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v28 + 40) >> 39) & 0x3FFLL));
          if ( !(unsigned int)MiChargeCommit(v30, 1uLL, 0) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            v10 = -1073741523;
            goto LABEL_64;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v30 + 7616), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v28 + 16) )
      {
        MiLockPageAndSetDirty(v28, 1);
      }
      if ( !(unsigned int)MiLockWsle(v19, v48) )
      {
        MiUnlockPageTableCharges(BugCheckParameter2);
        if ( (unsigned int)MI_PFN_IS_PROTO(v28) )
        {
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          if ( (*(_DWORD *)(v28 + 16) & 0x400LL) != 0 )
            MiReturnCommit(v30, 1LL);
        }
LABEL_63:
        v10 = -1073741670;
LABEL_64:
        v43 = v10;
        if ( v18 )
        {
          MiUnlockPageTable(v19, v18);
          v18 = 0LL;
        }
        if ( !v44 )
        {
LABEL_87:
          if ( v18 )
            MiUnlockPageTable(v19, v18);
          MiUnlockWorkingSetShared((__int64)v19, v41);
          v9 = v60;
          goto LABEL_90;
        }
        v31 = v44 - 1;
        v46 = v44 - 1;
        v32 = (v44 << 12) + v56 - 4096;
        BugCheckParameter2 = v32;
        v33 = v44;
        while ( 2 )
        {
          if ( _bittest64((const signed __int64 *)P, v31) == 1 )
          {
            v34 = ((v32 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v58 = v34;
            if ( v18 != v34 )
            {
              if ( v18 )
              {
                MiUnlockPageTable(v19, v18);
                v34 = v58;
              }
              v18 = v34;
              MiLockPageTable(v19, v34);
            }
            MiUnlockVa(v19, v32);
            v31 = v46;
          }
          v35 = 0;
          if ( (v31 & 0xF) != 0 )
          {
LABEL_81:
            if ( v35 == 1 )
              goto LABEL_82;
          }
          else
          {
            if ( !MiWorkingSetIsContended((__int64)v19)
              && (!v18 || !(unsigned int)MiPageTableLockIsContended((__int64)v19, v18)) )
            {
              if ( (unsigned int)MiShouldYieldProcessor() )
                v35 = 1;
              v31 = v46;
              goto LABEL_81;
            }
LABEL_82:
            if ( v18 )
            {
              MiUnlockPageTable(v19, v18);
              v18 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v19, v41);
            MiLockWorkingSetShared((__int64)v19);
            v31 = v46;
          }
          v32 = BugCheckParameter2 - 4096;
          BugCheckParameter2 -= 4096LL;
          v46 = --v31;
          if ( !--v33 )
          {
            LOBYTE(v4) = v47;
            v10 = v43;
            goto LABEL_87;
          }
          continue;
        }
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
      MiLockPageAtDpc(v28);
      MiUpdatePfnPriority(v28, EffectivePagePriorityThread, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v44);
      Address = (__int64)v45;
    }
    ++v44;
    v37 = BugCheckParameter4 + 8;
    BugCheckParameter4 += 8LL;
    v21 = v48 + 4096;
    v48 = v21;
    v38 = 0;
    if ( v21 <= v55 && (v37 & 0x78) == 0 )
    {
      if ( MiWorkingSetIsContended((__int64)v19) || (unsigned int)MiPageTableLockIsContended((__int64)v19, v18) )
      {
LABEL_101:
        MiUnlockPageTable(v19, v18);
        MiUnlockWorkingSetShared((__int64)v19, v41);
        v18 = 0LL;
        MiLockWorkingSetShared((__int64)v19);
        v7 = v55;
        v20 = v41;
        goto LABEL_20;
      }
      v38 = MiShouldYieldProcessor() != 0;
      v21 = v48;
    }
    v39 = !v38;
    v7 = v55;
    v20 = v41;
    v22 = 0xFFFFF6FB40000000uLL;
    if ( !v39 )
      goto LABEL_101;
  }
  if ( v18 )
  {
    MiUnlockPageTable(v19, v18);
    v20 = v41;
  }
  MiUnlockWorkingSetShared((__int64)v19, v20);
  MiUnlockVadRange(Object, v56, v60, 0LL);
  if ( (v4 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v40 = v57 & 0xFFFFFFFFFFFFF000uLL;
  *v65 = v7 - (v57 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v66 = v40;
  return (v4 & 1) != 0 ? 0x40000019 : 0;
}

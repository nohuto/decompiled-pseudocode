/*
 * XREFs of NtLockVirtualMemory @ 0x1402A5D80
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x14021AF70 (MiVadPureReserve.c)
 *     MiLockPageAndSetDirty @ 0x140224410 (MiLockPageAndSetDirty.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     MiLockPageTablePage @ 0x1402A83C0 (MiLockPageTablePage.c)
 *     MiUpdatePfnPriority @ 0x1402A91E0 (MiUpdatePfnPriority.c)
 *     MiLockWsle @ 0x1402A92C0 (MiLockWsle.c)
 *     MiVadPagesTradable @ 0x1402ACB38 (MiVadPagesTradable.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402B3FC0 (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockPageTableCharges @ 0x1402B713C (MiUnlockPageTableCharges.c)
 *     MiUnlockVa @ 0x14030B15C (MiUnlockVa.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiLockPageTable @ 0x14037F34C (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x1403ACF00 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiShouldYieldProcessor @ 0x140530EB8 (MiShouldYieldProcessor.c)
 *     MiLockPageAtDpc @ 0x140549E2C (MiLockPageAtDpc.c)
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x14063C394 (MiLockUnlockCommon.c)
 *     MiUnlockVadRange @ 0x14063C4D4 (MiUnlockVadRange.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 Address; // rdi
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
  __int64 v23; // rcx
  _QWORD **v24; // rax
  _QWORD *i; // rcx
  unsigned __int64 NextPageTable; // rax
  ULONG_PTR v27; // r14
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdi
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned __int64 v39; // rcx
  ULONG_PTR v40; // r13
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  int v43; // r13d
  unsigned int EffectivePagePriorityThread; // edi
  __int64 v45; // r9
  char v46; // al
  BOOL v47; // r13d
  bool v48; // zf
  unsigned __int64 v49; // rax
  unsigned __int8 v50; // [rsp+40h] [rbp-118h]
  int v51; // [rsp+44h] [rbp-114h]
  unsigned int v52; // [rsp+44h] [rbp-114h]
  unsigned __int64 v53; // [rsp+48h] [rbp-110h]
  _QWORD *v54; // [rsp+50h] [rbp-108h]
  unsigned __int64 v55; // [rsp+50h] [rbp-108h]
  char v56; // [rsp+58h] [rbp-100h]
  unsigned __int64 v57; // [rsp+60h] [rbp-F8h]
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-E8h]
  int v60; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-D8h]
  PVOID P; // [rsp+88h] [rbp-D0h]
  int v63; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v64; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v65; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v66; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-A8h]
  __int64 v68; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v69; // [rsp+C0h] [rbp-98h]
  __int64 v70; // [rsp+C8h] [rbp-90h]
  char *v71; // [rsp+D0h] [rbp-88h]
  __int64 v72; // [rsp+D8h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  _QWORD *v74; // [rsp+E8h] [rbp-70h]
  unsigned __int64 *v75; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v74 = a3;
  v75 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v68 = 0LL;
  v66 = 0LL;
  Object = 0LL;
  v63 = 0;
  v4 = 0;
  v56 = 0;
  v60 = 0;
  result = MiLockUnlockCommon(Handle, (__int64)&v66, (__int64)&v68, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = v66;
  v7 = (v66 + v68 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v64 = v7;
  v8 = v66 & 0xFFFFFFFFFFFFF000uLL;
  v57 = v66 & 0xFFFFFFFFFFFFF000uLL;
  v53 = 0LL;
  P = MiAllocatePool(
        64,
        8
      * (((((v7 - (v66 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
       + ((((unsigned __int8)((v7 - (v66 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
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
    v56 = 2;
    v60 = 2;
  }
  BugCheckParameter1 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v65 = v8;
  v70 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = MiLockVadRange(Object, v8, v7, 0LL);
  v69 = v9;
  if ( !v9 )
  {
    v10 = -1073741819;
LABEL_90:
    MiUnlockVadRange(Object, v65, v9, 0LL);
    if ( (v4 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v10;
  }
  Address = (__int64)MiLocateAddress(v8);
  v54 = (_QWORD *)Address;
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
  v51 = MiVadPureReserve(Address);
  v18 = 0LL;
  v19 = (char *)Object + 1664;
  v71 = (char *)Object + 1664;
  v67 = *((_QWORD *)Object + 210);
LABEL_19:
  v50 = MiLockWorkingSetShared((__int64)v19);
  LOBYTE(v20) = v50;
LABEL_20:
  v21 = v57;
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
        v54 = v24;
        for ( i = *v24; i; i = (_QWORD *)*i )
        {
          Address = (__int64)i;
          v54 = i;
        }
      }
      else
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v54 = (_QWORD *)Address;
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
          v54 = (_QWORD *)Address;
        }
      }
      v51 = MiVadPureReserve(Address);
    }
    BugCheckParameter2 = ((v21 >> 18) & 0x3FFFFFF8) + v22;
    if ( v18 != BugCheckParameter2 )
    {
      if ( v18 )
      {
        MiUnlockPageTable(v19, v18);
        v18 = 0LL;
        LOBYTE(v20) = v50;
      }
      if ( v51 )
      {
        NextPageTable = MiGetNextPageTable(BugCheckParameter1, v70, 0, v20, 0, (__int64)&v63);
        if ( NextPageTable )
          v18 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != BugCheckParameter1 )
        {
          v10 = -1073741819;
          goto LABEL_64;
        }
      }
      else
      {
        v27 = BugCheckParameter1;
        MiMakeSystemAddressValid(BugCheckParameter1, 0);
        v18 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)BugCheckParameter1 & 1) == 0 )
    {
      MiUnlockPageTable(v19, v18);
      v18 = 0LL;
      BugCheckParameter2 = 0LL;
      MiUnlockWorkingSetShared((__int64)v19, v50);
      goto LABEL_19;
    }
    v72 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
    v28 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v72) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v57) & 0xF) == 8 )
    {
      v4 |= 1u;
      v56 = v4;
      v60 = v4;
    }
    else
    {
      if ( *((_QWORD *)v19 + 14) <= (unsigned __int64)(*(_QWORD *)(v67 + 32) + 6LL) )
      {
        v10 = -1073741663;
        goto LABEL_64;
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v28, v29, v30) && !(unsigned int)MiLockPageTablePage(v31, 1LL) )
        goto LABEL_63;
      BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(BugCheckParameter2) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL;
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2LL) )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v28, v32, v33) )
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        goto LABEL_63;
      }
      v34 = 0LL;
      if ( (*(_DWORD *)(v28 + 16) & 0x400LL) != 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v28, v32, v33) )
        {
          v34 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v28 + 40) >> 39) & 0x3FFLL));
          if ( !(unsigned int)MiChargeCommit(v34, 1uLL, 0) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            v10 = -1073741523;
            goto LABEL_64;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v34 + 7616), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v28 + 16) )
      {
        MiLockPageAndSetDirty(v28, 1LL, v35);
      }
      if ( !(unsigned int)MiLockWsle(v19, v57) )
      {
        MiUnlockPageTableCharges(BugCheckParameter2);
        if ( (unsigned int)MI_PFN_IS_PROTO(v28, v37, v38) )
        {
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          if ( (*(_DWORD *)(v28 + 16) & 0x400LL) != 0 )
            MiReturnCommit(v34, 1LL);
        }
LABEL_63:
        v10 = -1073741670;
LABEL_64:
        v52 = v10;
        if ( v18 )
        {
          MiUnlockPageTable(v19, v18);
          v18 = 0LL;
        }
        if ( !v53 )
        {
LABEL_87:
          if ( v18 )
            MiUnlockPageTable(v19, v18);
          MiUnlockWorkingSetShared((__int64)v19, v50);
          v9 = v69;
          goto LABEL_90;
        }
        v39 = v53 - 1;
        v55 = v53 - 1;
        v40 = (v53 << 12) + v65 - 4096;
        BugCheckParameter2 = v40;
        v41 = v53;
        while ( 2 )
        {
          if ( _bittest64((const signed __int64 *)P, v39) == 1 )
          {
            v42 = ((v40 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v67 = v42;
            if ( v18 != v42 )
            {
              if ( v18 )
              {
                MiUnlockPageTable(v19, v18);
                v42 = v67;
              }
              v18 = v42;
              MiLockPageTable(v19, v42);
            }
            MiUnlockVa(v19, v40);
            v39 = v55;
          }
          v43 = 0;
          if ( (v39 & 0xF) != 0 )
          {
LABEL_81:
            if ( v43 == 1 )
              goto LABEL_82;
          }
          else
          {
            if ( !(unsigned int)MiWorkingSetIsContended(v19)
              && (!v18 || !(unsigned int)MiPageTableLockIsContended(v19, v18)) )
            {
              if ( (unsigned int)MiShouldYieldProcessor() )
                v43 = 1;
              v39 = v55;
              goto LABEL_81;
            }
LABEL_82:
            if ( v18 )
            {
              MiUnlockPageTable(v19, v18);
              v18 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v19, v50);
            MiLockWorkingSetShared((__int64)v19);
            v39 = v55;
          }
          v40 = BugCheckParameter2 - 4096;
          BugCheckParameter2 -= 4096LL;
          v55 = --v39;
          if ( !--v41 )
          {
            LOBYTE(v4) = v56;
            v10 = v52;
            goto LABEL_87;
          }
          continue;
        }
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v36);
      MiLockPageAtDpc(v28);
      MiUpdatePfnPriority(v28, EffectivePagePriorityThread, 0LL, v45);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v53);
      Address = (__int64)v54;
    }
    ++v53;
    v46 = BugCheckParameter1 + 8;
    BugCheckParameter1 += 8LL;
    v21 = v57 + 4096;
    v57 = v21;
    v47 = 0;
    if ( v21 <= v64 && (v46 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(v19) || (unsigned int)MiPageTableLockIsContended(v19, v18) )
      {
LABEL_101:
        MiUnlockPageTable(v19, v18);
        MiUnlockWorkingSetShared((__int64)v19, v50);
        v18 = 0LL;
        MiLockWorkingSetShared((__int64)v19);
        v7 = v64;
        LOBYTE(v20) = v50;
        goto LABEL_20;
      }
      v47 = MiShouldYieldProcessor() != 0;
      v21 = v57;
    }
    v48 = !v47;
    v7 = v64;
    LOBYTE(v20) = v50;
    v22 = 0xFFFFF6FB40000000uLL;
    if ( !v48 )
      goto LABEL_101;
  }
  if ( v18 )
  {
    MiUnlockPageTable(v19, v18);
    LOBYTE(v20) = v50;
  }
  MiUnlockWorkingSetShared((__int64)v19, v20);
  MiUnlockVadRange(Object, v65, v69, 0LL);
  if ( (v4 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v49 = v66 & 0xFFFFFFFFFFFFF000uLL;
  *v74 = v7 - (v66 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v75 = v49;
  return (v4 & 1) != 0 ? 0x40000019 : 0;
}

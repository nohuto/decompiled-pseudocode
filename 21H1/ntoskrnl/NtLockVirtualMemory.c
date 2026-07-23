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
  __int64 Address; // rdi
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
  __int64 v24; // rcx
  _QWORD **v25; // rax
  _QWORD *i; // rcx
  unsigned __int64 NextPageTable; // rax
  ULONG_PTR v28; // r14
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // rcx
  ULONG_PTR v41; // r13
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // r13d
  unsigned int EffectivePagePriorityThread; // edi
  __int64 v46; // r9
  char v47; // al
  BOOL v48; // r13d
  bool v49; // zf
  unsigned __int64 v50; // rax
  unsigned __int8 v51; // [rsp+40h] [rbp-118h]
  int v52; // [rsp+44h] [rbp-114h]
  NTSTATUS v53; // [rsp+44h] [rbp-114h]
  unsigned __int64 v54; // [rsp+48h] [rbp-110h]
  _QWORD *v55; // [rsp+50h] [rbp-108h]
  unsigned __int64 v56; // [rsp+50h] [rbp-108h]
  char v57; // [rsp+58h] [rbp-100h]
  unsigned __int64 v58; // [rsp+60h] [rbp-F8h]
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-E8h]
  int v61; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-D8h]
  PVOID P; // [rsp+88h] [rbp-D0h]
  int v64; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v65; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v66; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v67; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-A8h]
  __int64 v69; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v70; // [rsp+C0h] [rbp-98h]
  __int64 v71; // [rsp+C8h] [rbp-90h]
  char *v72; // [rsp+D0h] [rbp-88h]
  __int64 v73; // [rsp+D8h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  PSIZE_T v75; // [rsp+E8h] [rbp-70h]
  PVOID *v76; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v75 = RegionSize;
  v76 = BaseAddress;
  memset(&ApcState, 0, sizeof(ApcState));
  v69 = 0LL;
  v67 = 0LL;
  Object = 0LL;
  v64 = 0;
  v5 = 0;
  v57 = 0;
  v61 = 0;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v67, (__int64)&v69, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v7 = v67;
  v8 = (v67 + v69 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v65 = v8;
  v9 = v67 & 0xFFFFFFFFFFFFF000uLL;
  v58 = v67 & 0xFFFFFFFFFFFFF000uLL;
  v54 = 0LL;
  P = MiAllocatePool(
        64,
        8
      * (((((v8 - (v67 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
       + ((((unsigned __int8)((v8 - (v67 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
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
    v57 = 2;
    v61 = 2;
  }
  BugCheckParameter1 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v66 = v9;
  v71 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MiLockVadRange(Object, v9, v8, 0LL);
  v70 = v10;
  if ( !v10 )
  {
    v11 = -1073741819;
LABEL_90:
    MiUnlockVadRange(Object, v66, v10, 0LL);
    if ( (v5 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v11;
  }
  Address = (__int64)MiLocateAddress(v9);
  v55 = (_QWORD *)Address;
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
  v52 = MiVadPureReserve(Address);
  v19 = 0LL;
  v20 = (char *)Object + 1664;
  v72 = (char *)Object + 1664;
  v68 = *((_QWORD *)Object + 210);
LABEL_19:
  v51 = MiLockWorkingSetShared((__int64)v20);
  LOBYTE(v21) = v51;
LABEL_20:
  v22 = v58;
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
        v55 = v25;
        for ( i = *v25; i; i = (_QWORD *)*i )
        {
          Address = (__int64)i;
          v55 = i;
        }
      }
      else
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v55 = (_QWORD *)Address;
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
          v55 = (_QWORD *)Address;
        }
      }
      v52 = MiVadPureReserve(Address);
    }
    BugCheckParameter2 = ((v22 >> 18) & 0x3FFFFFF8) + v23;
    if ( v19 != BugCheckParameter2 )
    {
      if ( v19 )
      {
        MiUnlockPageTable(v20, v19);
        v19 = 0LL;
        LOBYTE(v21) = v51;
      }
      if ( v52 )
      {
        NextPageTable = MiGetNextPageTable(BugCheckParameter1, v71, 0, v21, 0, (__int64)&v64);
        if ( NextPageTable )
          v19 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != BugCheckParameter1 )
        {
          v11 = -1073741819;
          goto LABEL_64;
        }
      }
      else
      {
        v28 = BugCheckParameter1;
        MiMakeSystemAddressValid(BugCheckParameter1, 0);
        v19 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)BugCheckParameter1 & 1) == 0 )
    {
      MiUnlockPageTable(v20, v19);
      v19 = 0LL;
      BugCheckParameter2 = 0LL;
      MiUnlockWorkingSetShared((__int64)v20, v51);
      goto LABEL_19;
    }
    v73 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
    v29 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v73) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v58) & 0xF) == 8 )
    {
      v5 |= 1u;
      v57 = v5;
      v61 = v5;
    }
    else
    {
      if ( *((_QWORD *)v20 + 14) <= (unsigned __int64)(*(_QWORD *)(v68 + 32) + 6LL) )
      {
        v11 = -1073741663;
        goto LABEL_64;
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v29, v30, v31) && !(unsigned int)MiLockPageTablePage(v32, 1LL) )
        goto LABEL_63;
      BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(BugCheckParameter2) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL;
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2LL) )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v29, v33, v34) )
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v29 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        goto LABEL_63;
      }
      v35 = 0LL;
      if ( (*(_DWORD *)(v29 + 16) & 0x400LL) != 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v29, v33, v34) )
        {
          v35 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v29 + 40) >> 39) & 0x3FFLL));
          if ( !(unsigned int)MiChargeCommit(v35, 1uLL, 0) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v29 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            v11 = -1073741523;
            goto LABEL_64;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v35 + 7616), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v29 + 16) )
      {
        MiLockPageAndSetDirty(v29, 1LL, v36);
      }
      if ( !(unsigned int)MiLockWsle(v20, v58) )
      {
        MiUnlockPageTableCharges(BugCheckParameter2);
        if ( (unsigned int)MI_PFN_IS_PROTO(v29, v38, v39) )
        {
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v29 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          if ( (*(_DWORD *)(v29 + 16) & 0x400LL) != 0 )
            MiReturnCommit(v35, 1LL);
        }
LABEL_63:
        v11 = -1073741670;
LABEL_64:
        v53 = v11;
        if ( v19 )
        {
          MiUnlockPageTable(v20, v19);
          v19 = 0LL;
        }
        if ( !v54 )
        {
LABEL_87:
          if ( v19 )
            MiUnlockPageTable(v20, v19);
          MiUnlockWorkingSetShared((__int64)v20, v51);
          v10 = v70;
          goto LABEL_90;
        }
        v40 = v54 - 1;
        v56 = v54 - 1;
        v41 = (v54 << 12) + v66 - 4096;
        BugCheckParameter2 = v41;
        v42 = v54;
        while ( 2 )
        {
          if ( _bittest64((const signed __int64 *)P, v40) == 1 )
          {
            v43 = ((v41 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v68 = v43;
            if ( v19 != v43 )
            {
              if ( v19 )
              {
                MiUnlockPageTable(v20, v19);
                v43 = v68;
              }
              v19 = v43;
              MiLockPageTable(v20, v43);
            }
            MiUnlockVa(v20, v41);
            v40 = v56;
          }
          v44 = 0;
          if ( (v40 & 0xF) != 0 )
          {
LABEL_81:
            if ( v44 == 1 )
              goto LABEL_82;
          }
          else
          {
            if ( !(unsigned int)MiWorkingSetIsContended(v20)
              && (!v19 || !(unsigned int)MiPageTableLockIsContended(v20, v19)) )
            {
              if ( (unsigned int)MiShouldYieldProcessor() )
                v44 = 1;
              v40 = v56;
              goto LABEL_81;
            }
LABEL_82:
            if ( v19 )
            {
              MiUnlockPageTable(v20, v19);
              v19 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v20, v51);
            MiLockWorkingSetShared((__int64)v20);
            v40 = v56;
          }
          v41 = BugCheckParameter2 - 4096;
          BugCheckParameter2 -= 4096LL;
          v56 = --v40;
          if ( !--v42 )
          {
            LOBYTE(v5) = v57;
            v11 = v53;
            goto LABEL_87;
          }
          continue;
        }
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v37);
      MiLockPageAtDpc(v29);
      MiUpdatePfnPriority(v29, EffectivePagePriorityThread, 0LL, v46);
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v54);
      Address = (__int64)v55;
    }
    ++v54;
    v47 = BugCheckParameter1 + 8;
    BugCheckParameter1 += 8LL;
    v22 = v58 + 4096;
    v58 = v22;
    v48 = 0;
    if ( v22 <= v65 && (v47 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(v20) || (unsigned int)MiPageTableLockIsContended(v20, v19) )
      {
LABEL_101:
        MiUnlockPageTable(v20, v19);
        MiUnlockWorkingSetShared((__int64)v20, v51);
        v19 = 0LL;
        MiLockWorkingSetShared((__int64)v20);
        v8 = v65;
        LOBYTE(v21) = v51;
        goto LABEL_20;
      }
      v48 = MiShouldYieldProcessor() != 0;
      v22 = v58;
    }
    v49 = !v48;
    v8 = v65;
    LOBYTE(v21) = v51;
    v23 = 0xFFFFF6FB40000000uLL;
    if ( !v49 )
      goto LABEL_101;
  }
  if ( v19 )
  {
    MiUnlockPageTable(v20, v19);
    LOBYTE(v21) = v51;
  }
  MiUnlockWorkingSetShared((__int64)v20, v21);
  MiUnlockVadRange(Object, v66, v70, 0LL);
  if ( (v5 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v50 = v67 & 0xFFFFFFFFFFFFF000uLL;
  *v75 = v8 - (v67 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v76 = (PVOID)v50;
  return (v5 & 1) != 0 ? 0x40000019 : 0;
}

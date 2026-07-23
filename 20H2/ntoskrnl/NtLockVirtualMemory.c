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

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r10
  NTSTATUS v11; // edi
  __int64 Address; // rdi
  _QWORD *v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _QWORD **v17; // rax
  _QWORD *i; // rdx
  unsigned __int64 v19; // r14
  char *v20; // r15
  unsigned __int8 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD **v25; // rax
  _QWORD *j; // rcx
  unsigned __int64 NextPageTable; // rax
  ULONG_PTR v28; // r14
  __int64 v29; // r13
  __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rcx
  ULONG_PTR v33; // r13
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  int v36; // r13d
  unsigned int EffectivePagePriorityThread; // edi
  char v38; // al
  BOOL v39; // r13d
  bool v40; // zf
  unsigned __int64 v41; // rax
  unsigned __int8 v42; // [rsp+40h] [rbp-118h]
  int v43; // [rsp+44h] [rbp-114h]
  NTSTATUS v44; // [rsp+44h] [rbp-114h]
  unsigned __int64 v45; // [rsp+48h] [rbp-110h]
  _QWORD *v46; // [rsp+50h] [rbp-108h]
  unsigned __int64 v47; // [rsp+50h] [rbp-108h]
  char v48; // [rsp+58h] [rbp-100h]
  unsigned __int64 v49; // [rsp+60h] [rbp-F8h]
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-E8h]
  int v52; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-D8h]
  PVOID P; // [rsp+88h] [rbp-D0h]
  int v55; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v56; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v57; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-A8h]
  __int64 v60; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v61; // [rsp+C0h] [rbp-98h]
  __int64 v62; // [rsp+C8h] [rbp-90h]
  char *v63; // [rsp+D0h] [rbp-88h]
  __int64 v64; // [rsp+D8h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  PSIZE_T v66; // [rsp+E8h] [rbp-70h]
  PVOID *v67; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v66 = RegionSize;
  v67 = BaseAddress;
  memset(&ApcState, 0, sizeof(ApcState));
  v60 = 0LL;
  v58 = 0LL;
  Object = 0LL;
  v55 = 0;
  v5 = 0;
  v48 = 0;
  v52 = 0;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v58, (__int64)&v60, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v7 = v58;
  v8 = (v58 + v60 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v56 = v8;
  v9 = v58 & 0xFFFFFFFFFFFFF000uLL;
  v49 = v58 & 0xFFFFFFFFFFFFF000uLL;
  v45 = 0LL;
  P = MiAllocatePool(
        64,
        8
      * (((((v8 - (v58 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
       + ((((unsigned __int8)((v8 - (v58 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
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
    v48 = 2;
    v52 = 2;
  }
  BugCheckParameter4 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v57 = v9;
  v62 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MiLockVadRange(Object, v9, v8, 0LL);
  v61 = v10;
  if ( !v10 )
  {
    v11 = -1073741819;
LABEL_90:
    MiUnlockVadRange(Object, v57, v10, 0LL);
    if ( (v5 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v11;
  }
  Address = (__int64)MiLocateAddress(v9);
  v46 = (_QWORD *)Address;
  v13 = (_QWORD *)Address;
  if ( v14 )
  {
    while ( (unsigned int)MiVadPagesTradable(v13) )
    {
      v16 = v13;
      v17 = (_QWORD **)v13[1];
      if ( v17 )
      {
        v13 = (_QWORD *)v13[1];
        for ( i = *v17; i; i = (_QWORD *)*i )
          v13 = i;
      }
      else
      {
        while ( 1 )
        {
          v13 = (_QWORD *)(v13[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v13 || (_QWORD *)*v13 == v16 )
            break;
          v16 = v13;
        }
      }
      if ( v15 + 1 >= v10 )
        goto LABEL_18;
    }
    v11 = -1073741747;
    goto LABEL_90;
  }
LABEL_18:
  v43 = MiVadPureReserve(Address);
  v19 = 0LL;
  v20 = (char *)Object + 1664;
  v63 = (char *)Object + 1664;
  v59 = *((_QWORD *)Object + 210);
LABEL_19:
  v42 = MiLockWorkingSetShared((__int64)v20);
  v21 = v42;
LABEL_20:
  v22 = v49;
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
        v46 = v25;
        for ( j = *v25; j; j = (_QWORD *)*j )
        {
          Address = (__int64)j;
          v46 = j;
        }
      }
      else
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v46 = (_QWORD *)Address;
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
          v46 = (_QWORD *)Address;
        }
      }
      v43 = MiVadPureReserve(Address);
    }
    BugCheckParameter2 = ((v22 >> 18) & 0x3FFFFFF8) + v23;
    if ( v19 != BugCheckParameter2 )
    {
      if ( v19 )
      {
        MiUnlockPageTable(v20, v19);
        v19 = 0LL;
        v21 = v42;
      }
      if ( v43 )
      {
        NextPageTable = MiGetNextPageTable(BugCheckParameter4, v62, 0LL, v21, 0, &v55);
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
        v28 = BugCheckParameter4;
        MiMakeSystemAddressValid(BugCheckParameter4, 0LL, (*(_DWORD *)(Address + 48) >> 12) & 0x3F, v21, 0);
        v19 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)BugCheckParameter4 & 1) == 0 )
    {
      MiUnlockPageTable(v20, v19);
      v19 = 0LL;
      BugCheckParameter2 = 0LL;
      MiUnlockWorkingSetShared((__int64)v20, v42);
      goto LABEL_19;
    }
    v64 = MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
    v29 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v64) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v49) & 0xF) == 8 )
    {
      v5 |= 1u;
      v48 = v5;
      v52 = v5;
    }
    else
    {
      if ( *((_QWORD *)v20 + 14) <= (unsigned __int64)(*(_QWORD *)(v59 + 32) + 6LL) )
      {
        v11 = -1073741663;
        goto LABEL_64;
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v29) && !(unsigned int)MiLockPageTablePage(v30, 1) )
        goto LABEL_63;
      BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(BugCheckParameter2) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL;
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2) )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v29) )
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v29 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        goto LABEL_63;
      }
      v31 = 0LL;
      if ( (*(_DWORD *)(v29 + 16) & 0x400LL) != 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v29) )
        {
          v31 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v29 + 40) >> 39) & 0x3FFLL));
          if ( !(unsigned int)MiChargeCommit(v31, 1uLL, 0) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v29 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            v11 = -1073741523;
            goto LABEL_64;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v31 + 7616), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v29 + 16) )
      {
        MiLockPageAndSetDirty(v29, 1);
      }
      if ( !(unsigned int)MiLockWsle(v20, v49) )
      {
        MiUnlockPageTableCharges(BugCheckParameter2);
        if ( (unsigned int)MI_PFN_IS_PROTO(v29) )
        {
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v29 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          if ( (*(_DWORD *)(v29 + 16) & 0x400LL) != 0 )
            MiReturnCommit(v31, 1LL);
        }
LABEL_63:
        v11 = -1073741670;
LABEL_64:
        v44 = v11;
        if ( v19 )
        {
          MiUnlockPageTable(v20, v19);
          v19 = 0LL;
        }
        if ( !v45 )
        {
LABEL_87:
          if ( v19 )
            MiUnlockPageTable(v20, v19);
          MiUnlockWorkingSetShared((__int64)v20, v42);
          v10 = v61;
          goto LABEL_90;
        }
        v32 = v45 - 1;
        v47 = v45 - 1;
        v33 = (v45 << 12) + v57 - 4096;
        BugCheckParameter2 = v33;
        v34 = v45;
        while ( 2 )
        {
          if ( _bittest64((const signed __int64 *)P, v32) == 1 )
          {
            v35 = ((v33 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v59 = v35;
            if ( v19 != v35 )
            {
              if ( v19 )
              {
                MiUnlockPageTable(v20, v19);
                v35 = v59;
              }
              v19 = v35;
              MiLockPageTable(v20, v35);
            }
            MiUnlockVa(v20, v33);
            v32 = v47;
          }
          v36 = 0;
          if ( (v32 & 0xF) != 0 )
          {
LABEL_81:
            if ( v36 == 1 )
              goto LABEL_82;
          }
          else
          {
            if ( !MiWorkingSetIsContended((__int64)v20)
              && (!v19 || !(unsigned int)MiPageTableLockIsContended((__int64)v20, v19)) )
            {
              if ( (unsigned int)MiShouldYieldProcessor() )
                v36 = 1;
              v32 = v47;
              goto LABEL_81;
            }
LABEL_82:
            if ( v19 )
            {
              MiUnlockPageTable(v20, v19);
              v19 = 0LL;
            }
            MiUnlockWorkingSetShared((__int64)v20, v42);
            MiLockWorkingSetShared((__int64)v20);
            v32 = v47;
          }
          v33 = BugCheckParameter2 - 4096;
          BugCheckParameter2 -= 4096LL;
          v47 = --v32;
          if ( !--v34 )
          {
            LOBYTE(v5) = v48;
            v11 = v44;
            goto LABEL_87;
          }
          continue;
        }
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
      MiLockPageAtDpc(v29);
      MiUpdatePfnPriority(v29, EffectivePagePriorityThread, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v45);
      Address = (__int64)v46;
    }
    ++v45;
    v38 = BugCheckParameter4 + 8;
    BugCheckParameter4 += 8LL;
    v22 = v49 + 4096;
    v49 = v22;
    v39 = 0;
    if ( v22 <= v56 && (v38 & 0x78) == 0 )
    {
      if ( MiWorkingSetIsContended((__int64)v20) || (unsigned int)MiPageTableLockIsContended((__int64)v20, v19) )
      {
LABEL_101:
        MiUnlockPageTable(v20, v19);
        MiUnlockWorkingSetShared((__int64)v20, v42);
        v19 = 0LL;
        MiLockWorkingSetShared((__int64)v20);
        v8 = v56;
        v21 = v42;
        goto LABEL_20;
      }
      v39 = MiShouldYieldProcessor() != 0;
      v22 = v49;
    }
    v40 = !v39;
    v8 = v56;
    v21 = v42;
    v23 = 0xFFFFF6FB40000000uLL;
    if ( !v40 )
      goto LABEL_101;
  }
  if ( v19 )
  {
    MiUnlockPageTable(v20, v19);
    v21 = v42;
  }
  MiUnlockWorkingSetShared((__int64)v20, v21);
  MiUnlockVadRange(Object, v57, v61, 0LL);
  if ( (v5 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v41 = v58 & 0xFFFFFFFFFFFFF000uLL;
  *v66 = v8 - (v58 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v67 = (PVOID)v41;
  return (v5 & 1) != 0 ? 0x40000019 : 0;
}

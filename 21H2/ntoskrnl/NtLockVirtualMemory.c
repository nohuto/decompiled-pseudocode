/*
 * XREFs of NtLockVirtualMemory @ 0x14025E000
 * Callers:
 *     <none>
 * Callees:
 *     MiVadPagesTradable @ 0x14023A0D0 (MiVadPagesTradable.c)
 *     MiUnlockVa @ 0x14025DAA0 (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x14025DD38 (MiUnlockPageTableCharges.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x14025ED44 (MiUpdatePfnPriority.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025EE24 (MiGetEffectivePagePriorityThread.c)
 *     MiLockWsle @ 0x14025EE50 (MiLockWsle.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     MiLockPageTablePage @ 0x1402AE6F0 (MiLockPageTablePage.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x1402C0290 (MiVadPureReserve.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x14031A7BC (MiLockPageAndSetDirty.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     MiLockPageTable @ 0x140381CBC (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x1403B6DD0 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiShouldYieldProcessor @ 0x140536C18 (MiShouldYieldProcessor.c)
 *     MiLockPageAtDpc @ 0x14054FB5C (MiLockPageAtDpc.c)
 *     MiLockUnlockCommon @ 0x1405F8920 (MiLockUnlockCommon.c)
 *     MiLockVadRange @ 0x140687890 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x140689DA0 (MiUnlockVadRange.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  int v5; // ebx
  NTSTATUS result; // eax
  __int64 v7; // r9
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r10
  NTSTATUS v12; // edi
  _QWORD *v13; // rdx
  unsigned __int64 Address; // rdi
  _QWORD *v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // r14
  char *v21; // r15
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  _QWORD **v26; // rax
  _QWORD *i; // rcx
  unsigned __int64 NextPageTable; // rax
  __int64 v29; // rdx
  ULONG_PTR v30; // r14
  __int64 v31; // rdx
  unsigned __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rcx
  ULONG_PTR v44; // r13
  unsigned __int64 v45; // rdi
  __int64 v46; // rax
  int v47; // r13d
  unsigned int EffectivePagePriorityThread; // edi
  char v49; // al
  BOOL v50; // r13d
  bool v51; // zf
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  char v54; // [rsp+40h] [rbp-118h]
  int v55; // [rsp+44h] [rbp-114h]
  NTSTATUS v56; // [rsp+44h] [rbp-114h]
  unsigned __int64 v57; // [rsp+48h] [rbp-110h]
  _QWORD *v58; // [rsp+50h] [rbp-108h]
  unsigned __int64 v59; // [rsp+50h] [rbp-108h]
  char v60; // [rsp+58h] [rbp-100h]
  unsigned __int64 v61; // [rsp+60h] [rbp-F8h]
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-E8h]
  int v64; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-D8h]
  PVOID P; // [rsp+88h] [rbp-D0h]
  int v67; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v68; // [rsp+98h] [rbp-C0h]
  unsigned __int64 v69; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+B0h] [rbp-A8h]
  __int64 v72; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v73; // [rsp+C0h] [rbp-98h]
  __int64 v74; // [rsp+C8h] [rbp-90h]
  char *v75; // [rsp+D0h] [rbp-88h]
  __int64 v76; // [rsp+D8h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-78h]
  PSIZE_T v78; // [rsp+E8h] [rbp-70h]
  PVOID *v79; // [rsp+F0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-60h] BYREF

  v78 = RegionSize;
  v79 = BaseAddress;
  memset(&ApcState, 0, sizeof(ApcState));
  v72 = 0LL;
  v70 = 0LL;
  Object = 0LL;
  v67 = 0;
  v5 = 0;
  v60 = 0;
  v64 = 0;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v70, (__int64)&v72, (__int64)&Object);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v8 = v70;
  v9 = (v70 + v72 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v68 = v9;
  v10 = v70 & 0xFFFFFFFFFFFFF000uLL;
  v61 = v70 & 0xFFFFFFFFFFFFF000uLL;
  v57 = 0LL;
  P = (PVOID)MiAllocatePool(
               64LL,
               8
             * (((((v9 - (v70 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
              + ((((unsigned __int8)((v9 - (v70 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
               1802267981LL,
               v7);
  if ( !P )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741670;
  }
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v5 = 2;
    v60 = 2;
    v64 = 2;
  }
  BugCheckParameter1 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v69 = v10;
  v74 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = MiLockVadRange(Object, v10, v9, 0LL);
  v73 = v11;
  if ( !v11 )
  {
    v12 = -1073741819;
LABEL_90:
    MiUnlockVadRange(Object, v69, v11, 0LL);
    if ( (v5 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    ExFreePoolWithTag(P, 0);
    return v12;
  }
  Address = MiLocateAddress(v10);
  v58 = (_QWORD *)Address;
  v15 = (_QWORD *)Address;
  v16 = 0LL;
  if ( v17 )
  {
    while ( (unsigned int)MiVadPagesTradable((__int64)v15) )
    {
      v13 = v15;
      v19 = (_QWORD *)v15[1];
      if ( v19 )
      {
        v15 = (_QWORD *)v15[1];
        v13 = (_QWORD *)*v19;
        if ( *v19 )
        {
          do
          {
            v15 = v13;
            v13 = (_QWORD *)*v13;
          }
          while ( v13 );
        }
      }
      else
      {
        while ( 1 )
        {
          v15 = (_QWORD *)(v15[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v15 || (_QWORD *)*v15 == v13 )
            break;
          v13 = v15;
        }
      }
      v16 = v18 + 1;
      if ( v16 >= v11 )
        goto LABEL_18;
    }
    v12 = -1073741747;
    goto LABEL_90;
  }
LABEL_18:
  v55 = MiVadPureReserve(Address, v13, v16);
  v20 = 0LL;
  v21 = (char *)Object + 1664;
  v75 = (char *)Object + 1664;
  v71 = *((_QWORD *)Object + 210);
LABEL_19:
  v54 = MiLockWorkingSetShared(v21);
  LOBYTE(v22) = v54;
LABEL_20:
  v23 = v61;
  v24 = 0xFFFFF6FB40000000uLL;
  while ( v23 <= v9 )
  {
    if ( v23 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v25 = Address;
      v26 = *(_QWORD ***)(Address + 8);
      if ( v26 )
      {
        Address = *(_QWORD *)(Address + 8);
        v58 = v26;
        for ( i = *v26; i; i = (_QWORD *)*i )
        {
          Address = (unsigned __int64)i;
          v58 = i;
        }
      }
      else
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v58 = (_QWORD *)Address;
        if ( Address )
        {
          do
          {
            if ( *(_QWORD *)Address == v25 )
              break;
            v25 = Address;
            Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( Address );
          v58 = (_QWORD *)Address;
        }
      }
      v55 = MiVadPureReserve(Address, v23, 0xFFFFF6FB40000000uLL);
    }
    BugCheckParameter2 = ((v23 >> 18) & 0x3FFFFFF8) + v24;
    if ( v20 != BugCheckParameter2 )
    {
      if ( v20 )
      {
        MiUnlockPageTable(v21, v20, v24, v22);
        v20 = 0LL;
        LOBYTE(v22) = v54;
      }
      if ( v55 )
      {
        NextPageTable = MiGetNextPageTable(BugCheckParameter1, v74, 0, v22, 0, (__int64)&v67);
        if ( NextPageTable )
          v20 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != BugCheckParameter1 )
        {
          v12 = -1073741819;
          goto LABEL_64;
        }
      }
      else
      {
        v30 = BugCheckParameter1;
        MiMakeSystemAddressValid(BugCheckParameter1, 0);
        v20 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (*(_BYTE *)BugCheckParameter1 & 1) == 0 )
    {
      MiUnlockPageTable(v21, v20, v24, v22);
      v20 = 0LL;
      BugCheckParameter2 = 0LL;
      LOBYTE(v31) = v54;
      MiUnlockWorkingSetShared(v21, v31);
      goto LABEL_19;
    }
    v76 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
    v32 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v76) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFLL, v61) & 0xF) == 8 )
    {
      v5 |= 1u;
      v60 = v5;
      v64 = v5;
    }
    else
    {
      if ( *((_QWORD *)v21 + 14) <= (unsigned __int64)(*(_QWORD *)(v71 + 32) + 6LL) )
      {
        v12 = -1073741663;
        goto LABEL_64;
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v32) && !(unsigned int)MiLockPageTablePage(v33, 1LL) )
        goto LABEL_63;
      BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(BugCheckParameter2) >> 12) & 0xFFFFFFFFFLL)
                         - 0x58000000000LL;
      if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2LL) )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v32) )
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1, v24, v22);
        goto LABEL_63;
      }
      v36 = 0LL;
      if ( (*(_DWORD *)(v32 + 16) & 0x400LL) != 0 )
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(v32) )
        {
          v36 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v32 + 40) >> 39) & 0x3FFLL));
          if ( !(unsigned int)MiChargeCommit(v36, 1LL, 0LL) )
          {
            MiUnlockPageTableCharges(BugCheckParameter2, 2, v37, v38);
            MiUnlockPageTableCharges(48 * (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1, v39, v40);
            v12 = -1073741523;
            goto LABEL_64;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v36 + 7616), 1uLL);
        }
      }
      else if ( (unsigned int)MiGetPagingFileOffset(v32 + 16, v34, v35) )
      {
        MiLockPageAndSetDirty(v32, 1LL);
      }
      if ( !(unsigned int)MiLockWsle(v21, v61) )
      {
        MiUnlockPageTableCharges(BugCheckParameter2, 2, v41, v42);
        if ( (unsigned int)MI_PFN_IS_PROTO(v32) )
        {
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1, v24, v22);
          if ( (*(_DWORD *)(v32 + 16) & 0x400LL) != 0 )
            MiReturnCommit(v36, 1LL, v24, v22);
        }
LABEL_63:
        v12 = -1073741670;
LABEL_64:
        v56 = v12;
        if ( v20 )
        {
          MiUnlockPageTable(v21, v20, v24, v22);
          v20 = 0LL;
        }
        if ( !v57 )
        {
LABEL_87:
          if ( v20 )
            MiUnlockPageTable(v21, v20, v24, v22);
          LOBYTE(v29) = v54;
          MiUnlockWorkingSetShared(v21, v29);
          v11 = v73;
          goto LABEL_90;
        }
        v43 = v57 - 1;
        v59 = v57 - 1;
        v44 = (v57 << 12) + v69 - 4096;
        BugCheckParameter2 = v44;
        v45 = v57;
        while ( 2 )
        {
          if ( _bittest64((const signed __int64 *)P, v43) == 1 )
          {
            v46 = ((v44 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v71 = v46;
            if ( v20 != v46 )
            {
              if ( v20 )
              {
                MiUnlockPageTable(v21, v20, v24, v22);
                v46 = v71;
              }
              v20 = v46;
              MiLockPageTable(v21, v46);
            }
            MiUnlockVa((__int64)v21, v44);
            v43 = v59;
          }
          v47 = 0;
          if ( (v43 & 0xF) != 0 )
          {
LABEL_81:
            if ( v47 == 1 )
              goto LABEL_82;
          }
          else
          {
            if ( !(unsigned int)MiWorkingSetIsContended(v21)
              && (!v20 || !(unsigned int)MiPageTableLockIsContended(v21, v20)) )
            {
              if ( (unsigned int)MiShouldYieldProcessor() )
                v47 = 1;
              v43 = v59;
              goto LABEL_81;
            }
LABEL_82:
            if ( v20 )
            {
              MiUnlockPageTable(v21, v20, v24, v22);
              v20 = 0LL;
            }
            LOBYTE(v29) = v54;
            MiUnlockWorkingSetShared(v21, v29);
            MiLockWorkingSetShared(v21);
            v43 = v59;
          }
          v44 = BugCheckParameter2 - 4096;
          BugCheckParameter2 -= 4096LL;
          v59 = --v43;
          if ( !--v45 )
          {
            LOBYTE(v5) = v60;
            v12 = v56;
            goto LABEL_87;
          }
          continue;
        }
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
      MiLockPageAtDpc(v32);
      MiUpdatePfnPriority(v32, EffectivePagePriorityThread, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _bittestandset64((signed __int64 *)P, v57);
      Address = (unsigned __int64)v58;
    }
    ++v57;
    v49 = BugCheckParameter1 + 8;
    BugCheckParameter1 += 8LL;
    v23 = v61 + 4096;
    v61 = v23;
    v50 = 0;
    if ( v23 <= v68 && (v49 & 0x78) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(v21) || (unsigned int)MiPageTableLockIsContended(v21, v20) )
      {
LABEL_101:
        MiUnlockPageTable(v21, v20, v24, v22);
        LOBYTE(v52) = v54;
        MiUnlockWorkingSetShared(v21, v52);
        v20 = 0LL;
        MiLockWorkingSetShared(v21);
        v9 = v68;
        LOBYTE(v22) = v54;
        goto LABEL_20;
      }
      v50 = MiShouldYieldProcessor() != 0;
      v23 = v61;
    }
    v51 = !v50;
    v9 = v68;
    LOBYTE(v22) = v54;
    v24 = 0xFFFFF6FB40000000uLL;
    if ( !v51 )
      goto LABEL_101;
  }
  if ( v20 )
  {
    MiUnlockPageTable(v21, v20, 0xFFFFF6FB40000000uLL, v22);
    LOBYTE(v22) = v54;
  }
  LOBYTE(v23) = v22;
  MiUnlockWorkingSetShared(v21, v23);
  MiUnlockVadRange(Object, v69, v73, 0LL);
  if ( (v5 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(P, 0);
  v53 = v70 & 0xFFFFFFFFFFFFF000uLL;
  *v78 = v9 - (v70 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v79 = (PVOID)v53;
  return (v5 & 1) != 0 ? 0x40000019 : 0;
}

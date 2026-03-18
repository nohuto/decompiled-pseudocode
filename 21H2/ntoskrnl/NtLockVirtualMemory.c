/*
 * XREFs of NtLockVirtualMemory @ 0x1402E5D90
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiUpdatePfnPriority @ 0x14027428C (MiUpdatePfnPriority.c)
 *     MiPageTableLockIsContended @ 0x140274C80 (MiPageTableLockIsContended.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiGetNextPageTable @ 0x14028F080 (MiGetNextPageTable.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiUnlockVa @ 0x1402E5920 (MiUnlockVa.c)
 *     MiUnlockPageTableCharges @ 0x1402E5B0C (MiUnlockPageTableCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E670C (MiGetEffectivePagePriorityThread.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     MiVadPagesTradable @ 0x14031285C (MiVadPagesTradable.c)
 *     MiSetVaAgeList @ 0x1403171A0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVadPureReserve @ 0x140319990 (MiVadPureReserve.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiLockPageTablePage @ 0x14031F940 (MiLockPageTablePage.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiLockPageAndSetDirty @ 0x14033E534 (MiLockPageAndSetDirty.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiLockUnlockCommon @ 0x1406AFE20 (MiLockUnlockCommon.c)
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x1406F7F40 (MiUnlockVadRange.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtLockVirtualMemory(ULONG_PTR a1, unsigned __int64 *a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  PVOID Pool; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r10
  unsigned __int64 Address; // r12
  _QWORD *v12; // rcx
  unsigned __int64 i; // r8
  unsigned __int64 v14; // r14
  char *v15; // r15
  int v16; // r9d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  int v20; // esi
  unsigned __int64 v21; // rsi
  ULONG_PTR v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int64 v26; // rax
  char v27; // cl
  BOOL v28; // esi
  bool v29; // zf
  __int64 v30; // r8
  _QWORD *v31; // rdx
  _QWORD **v32; // rax
  _QWORD *j; // rdx
  unsigned __int64 v34; // rsi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r12
  int v38; // r13d
  unsigned int v39; // esi
  unsigned __int64 v40; // rcx
  _QWORD **v41; // rax
  _QWORD *k; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int8 v45; // [rsp+40h] [rbp-118h]
  int v46; // [rsp+44h] [rbp-114h]
  int v47; // [rsp+44h] [rbp-114h]
  char v48; // [rsp+48h] [rbp-110h]
  unsigned __int64 v49; // [rsp+50h] [rbp-108h]
  PVOID Object; // [rsp+58h] [rbp-100h] BYREF
  int v51; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v52; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v53; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v54; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v55; // [rsp+80h] [rbp-D8h]
  unsigned __int64 v56; // [rsp+88h] [rbp-D0h]
  PVOID P; // [rsp+90h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-C0h]
  int v59; // [rsp+A0h] [rbp-B8h] BYREF
  int v60; // [rsp+A4h] [rbp-B4h] BYREF
  unsigned __int64 v61; // [rsp+A8h] [rbp-B0h]
  __int64 v62; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v64; // [rsp+C0h] [rbp-98h]
  __int64 v65; // [rsp+C8h] [rbp-90h]
  __int64 v66; // [rsp+D0h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-80h]
  char *v68; // [rsp+E0h] [rbp-78h]
  _QWORD *v69; // [rsp+E8h] [rbp-70h]
  unsigned __int64 *v70; // [rsp+F0h] [rbp-68h]
  _BYTE v71[48]; // [rsp+F8h] [rbp-60h] BYREF

  v69 = a3;
  v70 = a2;
  memset(v71, 0, sizeof(v71));
  v63 = 0LL;
  v53 = 0LL;
  Object = 0LL;
  v59 = 0;
  v4 = 0;
  v48 = 0;
  v51 = 0;
  result = MiLockUnlockCommon(a1, (__int64)&v53, (__int64)&v63, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = (v53 + v63 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v54 = v6;
  v7 = v53 & 0xFFFFFFFFFFFFF000uLL;
  v49 = v53 & 0xFFFFFFFFFFFFF000uLL;
  v56 = 0LL;
  BugCheckParameter2 = 0LL;
  Pool = MiAllocatePool(
           64,
           8
         * (((((v6 - (v53 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
          + ((((unsigned __int8)((v6 - (v53 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
           0x6B6C6D4Du);
  P = Pool;
  if ( !Pool )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return 3221225626LL;
  }
  if ( a1 != -1LL )
  {
    KiStackAttachProcess((ULONG_PTR)Object);
    v4 = 2;
    v48 = 2;
    v51 = 2;
  }
  v9 = v53;
  v55 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v61 = v7;
  v65 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MiLockVadRange(Object, v7, v6, 0LL);
  v64 = v10;
  if ( !v10 )
  {
    v39 = -1073741819;
    goto LABEL_87;
  }
  Address = MiLocateAddress(v7);
  v12 = (_QWORD *)Address;
  for ( i = 0LL; i < v10; i = v30 + 1 )
  {
    if ( !(unsigned int)MiVadPagesTradable(v12) )
    {
      v39 = -1073741747;
      goto LABEL_86;
    }
    v31 = v12;
    v32 = (_QWORD **)v12[1];
    if ( v32 )
    {
      v12 = (_QWORD *)v12[1];
      for ( j = *v32; j; j = (_QWORD *)*j )
        v12 = j;
    }
    else
    {
      while ( 1 )
      {
        v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v12 || (_QWORD *)*v12 == v31 )
          break;
        v31 = v12;
      }
    }
  }
  v46 = MiVadPureReserve(Address);
  v14 = 0LL;
  v15 = (char *)Object + 1664;
  v68 = (char *)Object + 1664;
  v66 = *((_QWORD *)Object + 210);
  LOBYTE(v16) = MiLockWorkingSetShared((__int64)Object + 1664);
  v45 = v16;
LABEL_9:
  v17 = v49;
  v18 = v54;
  v19 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v17 > v18 )
    {
      if ( v14 )
      {
        MiUnlockPageTableInternal((__int64)v15, v14);
        LOBYTE(v16) = v45;
      }
      MiUnlockWorkingSetShared((__int64)v15, v16);
      MiUnlockVadRange(Object, v61, v64, 0LL);
      if ( (v4 & 2) != 0 )
        KiUnstackDetachProcess((__int64)v71, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v34 = v9 & 0xFFFFFFFFFFFFF000uLL;
      *v69 = v54 - v34 + 4096;
      *v70 = v34;
      return (v4 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v17 >> 12 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      v40 = Address;
      v41 = *(_QWORD ***)(Address + 8);
      if ( v41 )
      {
        Address = *(_QWORD *)(Address + 8);
        for ( k = *v41; k; k = (_QWORD *)*k )
          Address = (unsigned __int64)k;
      }
      else
      {
        while ( 1 )
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Address || *(_QWORD *)Address == v40 )
            break;
          v40 = Address;
        }
      }
      v20 = MiVadPureReserve(Address);
      v46 = v20;
    }
    else
    {
      v20 = v46;
    }
    v52 = ((v17 >> 18) & 0x3FFFFFF8) + v19;
    if ( v14 == v52 )
    {
      v21 = v55;
    }
    else
    {
      if ( v14 )
      {
        MiUnlockPageTableInternal((__int64)v15, v14);
        v14 = 0LL;
        LOBYTE(v16) = v45;
      }
      v29 = v20 == 0;
      v21 = v55;
      if ( v29 )
      {
        MiMakeSystemAddressValid(v55, 0, (*(_DWORD *)(Address + 48) >> 12) & 0x7F, v16, 0);
        v14 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        NextPageTable = MiGetNextPageTable(v55, v65, 0LL, v16, 0, &v59);
        if ( NextPageTable )
          v14 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v21 )
        {
          v47 = -1073741819;
          goto LABEL_62;
        }
      }
    }
    if ( (*(_BYTE *)v21 & 1) == 0 )
    {
      MiUnlockPageTableInternal((__int64)v15, v14);
      v14 = 0LL;
      v62 = 0LL;
      MiUnlockWorkingSetShared((__int64)v15, v45);
      LOBYTE(v16) = MiLockWorkingSetShared((__int64)v15);
      v45 = v16;
      goto LABEL_37;
    }
    v62 = MI_READ_PTE_LOCK_FREE(v21);
    v22 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v62) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v49) & 0xF) == 8 )
    {
      v4 |= 1u;
      v48 = v4;
      v51 = v4;
      v26 = v56;
      goto LABEL_28;
    }
    if ( *((_QWORD *)v15 + 14) <= (unsigned __int64)(*(_QWORD *)(v66 + 32) + 6LL) )
    {
      v47 = -1073741663;
      goto LABEL_62;
    }
    if ( *(__int64 *)(v22 + 40) < 0 && !(unsigned int)MiLockPageTablePage(v22, 1LL) )
      goto LABEL_101;
    BugCheckParameter2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v52) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( !(unsigned int)MiLockPageTablePage(BugCheckParameter2, 2LL) )
      break;
    v52 = 0LL;
    if ( (*(_DWORD *)(v22 + 16) & 0x400LL) != 0 )
    {
      v24 = *(_QWORD *)(v22 + 40);
      if ( v24 < 0 )
      {
        v52 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v24 >> 43) & 0x3FF));
        if ( !(unsigned int)MiChargeCommit(v52, 1LL, 0LL) )
        {
          MiUnlockPageTableCharges(BugCheckParameter2, 2);
          MiUnlockPageTableCharges(48 * (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
          v47 = -1073741523;
          goto LABEL_62;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v52 + 17520), 1uLL);
      }
    }
    else if ( (unsigned int)MiGetPagingFileOffset(v22 + 16) )
    {
      MiLockPageAndSetDirty(v22, 1LL);
    }
    LOBYTE(v23) = 8;
    if ( !(unsigned int)MiSetVaAgeList(v15, v49, 1LL, v23) )
    {
      MiUnlockPageTableCharges(BugCheckParameter2, 2);
      v44 = *(_QWORD *)(v22 + 40);
      if ( v44 < 0 )
      {
        MiUnlockPageTableCharges(48 * (v44 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
        if ( (*(_DWORD *)(v22 + 16) & 0x400LL) != 0 )
          MiReturnCommit(v52, 1LL);
      }
      goto LABEL_101;
    }
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
    LODWORD(v52) = EffectivePagePriorityThread;
    v60 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v60);
        while ( *(__int64 *)(v22 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
      EffectivePagePriorityThread = v52;
    }
    MiUpdatePfnPriority(v22, EffectivePagePriorityThread, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v26 = v56;
    _bittestandset64((signed __int64 *)P, v56);
LABEL_28:
    v56 = v26 + 1;
    BugCheckParameter2 = v26 + 1;
    v27 = v55 + 8;
    v55 += 8LL;
    v17 = v49 + 4096;
    v49 = v17;
    v28 = 0;
    v18 = v54;
    if ( v17 > v54 || (v27 & 0x78) != 0 )
      goto LABEL_30;
    if ( (unsigned int)MiWorkingSetIsContended(v15) || (unsigned int)MiPageTableLockIsContended((__int64)v15, v14) )
    {
LABEL_31:
      MiUnlockPageTableInternal((__int64)v15, v14);
      MiUnlockWorkingSetShared((__int64)v15, v45);
      v14 = 0LL;
      MiLockWorkingSetShared((__int64)v15);
      LOBYTE(v16) = v45;
LABEL_37:
      v9 = v53;
      goto LABEL_9;
    }
    v28 = KeShouldYieldProcessor() != 0;
    v18 = v54;
    v17 = v49;
LABEL_30:
    v29 = !v28;
    v9 = v53;
    LOBYTE(v16) = v45;
    v19 = 0xFFFFF6FB40000000uLL;
    if ( !v29 )
      goto LABEL_31;
  }
  v43 = *(_QWORD *)(v22 + 40);
  if ( v43 < 0 )
    MiUnlockPageTableCharges(48 * (v43 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
LABEL_101:
  v47 = -1073741670;
LABEL_62:
  if ( v14 )
  {
    MiUnlockPageTableInternal((__int64)v15, v14);
    v14 = 0LL;
  }
  v36 = v56;
  v37 = v61 + (v56 << 12);
  while ( 2 )
  {
    if ( v36 )
    {
      --v36;
      v37 -= 4096LL;
      if ( _bittest64((const signed __int64 *)P, v36) == 1 )
      {
        if ( v14 != ((v37 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v14 )
            MiUnlockPageTableInternal((__int64)v15, v14);
          v14 = ((v37 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          MiLockPageTableInternal(v15, v14, 0LL);
        }
        MiUnlockVa((__int64)v15, v37);
      }
      v38 = 0;
      if ( (v36 & 0xF) != 0 )
        goto LABEL_70;
      if ( !(unsigned int)MiWorkingSetIsContended(v15)
        && (!v14 || !(unsigned int)MiPageTableLockIsContended((__int64)v15, v14)) )
      {
        if ( KeShouldYieldProcessor() )
          v38 = 1;
LABEL_70:
        if ( !v38 )
          continue;
      }
      if ( v14 )
      {
        MiUnlockPageTableInternal((__int64)v15, v14);
        v14 = 0LL;
      }
      MiUnlockWorkingSetShared((__int64)v15, v45);
      MiLockWorkingSetShared((__int64)v15);
      continue;
    }
    break;
  }
  LOBYTE(v4) = v48;
  v39 = v47;
  if ( v14 )
    MiUnlockPageTableInternal((__int64)v15, v14);
  MiUnlockWorkingSetShared((__int64)v15, v45);
  v10 = v64;
LABEL_86:
  Pool = P;
LABEL_87:
  MiUnlockVadRange(Object, v61, v10, 0LL);
  if ( (v4 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v71, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(Pool, 0);
  return v39;
}

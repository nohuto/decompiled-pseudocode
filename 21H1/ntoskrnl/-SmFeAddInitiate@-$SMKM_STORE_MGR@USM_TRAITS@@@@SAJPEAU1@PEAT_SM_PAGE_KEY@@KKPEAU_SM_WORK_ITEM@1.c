/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14023CC0C
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14023AF48 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14023BD00 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14023B284 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14023B5F8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14023B6A8 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14023D0B0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14023D27C (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14023DA28 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
        __int64 a1,
        unsigned int *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int16 v9; // si
  unsigned int v10; // ebx
  int v11; // r14d
  ULONG_PTR v12; // rsi
  int v13; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v16; // r15d
  __int64 v17; // rcx
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r12d
  int v23; // eax
  __int64 v24; // r9
  struct _KTHREAD *v25; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v27; // r14
  __int64 v28; // r8
  __int64 v29; // rdx
  bool v30; // zf
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  $C774EFD68449142D8271B1EC1EB7FB26 *v37; // rcx
  __int64 v38; // rcx
  struct _KTHREAD *v39; // rax
  struct _KTHREAD *v40; // rdi
  __int64 v41; // rdx
  unsigned __int8 v42; // r12
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  NTSTATUS v50; // eax
  struct _KTHREAD *v51; // rcx
  NTSTATUS v52; // edi
  ULONG_PTR v53; // rcx
  unsigned int v54; // ecx
  unsigned int v55; // [rsp+30h] [rbp-D0h] BYREF
  int v56; // [rsp+34h] [rbp-CCh]
  int v57; // [rsp+38h] [rbp-C8h]
  int v58; // [rsp+3Ch] [rbp-C4h]
  int v59; // [rsp+40h] [rbp-C0h]
  int v60; // [rsp+44h] [rbp-BCh]
  __int64 v61; // [rsp+48h] [rbp-B8h] BYREF
  int v62; // [rsp+50h] [rbp-B0h]
  unsigned int v63; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v65; // [rsp+68h] [rbp-98h] BYREF
  __int16 Object; // [rsp+78h] [rbp-88h] BYREF
  char v67; // [rsp+7Ah] [rbp-86h]
  int v68; // [rsp+7Ch] [rbp-84h]
  _QWORD v69[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+A0h] [rbp-60h]
  _QWORD v73[3]; // [rsp+B0h] [rbp-50h] BYREF
  int v74; // [rsp+C8h] [rbp-38h]
  int v75; // [rsp+CCh] [rbp-34h]
  __int64 v76; // [rsp+D0h] [rbp-30h]
  _BYTE v77[136]; // [rsp+D8h] [rbp-28h] BYREF

  v72 = a5;
  v58 = a3;
  v9 = a4;
  v70 = a2;
  v71 = a6;
  v63 = a4;
  memset(v77, 0, 0x80uLL);
  v10 = *a2;
  v61 = 0x1000000000000LL;
  v11 = a7 & 2;
  WORD2(v61) = v9;
  v55 = 0;
  v12 = a1 + 440;
  Timeout.QuadPart = 0LL;
  v13 = 0;
  v73[1] = 0LL;
  v73[2] = 0LL;
  v76 = 0LL;
  v73[0] = v77;
  v74 = 0;
  v75 = 8;
  v62 = v11;
  if ( (a7 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 440, 0LL);
    v55 = 2;
  }
  else if ( (a7 & 4) != 0 )
  {
    if ( !StLockTryAcquireExclusive((struct VLOCK *)(a1 + 440), &v55) )
      return 3221225557LL;
  }
  else
  {
    v39 = KeGetCurrentThread();
    --v39->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
    v55 = 1;
  }
  v16 = -1073740682;
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v10,
      v73);
    v65 = 0LL;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v17,
      (__int64)&v65,
      (__int64)v73);
    if ( !(_QWORD)v65 )
      break;
    v20 = *((_QWORD *)&v65 + 1) + 8LL;
    v21 = (unsigned __int16)*(_DWORD *)v65 + 2LL;
    *((_QWORD *)&v65 + 1) = v20;
    if ( v20 >= (__int64)v65 + 8 * v21 )
    {
      v38 = *(_QWORD *)(v65 + 8);
      if ( v38 )
      {
        *(_QWORD *)&v65 = *(_QWORD *)(v65 + 8);
        *((_QWORD *)&v65 + 1) = v38 + 16;
      }
      v20 = (v38 + 16) & -(__int64)(v38 != 0);
    }
    if ( !v20 || v18 < *(_DWORD *)v20 && v19 < *(_DWORD *)v20 )
      break;
    if ( (*(_BYTE *)(v20 + 7) & 1) != 0 )
    {
      v16 = -1073740747;
      goto LABEL_38;
    }
    if ( v13 || (a7 & 1) == 0 )
      goto LABEL_38;
    Object = 0;
    v69[1] = v69;
    v69[0] = v69;
    *(_QWORD *)(a1 + 1656) = &Object;
    v67 = 6;
    v68 = 0;
    *(_DWORD *)(a1 + 1648) = v10;
    if ( v11 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 440);
      KeAbPostRelease(a1 + 440);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 440);
      v56 = 0;
      v40 = KeGetCurrentThread();
      v41 = (unsigned int)MiGetSystemRegionType(a1 + 440) == 1
          ? (unsigned int)MmGetSessionIdEx(v40->ApcState.Process)
          : 0xFFFFFFFFLL;
      --v40->SpecialApcDisable;
      v42 = ++v40->AbAllocationRegionCount;
      LODWORD(v43) = ((char)v40->AbEntrySummary | (char)v40->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v30 = !_BitScanReverse((unsigned int *)&v44, v43);
        v57 = v44;
        if ( v30 )
          goto LABEL_66;
        v45 = (__int64)&v40->LockEntries[v44];
        v43 = ~(1 << v44) & (unsigned int)v43;
        if ( (*(_BYTE *)(v45 + 26) & 1) != 0
          && (*(_DWORD *)(v45 + 32) & 1) == 0
          && (*(_QWORD *)(v45 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v45 + 40) == (_DWORD)v41 )
        {
          *(_BYTE *)(v45 + 26) &= ~1u;
          if ( *(_QWORD *)(v45 + 32) )
            break;
        }
      }
      if ( !v45 )
      {
LABEL_66:
        if ( (*((_DWORD *)&v40->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v40, a1 + 440, (unsigned int)v41, 0LL);
        goto LABEL_78;
      }
      *(_BYTE *)(v45 + 32) |= 2u;
      if ( *(__int64 *)(v45 + 32) < 0 )
        KiAbEntryRemoveFromTree(v45, v41, v43);
      v56 = 0;
      v56 = *(_DWORD *)(v45 + 88) & 0x1FFFF;
      *(_DWORD *)(v45 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v45 + 25) &= ~1u;
      *(_QWORD *)(v45 + 32) = 0LL;
      v46 = (signed __int64)(v45 - (unsigned __int64)v40->LockEntries) / 96;
      if ( v42 == 1 )
        v40->AbEntrySummary |= 1 << v46;
      else
        _InterlockedOr8((volatile signed __int8 *)&v40->AbOrphanedEntrySummary, 1 << v46);
LABEL_78:
      --v40->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v40);
      v30 = v40->SpecialApcDisable++ == -1;
      if ( v30 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
        KiCheckForKernelApcDelivery(1LL, v47, v48, v49);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      v11 = v62;
    }
    Timeout.QuadPart = -2500000LL;
    v50 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    v51 = KeGetCurrentThread();
    v52 = v50;
    --v51->SpecialApcDisable;
    v53 = a1 + 440;
    if ( v11 )
    {
      ExAcquirePushLockSharedEx(v53, 0LL);
      v54 = 2;
    }
    else
    {
      ExAcquirePushLockExclusiveEx(v53, 0LL);
      v54 = 1;
    }
    v55 = v54;
    *(_QWORD *)(a1 + 1656) = 0LL;
    if ( v52 )
      goto LABEL_38;
    v13 = 1;
  }
  if ( v11 )
  {
    v16 = 0;
  }
  else
  {
    v22 = 0;
    while ( 1 )
    {
      LODWORD(v61) = v10;
      v23 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              a1 + 448,
              v10,
              v73);
      v16 = v23;
      if ( v23 == -1073741275 )
      {
        v16 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
                (__int64 *)(a1 + 448),
                (__int64)v73,
                &v61);
      }
      else if ( v23 >= 0 )
      {
        v16 = -1073741484;
      }
      if ( v16 < 0 )
        break;
      if ( ++v22 == v58 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v71, a1, v63, v72);
        v16 = 0;
        goto LABEL_17;
      }
      ++v10;
    }
    if ( v22 )
      SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, v70, v22, v24, 2);
  }
LABEL_38:
  if ( v11 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 440);
    KeAbPostRelease(a1 + 440);
  }
  else
  {
LABEL_17:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 440);
    v60 = 0;
    v25 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v25->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v25->SpecialApcDisable;
    v27 = ++v25->AbAllocationRegionCount;
    v28 = v12 & 0x7FFFFFFFFFFFFFFCLL;
    LODWORD(v29) = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v30 = !_BitScanReverse((unsigned int *)&v31, v29);
      v59 = v31;
      if ( v30 )
        break;
      v32 = (__int64)&v25->LockEntries[v31];
      v29 = ~(1 << v31) & (unsigned int)v29;
      if ( (*(_BYTE *)(v32 + 26) & 1) != 0
        && (*(_DWORD *)(v32 + 32) & 1) == 0
        && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v28
        && *(_DWORD *)(v32 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v32 + 26) &= ~1u;
        if ( *(_QWORD *)(v32 + 32) )
        {
          if ( v32 )
          {
            *(_BYTE *)(v32 + 32) |= 2u;
            if ( *(__int64 *)(v32 + 32) < 0 )
              KiAbEntryRemoveFromTree(v32, v29, v28);
            v60 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
            *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v32 + 25) &= ~1u;
            *(_QWORD *)(v32 + 32) = 0LL;
            v33 = (signed __int64)(v32 - (unsigned __int64)v25->LockEntries) / 96;
            if ( v27 == 1 )
              v25->AbEntrySummary |= 1 << v33;
            else
              _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v33);
            goto LABEL_33;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v25, v12, SessionId, 0LL);
LABEL_33:
    --v25->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v25);
    v30 = v25->SpecialApcDisable++ == -1;
    if ( v30 )
    {
      v37 = &v25->152;
      if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v37->ApcState.ApcListHead[0].Flink != v37 )
        KiCheckForKernelApcDelivery(v37, v34, v35, v36);
    }
  }
  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return (unsigned int)v16;
}

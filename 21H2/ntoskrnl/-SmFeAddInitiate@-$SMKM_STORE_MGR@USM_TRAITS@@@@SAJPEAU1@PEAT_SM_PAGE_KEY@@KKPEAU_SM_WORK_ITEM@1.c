/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140289A38
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140288EC4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140289874 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140289280 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1402895F4 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140289624 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140289EDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14028A0AC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14028A5B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
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
  unsigned int v28; // edx
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  $C459BD0D405E8E46662177FB3D0A143F *v36; // rcx
  __int64 v37; // rcx
  struct _KTHREAD *v38; // rax
  struct _KTHREAD *v39; // rdi
  unsigned int v40; // edx
  unsigned __int8 v41; // r12
  unsigned int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  NTSTATUS v49; // eax
  struct _KTHREAD *v50; // rcx
  NTSTATUS v51; // edi
  ULONG_PTR v52; // rcx
  unsigned int v53; // ecx
  unsigned int v54; // [rsp+30h] [rbp-D0h] BYREF
  int v55; // [rsp+34h] [rbp-CCh]
  int v56; // [rsp+38h] [rbp-C8h]
  int v57; // [rsp+3Ch] [rbp-C4h]
  int v58; // [rsp+40h] [rbp-C0h]
  int v59; // [rsp+44h] [rbp-BCh]
  __int64 v60; // [rsp+48h] [rbp-B8h] BYREF
  int v61; // [rsp+50h] [rbp-B0h]
  unsigned int v62; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v64; // [rsp+68h] [rbp-98h] BYREF
  __int16 Object; // [rsp+78h] [rbp-88h] BYREF
  char v66; // [rsp+7Ah] [rbp-86h]
  int v67; // [rsp+7Ch] [rbp-84h]
  _QWORD v68[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h]
  __int64 v71; // [rsp+A0h] [rbp-60h]
  _QWORD v72[3]; // [rsp+B0h] [rbp-50h] BYREF
  int v73; // [rsp+C8h] [rbp-38h]
  int v74; // [rsp+CCh] [rbp-34h]
  __int64 v75; // [rsp+D0h] [rbp-30h]
  _BYTE v76[136]; // [rsp+D8h] [rbp-28h] BYREF

  v71 = a5;
  v57 = a3;
  v9 = a4;
  v69 = a2;
  v70 = a6;
  v62 = a4;
  memset(v76, 0, 0x80uLL);
  v10 = *a2;
  v60 = 0x1000000000000LL;
  v11 = a7 & 2;
  WORD2(v60) = v9;
  v54 = 0;
  v12 = a1 + 440;
  Timeout.QuadPart = 0LL;
  v13 = 0;
  v72[1] = 0LL;
  v72[2] = 0LL;
  v75 = 0LL;
  v72[0] = v76;
  v73 = 0;
  v74 = 8;
  v61 = v11;
  if ( (a7 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 440, 0LL);
    v54 = 2;
  }
  else if ( (a7 & 4) != 0 )
  {
    if ( !StLockTryAcquireExclusive(a1 + 440, &v54) )
      return 3221225557LL;
  }
  else
  {
    v38 = KeGetCurrentThread();
    --v38->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
    v54 = 1;
  }
  v16 = -1073740682;
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v10,
      v72);
    v64 = 0LL;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v17,
      (__int64)&v64,
      (__int64)v72);
    if ( !(_QWORD)v64 )
      break;
    v20 = *((_QWORD *)&v64 + 1) + 8LL;
    v21 = (unsigned __int16)*(_DWORD *)v64 + 2LL;
    *((_QWORD *)&v64 + 1) = v20;
    if ( v20 >= (__int64)v64 + 8 * v21 )
    {
      v37 = *(_QWORD *)(v64 + 8);
      if ( v37 )
      {
        *(_QWORD *)&v64 = *(_QWORD *)(v64 + 8);
        *((_QWORD *)&v64 + 1) = v37 + 16;
      }
      v20 = (v37 + 16) & -(__int64)(v37 != 0);
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
    v68[1] = v68;
    v68[0] = v68;
    *(_QWORD *)(a1 + 1656) = &Object;
    v66 = 6;
    v67 = 0;
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
      v55 = 0;
      v39 = KeGetCurrentThread();
      v40 = (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 ? MmGetSessionIdEx(v39->ApcState.Process) : -1;
      --v39->SpecialApcDisable;
      v41 = ++v39->AbAllocationRegionCount;
      v42 = ((char)v39->AbEntrySummary | (char)v39->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v29 = !_BitScanReverse((unsigned int *)&v43, v42);
        v56 = v43;
        if ( v29 )
          goto LABEL_66;
        v44 = (__int64)&v39->LockEntries[v43];
        v42 &= ~(1 << v43);
        if ( (*(_BYTE *)(v44 + 26) & 1) != 0
          && (*(_DWORD *)(v44 + 32) & 1) == 0
          && (*(_QWORD *)(v44 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v44 + 40) == v40 )
        {
          *(_BYTE *)(v44 + 26) &= ~1u;
          if ( *(_QWORD *)(v44 + 32) )
            break;
        }
      }
      if ( !v44 )
      {
LABEL_66:
        if ( (*((_DWORD *)&v39->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v39, a1 + 440, v40, 0LL);
        goto LABEL_78;
      }
      *(_BYTE *)(v44 + 32) |= 2u;
      if ( *(__int64 *)(v44 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v44);
      v55 = 0;
      v55 = *(_DWORD *)(v44 + 88) & 0x1FFFF;
      *(_DWORD *)(v44 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v44 + 25) &= ~1u;
      *(_QWORD *)(v44 + 32) = 0LL;
      v45 = (signed __int64)(v44 - (unsigned __int64)v39->LockEntries) / 96;
      if ( v41 == 1 )
        v39->AbEntrySummary |= 1 << v45;
      else
        _InterlockedOr8((volatile signed __int8 *)&v39->AbOrphanedEntrySummary, 1 << v45);
LABEL_78:
      --v39->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v39);
      v29 = v39->SpecialApcDisable++ == -1;
      if ( v29 && ($C459BD0D405E8E46662177FB3D0A143F *)v39->ApcState.ApcListHead[0].Flink != &v39->152 )
        KiCheckForKernelApcDelivery(1LL, v46, v47, v48);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      v11 = v61;
    }
    Timeout.QuadPart = -2500000LL;
    v49 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    v50 = KeGetCurrentThread();
    v51 = v49;
    --v50->SpecialApcDisable;
    v52 = a1 + 440;
    if ( v11 )
    {
      ExAcquirePushLockSharedEx(v52, 0LL);
      v53 = 2;
    }
    else
    {
      ExAcquirePushLockExclusiveEx(v52, 0LL);
      v53 = 1;
    }
    v54 = v53;
    *(_QWORD *)(a1 + 1656) = 0LL;
    if ( v51 )
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
      LODWORD(v60) = v10;
      v23 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              a1 + 448,
              v10,
              v72);
      v16 = v23;
      if ( v23 == -1073741275 )
      {
        v16 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
                (__int64 *)(a1 + 448),
                (__int64)v72,
                &v60);
      }
      else if ( v23 >= 0 )
      {
        v16 = -1073741484;
      }
      if ( v16 < 0 )
        break;
      if ( ++v22 == v57 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v70, a1, v62, v71);
        v16 = 0;
        goto LABEL_17;
      }
      ++v10;
    }
    if ( v22 )
      SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, v69, v22, v24, 2);
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
    v59 = 0;
    v25 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v25->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v25->SpecialApcDisable;
    v27 = ++v25->AbAllocationRegionCount;
    v28 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v29 = !_BitScanReverse((unsigned int *)&v30, v28);
      v58 = v30;
      if ( v29 )
        break;
      v31 = (__int64)&v25->LockEntries[v30];
      v28 &= ~(1 << v30);
      if ( (*(_BYTE *)(v31 + 26) & 1) != 0
        && (*(_DWORD *)(v31 + 32) & 1) == 0
        && (*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v31 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v31 + 26) &= ~1u;
        if ( *(_QWORD *)(v31 + 32) )
        {
          if ( v31 )
          {
            *(_BYTE *)(v31 + 32) |= 2u;
            if ( *(__int64 *)(v31 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v31);
            v59 = *(_DWORD *)(v31 + 88) & 0x1FFFF;
            *(_DWORD *)(v31 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v31 + 25) &= ~1u;
            *(_QWORD *)(v31 + 32) = 0LL;
            v32 = (signed __int64)(v31 - (unsigned __int64)v25->LockEntries) / 96;
            if ( v27 == 1 )
              v25->AbEntrySummary |= 1 << v32;
            else
              _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v32);
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
    v29 = v25->SpecialApcDisable++ == -1;
    if ( v29 )
    {
      v36 = &v25->152;
      if ( ($C459BD0D405E8E46662177FB3D0A143F *)v36->ApcState.ApcListHead[0].Flink != v36 )
        KiCheckForKernelApcDelivery(v36, v33, v34, v35);
    }
  }
  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return (unsigned int)v16;
}

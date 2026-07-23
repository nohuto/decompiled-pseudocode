/*
 * XREFs of ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1402921AC
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140291F80 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140289EDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x140292454 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(__int64 a1, unsigned int *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ecx
  unsigned int updated; // r14d
  struct _KTHREAD *v10; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v12; // si
  unsigned int v13; // edx
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG_PTR v23[3]; // [rsp+40h] [rbp-99h] BYREF
  int v24; // [rsp+58h] [rbp-81h]
  int v25; // [rsp+5Ch] [rbp-7Dh]
  __int64 v26; // [rsp+60h] [rbp-79h]
  _BYTE v27[136]; // [rsp+68h] [rbp-71h] BYREF

  memset(v27, 0, 0x80uLL);
  v23[1] = 0LL;
  v23[2] = 0LL;
  v26 = 0LL;
  v24 = 0;
  v23[0] = (ULONG_PTR)v27;
  v25 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D23B78, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64)&unk_140D23B80,
    *a2,
    (__int64)v23);
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(v8, (_DWORD)a2, a3, a4, (__int64)v23);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D23B78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D23B78);
  v10 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&qword_140D23B78) == 1 )
    SessionId = MmGetSessionIdEx(v10->ApcState.Process);
  else
    SessionId = -1;
  --v10->SpecialApcDisable;
  v12 = ++v10->AbAllocationRegionCount;
  v13 = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v13);
    if ( v14 )
      break;
    v16 = (__int64)&v10->LockEntries[v15];
    v13 &= ~(1 << v15);
    if ( (*(_BYTE *)(v16 + 26) & 1) != 0
      && (*(_DWORD *)(v16 + 32) & 1) == 0
      && (*(_QWORD *)(v16 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140D23B78 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v16 + 40) == SessionId )
    {
      *(_BYTE *)(v16 + 26) &= ~1u;
      if ( *(_QWORD *)(v16 + 32) )
      {
        if ( v16 )
        {
          *(_BYTE *)(v16 + 32) |= 2u;
          if ( *(__int64 *)(v16 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v16);
          *(_DWORD *)(v16 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v16 + 25) &= ~1u;
          *(_QWORD *)(v16 + 32) = 0LL;
          v17 = (signed __int64)(v16 - (unsigned __int64)v10->LockEntries) / 96;
          if ( v12 == 1 )
            v10->AbEntrySummary |= 1 << v17;
          else
            _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v17);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v10, (ULONG_PTR)&qword_140D23B78, SessionId, 0LL);
LABEL_17:
  --v10->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v10);
  v14 = v10->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery(v19, v18, v20, v21);
  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return updated;
}

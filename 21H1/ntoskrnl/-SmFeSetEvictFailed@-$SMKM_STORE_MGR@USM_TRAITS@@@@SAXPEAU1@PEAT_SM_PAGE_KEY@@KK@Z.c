/*
 * XREFs of ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405933D0
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140309B20 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14023D0B0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // esi
  __m128i *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct _KTHREAD *v15; // rbx
  unsigned __int8 v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _DWORD *v25; // r9
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v29; // [rsp+40h] [rbp-C0h]
  _BYTE *v30; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v31[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+6Ch] [rbp-94h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  _BYTE v35[136]; // [rsp+78h] [rbp-88h] BYREF

  v3 = *a2;
  memset(v35, 0, 0x80uLL);
  v31[0] = 0LL;
  v31[1] = 0LL;
  v5 = 0;
  v34 = 0LL;
  v32 = 0;
  v30 = v35;
  v33 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D23B78, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64)&unk_140D23B80,
    v3,
    (__int64)&v30);
  SessionId = -1;
  if ( v32 == -1 || !v32 )
    v8 = (__m128i *)v31;
  else
    v8 = (__m128i *)&v30[16 * (v32 - 1)];
  v9 = *v8;
  v28 = v8->m128i_i64[0];
  v10 = v28;
  v11 = _mm_srli_si128(v9, 8).m128i_u64[0] - 8;
  v29 = v11;
  do
  {
    if ( v10 )
    {
      v11 += 8LL;
      v12 = v11;
      v13 = (unsigned __int16)*(_DWORD *)v10 + 2LL;
      v29 = v11;
      if ( v11 >= v10 + 8 * v13 )
      {
        v14 = *(_QWORD *)(v10 + 8);
        if ( v14 )
        {
          v11 = v14 + 16;
          v10 = *(_QWORD *)(v10 + 8);
          v29 = v14 + 16;
        }
        v12 = (v14 + 16) & -(__int64)(v14 != 0);
      }
    }
    else
    {
      v12 = 0LL;
    }
    *(_BYTE *)(v12 + 7) |= 1u;
    ++v5;
    *(_BYTE *)(v12 + 6) = 3;
  }
  while ( v5 != a3 );
  v28 = v10;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D23B78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D23B78);
  v27 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140D23B78) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  --v15->SpecialApcDisable;
  v16 = ++v15->AbAllocationRegionCount;
  v17 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v19 = !_BitScanReverse((unsigned int *)&v20, v17);
    if ( v19 )
      goto LABEL_24;
    v18 = (__int64)&v15->LockEntries[v20];
    v17 &= ~(1 << v20);
    if ( (*(_BYTE *)(v18 + 26) & 1) != 0
      && (*(_DWORD *)(v18 + 32) & 1) == 0
      && (*(_QWORD *)(v18 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140D23B78 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v18 + 40) == SessionId )
    {
      *(_BYTE *)(v18 + 26) &= ~1u;
      if ( *(_QWORD *)(v18 + 32) )
        break;
    }
  }
  if ( !v18 )
  {
LABEL_24:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&qword_140D23B78, SessionId, 0LL);
    goto LABEL_31;
  }
  *(_BYTE *)(v18 + 32) |= 2u;
  if ( *(__int64 *)(v18 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v18);
  v27 = *(_DWORD *)(v18 + 88) & 0x1FFFF;
  *(_DWORD *)(v18 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v18 + 25) &= ~1u;
  *(_QWORD *)(v18 + 32) = 0LL;
  v21 = (signed __int64)(v18 - (unsigned __int64)v15->LockEntries) / 96;
  if ( v16 == 1 )
    v15->AbEntrySummary |= 1 << v21;
  else
    _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v21);
LABEL_31:
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, (__int64)&qword_140D23B78, &v27);
  v19 = v15->SpecialApcDisable++ == -1;
  if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery(v23, v22, v24, v25);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v22, v24, (__int64)v25);
}

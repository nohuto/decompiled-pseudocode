/*
 * XREFs of ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140598F90
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1402E0C30 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402D8B8C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 */

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(__int64 a1, unsigned int *a2, int a3)
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
  __int64 v16; // r9
  unsigned __int8 AbAllocationRegionCount; // r14
  unsigned int v18; // edx
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v27; // [rsp+40h] [rbp-C0h]
  _BYTE *v28; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v29[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+68h] [rbp-98h]
  int v31; // [rsp+6Ch] [rbp-94h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  _BYTE v33[136]; // [rsp+78h] [rbp-88h] BYREF

  v3 = *a2;
  memset(v33, 0, 0x80uLL);
  v29[0] = 0LL;
  v29[1] = 0LL;
  v5 = 0;
  v32 = 0LL;
  v30 = 0;
  v28 = v33;
  v31 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D23B78, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64)&unk_140D23B80,
    v3,
    (__int64)&v28);
  SessionId = -1;
  if ( v30 == -1 || !v30 )
    v8 = (__m128i *)v29;
  else
    v8 = (__m128i *)&v28[16 * (v30 - 1)];
  v9 = *v8;
  v26 = v8->m128i_i64[0];
  v10 = v26;
  v11 = _mm_srli_si128(v9, 8).m128i_u64[0] - 8;
  v27 = v11;
  do
  {
    if ( v10 )
    {
      v11 += 8LL;
      v12 = v11;
      v13 = (unsigned __int16)*(_DWORD *)v10 + 2LL;
      v27 = v11;
      if ( v11 >= v10 + 8 * v13 )
      {
        v14 = *(_QWORD *)(v10 + 8);
        if ( v14 )
        {
          v11 = v14 + 16;
          v10 = *(_QWORD *)(v10 + 8);
          v27 = v14 + 16;
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
  v26 = v10;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D23B78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D23B78);
  v25 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140D23B78) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  --v15->SpecialApcDisable;
  ++v15->AbAllocationRegionCount;
  v16 = 0x7FFFFFFFFFFFFFFCLL;
  AbAllocationRegionCount = v15->AbAllocationRegionCount;
  v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v21, v18);
    if ( v20 )
      goto LABEL_24;
    v19 = (__int64)&v15->LockEntries[v21];
    v18 &= ~(1 << v21);
    if ( (*(_BYTE *)(v19 + 26) & 1) != 0
      && (*(_DWORD *)(v19 + 32) & 1) == 0
      && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140D23B78 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v19 + 40) == SessionId )
    {
      *(_BYTE *)(v19 + 26) &= ~1u;
      if ( *(_QWORD *)(v19 + 32) )
        break;
    }
  }
  if ( !v19 )
  {
LABEL_24:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&qword_140D23B78, SessionId, 0LL);
    goto LABEL_31;
  }
  *(_BYTE *)(v19 + 32) |= 2u;
  if ( *(__int64 *)(v19 + 32) < 0 )
    KiAbEntryRemoveFromTree(v19);
  v25 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
  *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v19 + 25) &= ~1u;
  *(_QWORD *)(v19 + 32) = 0LL;
  v22 = (signed __int64)(v19 - (unsigned __int64)v15->LockEntries) / 96;
  if ( AbAllocationRegionCount == 1 )
    v15->AbEntrySummary |= 1 << v22;
  else
    _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v22);
LABEL_31:
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, (__int64)&qword_140D23B78, (__int64)&v25, (_DWORD *)v16);
  v20 = v15->SpecialApcDisable++ == -1;
  if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery(v23);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}

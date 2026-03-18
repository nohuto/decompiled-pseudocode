/*
 * XREFs of ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140379C88
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037D8B8 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x140379EC8 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037CCE8 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(__int64 a1, unsigned int *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ecx
  unsigned int updated; // esi
  struct _KTHREAD *v10; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v13; // edx
  int v14; // r9d
  struct _KTHREAD *v15; // rax
  bool v16; // zf
  ULONG_PTR v18[3]; // [rsp+30h] [rbp-E8h] BYREF
  int v19; // [rsp+48h] [rbp-D0h]
  int v20; // [rsp+4Ch] [rbp-CCh]
  __int64 v21; // [rsp+50h] [rbp-C8h]
  _BYTE v22[136]; // [rsp+58h] [rbp-C0h] BYREF

  memset(v22, 0, 0x80uLL);
  v18[1] = 0LL;
  v18[2] = 0LL;
  v21 = 0LL;
  v19 = 0;
  v18[0] = (ULONG_PTR)v22;
  v20 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D31BB8, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    &unk_140D31BC0,
    *a2,
    v18);
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(v8, (_DWORD)a2, a3, a4, (__int64)v18);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D31BB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D31BB8);
  v10 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140D31BB8 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (__int64)&v10[1].Process;
  v13 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140D31BB8 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v13;
    p_Process += 96LL;
    if ( v13 >= 6 )
      goto LABEL_20;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v14 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v10->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v14 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v10, (__int64)&qword_140D31BB8, v14);
    goto LABEL_15;
  }
LABEL_20:
  if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v10, (ULONG_PTR)&qword_140D31BB8, SessionId, 0LL);
  _enable();
LABEL_15:
  v15 = KeGetCurrentThread();
  v16 = v15->SpecialApcDisable++ == -1;
  if ( v16 && ($CEA84C04E3712D858E5667A507841A2A *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery();
  return updated;
}

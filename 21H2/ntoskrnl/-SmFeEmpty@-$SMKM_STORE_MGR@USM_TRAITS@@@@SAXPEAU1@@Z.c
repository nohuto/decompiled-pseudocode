/*
 * XREFs of ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405F6C04
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140236EC0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1405F64CC (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 */

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEmpty(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rsi
  char *v4; // rdx
  struct _KTHREAD *v5; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v8; // edx
  int v9; // r9d
  struct _KTHREAD *v10; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v4 = *(char **)(a1 + 448);
  if ( v4 )
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFree(
      a1 + 448,
      v4);
  *(_OWORD *)(a1 + 448) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v5 = KeGetCurrentThread();
  if ( v3 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  _disable();
  p_Process = (__int64)&v5[1].Process;
  v8 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v8;
    p_Process += 96LL;
    if ( v8 >= 6 )
      goto LABEL_14;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_14:
    if ( (*((_DWORD *)&v5->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, v3, SessionId, 0LL);
    _enable();
    goto LABEL_22;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v9 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v5->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v9 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v5, v3, v9);
LABEL_22:
  v10 = KeGetCurrentThread();
  if ( v10->SpecialApcDisable++ == -1 )
  {
    v10 = (struct _KTHREAD *)((char *)v10 + 152);
    if ( *(struct _KTHREAD **)&v10->Header.Lock != v10 )
      LOBYTE(v10) = KiCheckForKernelApcDelivery();
  }
  return (char)v10;
}

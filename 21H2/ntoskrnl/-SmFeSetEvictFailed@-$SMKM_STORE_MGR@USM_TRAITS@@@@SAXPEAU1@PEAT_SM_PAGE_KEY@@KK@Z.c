/*
 * XREFs of ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405F6DBC
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037D8B8 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037CCE8 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // r14d
  __m128i *v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  struct _KTHREAD *v13; // rdi
  __int64 p_Process; // rbx
  unsigned int v15; // ecx
  int v16; // r9d
  struct _KTHREAD *v17; // rax
  _BYTE *v20; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-81h] BYREF
  int v22; // [rsp+58h] [rbp-71h]
  int v23; // [rsp+5Ch] [rbp-6Dh]
  __int64 v24; // [rsp+60h] [rbp-69h]
  _BYTE v25[136]; // [rsp+68h] [rbp-61h] BYREF

  v3 = *a2;
  memset(v25, 0, 0x80uLL);
  v21[0] = 0LL;
  v21[1] = 0LL;
  v5 = 0;
  v24 = 0LL;
  v22 = 0;
  v20 = v25;
  v23 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D31BB8, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    qword_140D31BC0,
    v3,
    (__int64)&v20);
  SessionId = -1;
  if ( v22 == -1 || !v22 )
    v8 = (__m128i *)v21;
  else
    v8 = (__m128i *)&v20[16 * (v22 - 1)];
  v9 = v8->m128i_i64[0];
  v10 = _mm_srli_si128(*v8, 8).m128i_u64[0] - 8;
  do
  {
    if ( v9 )
    {
      v10 += 8LL;
      v11 = v10;
      if ( v10 >= v9 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v9 + 2) )
      {
        v12 = *(_QWORD *)(v9 + 8);
        if ( v12 )
        {
          v9 = *(_QWORD *)(v9 + 8);
          v10 = v12 + 16;
        }
        v11 = (v12 + 16) & ((unsigned __int128)-(__int128)v12 >> 64);
      }
    }
    else
    {
      v11 = 0LL;
    }
    *(_BYTE *)(v11 + 7) |= 1u;
    ++v5;
    *(_BYTE *)(v11 + 6) = 3;
  }
  while ( v5 != a3 );
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D31BB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D31BB8);
  v13 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140D31BB8 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
  _disable();
  p_Process = (__int64)&v13[1].Process;
  v15 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140D31BB8 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v15;
    p_Process += 96LL;
    if ( v15 >= 6 )
      goto LABEL_23;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_23:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, (ULONG_PTR)&qword_140D31BB8, SessionId, 0LL);
    _enable();
    goto LABEL_31;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v16 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v13->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v16 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v13, (__int64)&qword_140D31BB8, v16);
LABEL_31:
  v17 = KeGetCurrentThread();
  if ( v17->SpecialApcDisable++ == -1 )
  {
    v17 = (struct _KTHREAD *)((char *)v17 + 152);
    if ( *(struct _KTHREAD **)&v17->Header.Lock != v17 )
      LOBYTE(v17) = KiCheckForKernelApcDelivery();
  }
  return (char)v17;
}

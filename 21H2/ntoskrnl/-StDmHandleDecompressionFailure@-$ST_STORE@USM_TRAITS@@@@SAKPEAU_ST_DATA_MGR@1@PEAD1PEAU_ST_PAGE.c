/*
 * XREFs of ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1405F94CC
 * Callers:
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x1405F9B18 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140237E00 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlDecompressBufferEx @ 0x14035F780 (RtlDecompressBufferEx.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140381130 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     SmHpChunkUnprotect @ 0x140381384 (SmHpChunkUnprotect.c)
 *     ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x1403924A0 (-ST_PAGE_RECORD_GET@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MmStoreLogCorruptionFixed @ 0x1405B6950 (MmStoreLogCorruptionFixed.c)
 *     SmFixSingleBitCorruption @ 0x1405FAAC8 (SmFixSingleBitCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1405FD594 (SmPrepareForFatalPageError.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(
        __int64 a1,
        char *a2,
        void *a3,
        ULONG_PTR a4,
        __int64 a5)
{
  __int64 v5; // r13
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v12; // r14
  char *v13; // rdx
  int v14; // ecx
  char v15; // al
  unsigned int v16; // ebx
  _DWORD *v17; // r15
  signed __int64 *v18; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v20; // rax
  bool v21; // zf
  void *v22; // r14
  char fixed; // al
  __int64 v24; // rax
  PVOID v25; // r13
  unsigned int v26; // edx
  struct _KTHREAD *v27; // rax
  __int64 v28; // rcx
  __int128 v30; // [rsp+40h] [rbp-38h] BYREF
  __int128 v31; // [rsp+50h] [rbp-28h]
  __int64 v32; // [rsp+60h] [rbp-18h]
  int v33; // [rsp+C0h] [rbp+48h] BYREF
  int v34; // [rsp+C8h] [rbp+50h]
  PVOID BaseAddress; // [rsp+D0h] [rbp+58h]
  char *v36; // [rsp+D8h] [rbp+60h]

  BaseAddress = a3;
  v5 = a5;
  v8 = *(_DWORD *)a4 >> *(_DWORD *)(a1 + 812);
  v9 = (unsigned int)(16 * (*(_DWORD *)a4 & *(_DWORD *)(a1 + 808)));
  v31 = 0LL;
  v33 = 0;
  v34 = v8;
  v36 = &a2[-v9];
  DWORD2(v31) = -1;
  v32 = 1LL;
  v10 = *(_QWORD *)(a5 + 56);
  v30 = 0LL;
  v12 = 0LL;
  if ( (int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              (char **)a1,
              *(_DWORD *)(v10 + 16),
              (__int64)&v30) >= 0 )
  {
    if ( DWORD2(v31) == -1 || !DWORD2(v31) )
      v13 = (char *)&v30 + 8;
    else
      v13 = (char *)(v30 + 16LL * (unsigned int)(DWORD2(v31) - 1));
    v12 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET((_DWORD *)a1, *((_QWORD *)v13 + 1));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    a1,
    (__int64)&v30,
    0);
  if ( !v12 )
    goto LABEL_15;
  if ( *(_DWORD *)a4 != *v12 )
    goto LABEL_14;
  v14 = 4096;
  if ( (v12[1] & 0xFFF) != 0 )
    v14 = v12[1] & 0xFFF;
  if ( *(unsigned __int16 *)(a4 + 4) != v14 )
LABEL_14:
    KeBugCheckEx(0x1C7u, 3uLL, a4, (ULONG_PTR)v12, 0LL);
  v15 = SmHpChunkUnprotect(a1 + 192, (__int64)v12, 6LL, 2LL);
  v16 = v15 & 1;
  if ( (v15 & 1) != 0 )
  {
LABEL_15:
    v17 = (_DWORD *)(v5 + 64);
    v18 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( v5 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v18, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18);
      KeAbPostRelease((ULONG_PTR)v18);
      v20 = KeGetCurrentThread();
      v21 = v20->SpecialApcDisable++ == -1;
      if ( v21 && ($CEA84C04E3712D858E5667A507841A2A *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
        KiCheckForKernelApcDelivery();
    }
    v22 = *(void **)(v5 + 48);
    memmove(v22, a2, *(unsigned __int16 *)(a4 + 4));
    fixed = SmFixSingleBitCorruption((unsigned __int8 *)v22, *(unsigned __int16 *)(a4 + 4));
    v16 = fixed & 1;
    if ( (fixed & 1) != 0 )
    {
      v24 = *(_QWORD *)(v5 + 16);
      v25 = BaseAddress;
      if ( (int)RtlDecompressBufferEx(
                  *(_WORD *)(a1 + 992),
                  (__int64)BaseAddress,
                  0x1000u,
                  (__int64)v22,
                  *(unsigned __int16 *)(a4 + 4),
                  (__int64)&v33,
                  v24) >= 0
        && v33 == 4096 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a1 + 1928), 1u);
        v26 = *(unsigned __int16 *)(a4 + 4);
        _InterlockedAdd(&dword_140D32554, 1u);
        MmStoreLogCorruptionFixed(a2, v26, dword_140D32554);
        v16 |= 2u;
      }
    }
    else
    {
      v25 = BaseAddress;
    }
    v27 = KeGetCurrentThread();
    v28 = *(_QWORD *)(a1 + 800);
    --v27->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v28 + 6024, 0LL);
    *v17 = 2;
    if ( v16 < 2 )
      SmPrepareForFatalPageError(
        (int)v36,
        *(_DWORD *)(a1 + 784),
        *(unsigned __int16 *)(a4 + 4),
        v34,
        *(unsigned __int16 *)(a1 + 992),
        *(_DWORD *)(a4 + 8),
        (int)a2,
        v25);
  }
  else
  {
    SmPrepareForFatalPageError(
      (int)v36,
      *(_DWORD *)(a1 + 784),
      *(unsigned __int16 *)(a4 + 4),
      v34,
      *(unsigned __int16 *)(a1 + 992),
      *(_DWORD *)(a4 + 8),
      (int)a2,
      BaseAddress);
    SmHpChunkUnprotect(a1 + 192, (__int64)v12, v16 + 2, v16 + 2);
  }
  return v16 >> 1;
}

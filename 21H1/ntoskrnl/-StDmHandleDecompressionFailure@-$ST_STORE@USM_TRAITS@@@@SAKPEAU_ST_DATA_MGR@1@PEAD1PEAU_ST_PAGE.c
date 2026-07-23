/*
 * XREFs of ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140595D14
 * Callers:
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x140596348 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     SmHpChunkUnprotect @ 0x14023FCE8 (SmHpChunkUnprotect.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x1402C41A8 (-ST_PAGE_RECORD_GET@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_.c)
 *     RtlDecompressBufferEx @ 0x1402C4270 (RtlDecompressBufferEx.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402C7158 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1402D2158 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MmStoreLogCorruptionFixed @ 0x14054F010 (MmStoreLogCorruptionFixed.c)
 *     SmFixSingleBitCorruption @ 0x140597520 (SmFixSingleBitCorruption.c)
 *     SmPrepareForFatalPageError @ 0x14059A1E8 (SmPrepareForFatalPageError.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(
        __int64 a1,
        void *a2,
        UCHAR *a3,
        ULONG_PTR a4,
        __int64 a5)
{
  int v5; // r10d
  __int64 v6; // r13
  int v9; // eax
  __int64 v11; // rax
  _DWORD *v12; // r14
  char *v13; // rdx
  int v14; // ecx
  char v15; // al
  unsigned int v16; // ebx
  _DWORD *v17; // r14
  signed __int64 *v18; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // r15
  char fixed; // al
  void *WorkSpace; // rax
  PUCHAR BaseAddress; // r13
  unsigned int v27; // edx
  struct _KTHREAD *v28; // rax
  __int64 v29; // rcx
  int v31; // [rsp+40h] [rbp-38h]
  __int128 v32; // [rsp+48h] [rbp-30h] BYREF
  __int128 v33; // [rsp+58h] [rbp-20h]
  __int64 v34; // [rsp+68h] [rbp-10h]
  ULONG FinalUncompressedSize; // [rsp+C0h] [rbp+48h] BYREF
  int v36; // [rsp+C8h] [rbp+50h]
  PUCHAR UncompressedBuffer; // [rsp+D0h] [rbp+58h]
  int v38; // [rsp+D8h] [rbp+60h]

  UncompressedBuffer = a3;
  v5 = *(_DWORD *)a4;
  v6 = a5;
  v36 = *(_DWORD *)a4 >> *(_DWORD *)(a1 + 812);
  v38 = v36;
  v9 = v5 & *(_DWORD *)(a1 + 808);
  FinalUncompressedSize = 0;
  v31 = (_DWORD)a2 - 16 * v9;
  v34 = 0LL;
  v11 = *(_QWORD *)(a5 + 56);
  v12 = 0LL;
  v34 = 1LL;
  v33 = 0LL;
  DWORD2(v33) = -1;
  v32 = 0LL;
  if ( (int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              (char **)a1,
              *(_DWORD *)(v11 + 16),
              (__int64)&v32) >= 0 )
  {
    if ( DWORD2(v33) == -1 || !DWORD2(v33) )
      v13 = (char *)&v32 + 8;
    else
      v13 = (char *)(v32 + 16LL * (unsigned int)(DWORD2(v33) - 1));
    v12 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET((_DWORD *)a1, *((_QWORD *)v13 + 1));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    (char **)a1,
    (__int64)&v32,
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
  v15 = SmHpChunkUnprotect(a1 + 192, (__int64)v12);
  v16 = v15 & 1;
  if ( (v15 & 1) != 0 )
  {
LABEL_15:
    v17 = (_DWORD *)(v6 + 64);
    v18 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( v6 == -64 )
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
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
    }
    v23 = *(void **)(v6 + 48);
    memmove(v23, a2, *(unsigned __int16 *)(a4 + 4));
    fixed = SmFixSingleBitCorruption((unsigned __int8 *)v23, *(unsigned __int16 *)(a4 + 4));
    v16 = fixed & 1;
    if ( (fixed & 1) != 0 )
    {
      WorkSpace = *(void **)(v6 + 16);
      BaseAddress = UncompressedBuffer;
      if ( RtlDecompressBufferEx(
             *(_WORD *)(a1 + 992),
             UncompressedBuffer,
             0x1000u,
             (PUCHAR)v23,
             *(unsigned __int16 *)(a4 + 4),
             &FinalUncompressedSize,
             WorkSpace) >= 0
        && FinalUncompressedSize == 4096 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 1928));
        v27 = *(unsigned __int16 *)(a4 + 4);
        _InterlockedIncrement(&dword_140D24514);
        MmStoreLogCorruptionFixed((char *)a2, v27, dword_140D24514);
        v16 |= 2u;
      }
    }
    else
    {
      BaseAddress = UncompressedBuffer;
    }
    v28 = KeGetCurrentThread();
    v29 = *(_QWORD *)(a1 + 800);
    --v28->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v29 + 6024, 0LL);
    *v17 = 2;
    if ( v16 < 2 )
      SmPrepareForFatalPageError(
        v31,
        *(_DWORD *)(a1 + 784),
        *(unsigned __int16 *)(a4 + 4),
        v38,
        *(unsigned __int16 *)(a1 + 992),
        *(_DWORD *)(a4 + 8),
        (int)a2,
        BaseAddress);
  }
  else
  {
    SmPrepareForFatalPageError(
      v31,
      *(_DWORD *)(a1 + 784),
      *(unsigned __int16 *)(a4 + 4),
      v36,
      *(unsigned __int16 *)(a1 + 992),
      *(_DWORD *)(a4 + 8),
      (int)a2,
      UncompressedBuffer);
    SmHpChunkUnprotect(a1 + 192, (__int64)v12);
  }
  return v16 >> 1;
}

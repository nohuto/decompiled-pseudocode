/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14028841C
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028BC50 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x14059CE10 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlComputeCrc32 @ 0x14021FAD0 (RtlComputeCrc32.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140225B74 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402519D0 (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14027556C (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkFree @ 0x140286524 (SmHpChunkFree.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140288120 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     SmHpChunkAlloc @ 0x14028822C (SmHpChunkAlloc.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14028B7C8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlCompressBuffer @ 0x14028BE80 (RtlCompressBuffer.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14028BF0C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14059C95C (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmCrAuthEncrypt @ 0x1405A0304 (SmCrAuthEncrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned __int64 v6; // r14
  int v7; // r8d
  unsigned int v8; // edx
  int v9; // ebx
  int Space; // esi
  __int64 v11; // r15
  ULONG_PTR v12; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v15; // r12
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int8 v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  UCHAR *v25; // r15
  UCHAR *v26; // r12
  ULONG v27; // edx
  unsigned int v28; // r13d
  size_t v29; // r8
  UCHAR *v30; // rdx
  _WORD *v31; // rax
  ULONG v32; // eax
  int *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  int v37; // eax
  UCHAR *v38; // rsi
  unsigned int v39; // ecx
  __int64 v40; // r9
  __int64 v41; // rcx
  ULONG32 v42; // eax
  ULONG Length; // [rsp+40h] [rbp-49h] BYREF
  ULONG_PTR v44; // [rsp+44h] [rbp-45h] BYREF
  int v45; // [rsp+4Ch] [rbp-3Dh]
  ULONG32 *v46; // [rsp+50h] [rbp-39h] BYREF
  __int64 v47; // [rsp+58h] [rbp-31h]
  unsigned __int8 v48[8]; // [rsp+60h] [rbp-29h] BYREF
  int v49; // [rsp+68h] [rbp-21h]
  _DWORD *v50; // [rsp+70h] [rbp-19h]
  int *v51; // [rsp+78h] [rbp-11h]
  __int64 v52; // [rsp+80h] [rbp-9h] BYREF
  int v53; // [rsp+88h] [rbp-1h]

  v51 = (int *)a2;
  v47 = a3;
  v52 = 0LL;
  v53 = 0;
  v6 = 0LL;
  v7 = (unsigned __int8)*(_DWORD *)(a1 + 776);
  v8 = *(_DWORD *)a2 & 7;
  v50 = a4;
  v46 = 0LL;
  LODWORD(v44) = 0;
  v9 = 0;
  v49 = 0;
  Length = 0;
  if ( ((unsigned __int8)v7 == 0 ? 7 : 0) < v8 )
    v8 = v7 == 0 ? 7 : 0;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v8, *a4, &v46, (int *)&v44);
  if ( Space < 0 )
    goto LABEL_41;
  v11 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v11 + 6021) & 4) != 0 )
  {
    v12 = v11 + 6024;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    v45 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v15 = ++CurrentThread->AbAllocationRegionCount;
    v16 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v17 = !_BitScanReverse((unsigned int *)&v18, v16);
      HIDWORD(v44) = v18;
      if ( v17 )
        break;
      v19 = (__int64)&CurrentThread->LockEntries[v18];
      v16 &= ~(1 << v18);
      if ( (*(_BYTE *)(v19 + 26) & 1) != 0
        && (*(_DWORD *)(v19 + 32) & 1) == 0
        && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v19 + 40) == SessionId )
      {
        *(_BYTE *)(v19 + 26) &= ~1u;
        if ( *(_QWORD *)(v19 + 32) )
        {
          if ( v19 )
          {
            *(_BYTE *)(v19 + 32) |= 2u;
            if ( *(__int64 *)(v19 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
            v45 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
            *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v19 + 25) &= ~1u;
            *(_QWORD *)(v19 + 32) = 0LL;
            v20 = 1 << ((signed __int64)(v19 - (unsigned __int64)CurrentThread->LockEntries) / 96);
            if ( v15 == 1 )
              CurrentThread->AbEntrySummary |= v20;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v20);
            goto LABEL_21;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v12, SessionId, 0LL);
LABEL_21:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
    v17 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v21, v22, v23);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  v9 = 1;
  v24 = *(_DWORD *)a2;
  v25 = (UCHAR *)v46 + *(unsigned int *)(a1 + 824);
  v26 = *(UCHAR **)(a2 + 8);
  if ( *(int *)a2 >= 0 )
  {
    v37 = *(_DWORD *)(a1 + 776);
    if ( (v37 & 0x400) != 0 )
    {
      v27 = 4096;
    }
    else
    {
      if ( (v37 & 0x8000) != 0 )
      {
        memmove((void *)(*(_QWORD *)(a1 + 1784) + 4096LL), *(const void **)(a2 + 8), 0x1000uLL);
        v24 = *(_DWORD *)a2;
        v26 = (UCHAR *)(*(_QWORD *)(a1 + 1784) + 4096LL);
      }
      v27 = 0;
    }
  }
  else
  {
    v27 = *(_DWORD *)(*(_QWORD *)(v47 + 16) + 40LL);
  }
  v28 = *(_DWORD *)(a1 + 816) - (v44 & *(_DWORD *)(a1 + 808));
  Length = v27;
  if ( v24 < 0 )
  {
    v29 = v27;
    v30 = v26;
LABEL_29:
    memmove(v25, v30, v29);
    goto LABEL_30;
  }
  if ( v28 >= *(_DWORD *)(a1 + 820) )
    v38 = v25;
  else
    v38 = *(UCHAR **)(a1 + 1784);
  if ( !v27 )
  {
    if ( RtlCompressBuffer(*(_WORD *)(a1 + 992), v26, 0x1000u, v38, 0x1000u, 0x1000u, &Length, *(PVOID *)(a1 + 896)) >= 0 )
    {
      v27 = Length;
    }
    else
    {
      v27 = 4096;
      Length = 4096;
    }
  }
  if ( v38 != v25 )
  {
    v39 = (v27 + *(_DWORD *)(a1 + 824) + 15) >> 4;
    *v50 = v39;
    if ( v39 > v28 )
    {
      Space = -1073741267;
      goto LABEL_41;
    }
  }
  if ( v27 > 0xFF0 )
  {
    if ( (*(_DWORD *)(a1 + 776) & 0x200) != 0 )
    {
      Space = -1073740762;
      goto LABEL_41;
    }
    v27 = 4096;
    v38 = v26;
    Length = 4096;
  }
  if ( v38 != v25 )
  {
    v29 = v27;
    v30 = v38;
    goto LABEL_29;
  }
LABEL_30:
  if ( *(_QWORD *)(a1 + 760) || (Space = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(a1), Space >= 0) )
  {
    v9 = 0;
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
    v31 = SmHpChunkAlloc((_DWORD *)(a1 + 192));
    v6 = (unsigned __int64)v31;
    if ( !v31 )
    {
      Space = -1073741670;
      goto LABEL_41;
    }
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, (__int64)v31);
    *(_QWORD *)(v6 + 4) = 0LL;
    *(_DWORD *)v6 = v44;
    v32 = Length;
    if ( Length < 0x1000 )
    {
      *(_DWORD *)(v6 + 4) ^= Length & 0xFFF;
      v32 = Length;
    }
    v33 = v51;
    if ( *v51 >= 0 )
    {
      *(_QWORD *)v48 = 0LL;
      MetroHash64::Hash(v25, v32, v48);
      LODWORD(v34) = *(_DWORD *)v48;
    }
    else
    {
      v34 = *(_QWORD *)(v47 + 96);
    }
    *(_DWORD *)(v6 + 8) = v34;
    v35 = *(_QWORD *)(a1 + 1016);
    if ( *(_DWORD *)(v35 + 24) )
    {
      v40 = -*(_DWORD *)(v35 + 8) & (*(_DWORD *)(v35 + 8) + Length - 1);
      ++*(_QWORD *)(a1 + 1024);
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(a1 + 1024);
      *(_WORD *)(v6 + 6) = *(_WORD *)(a1 + 1028);
      LODWORD(v52) = Length;
      HIDWORD(v52) = *(_DWORD *)(v6 + 12);
      v41 = *(_QWORD *)(a1 + 1016);
      v53 = *(unsigned __int16 *)(v6 + 6);
      if ( (int)SmCrAuthEncrypt(v41, v25, v25, v40, &v52) < 0 )
      {
        Space = -1073741174;
        goto LABEL_41;
      }
    }
    else if ( *(_BYTE *)(a1 + 776) )
    {
      v42 = RtlComputeCrc32(0, v25, Length);
      *v46 = v42;
    }
    Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(a1, v33, v6);
    if ( Space >= 0 )
    {
      v6 = 0LL;
      Space = 0;
    }
  }
LABEL_41:
  if ( v9 )
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
  if ( v6 )
    SmHpChunkFree((_DWORD *)(a1 + 192), v6);
  return (unsigned int)Space;
}

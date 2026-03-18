/*
 * XREFs of MiDeleteClusterSection @ 0x140276E5C
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140273390 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCreateInitialLargeLeafPfns @ 0x140236C98 (MiCreateInitialLargeLeafPfns.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140246160 (MiInitializeAllResidentPageBasePfns.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiTryLockLeafPage @ 0x1402708F4 (MiTryLockLeafPage.c)
 *     MiIsPageOnBadList @ 0x140273354 (MiIsPageOnBadList.c)
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiBadShareCount @ 0x1405AD6C8 (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteClusterSection(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rcx
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  unsigned int i; // ebx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 v14; // r11
  ULONG_PTR v15; // r15
  __int64 v16; // r13
  unsigned __int64 *v17; // r14
  ULONG_PTR v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rbx
  int v23; // eax
  int v24; // eax
  unsigned int *v26; // r9
  int v27; // r14d
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int v30; // edx
  int v31; // r11d
  unsigned int v32; // r10d
  ULONG_PTR v33; // rbx
  __int64 v34; // rsi
  unsigned int v35; // r14d
  __int64 v36; // r13
  int HasShadow; // eax
  __int64 v38; // rsi
  __int64 v39; // rbx
  ULONG_PTR v40; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR v42; // [rsp+50h] [rbp-29h]
  unsigned __int16 *v43; // [rsp+58h] [rbp-21h]
  __int64 v44; // [rsp+60h] [rbp-19h]
  __int128 v45; // [rsp+68h] [rbp-11h] BYREF
  __int128 v46; // [rsp+78h] [rbp-1h]
  __int128 v47; // [rsp+88h] [rbp+Fh] BYREF

  v45 = 0LL;
  v2 = -1LL;
  v46 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)&v47 = a2;
  v4 = v3 & 0xFFFFFFFFFFLL;
  v43 = *(unsigned __int16 **)(qword_140C51F48 + 8 * ((v3 >> 43) & 0x3FF));
  v5 = 0LL;
  for ( i = 0; i < 0x10; i += v14 )
  {
    v7 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * i);
    v8 = v7;
    if ( !v7 || (v7 & 0x800) == 0 )
      return 0LL;
    if ( qword_140C50780 )
    {
      if ( (v7 & 0x10) != 0 )
        v8 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v8 = ~qword_140C50780 & v7;
    }
    v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
    v10 = v9;
    if ( v9 > qword_140C50840 )
      return 0LL;
    if ( ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      return 0LL;
    v42 = 48 * v9 - 0x220000000000LL;
    BugCheckParameter2 = v42;
    if ( (unsigned int)MiIsPfnFromSlabAllocation(v42) || i && v9 != v2 )
      return 0LL;
    a2 = v47;
    v2 = v9 + 1;
  }
  v15 = v9 - 15;
  v16 = v13 + 48 * v4;
  v17 = (unsigned __int64 *)(v47 + 120);
  v44 = v16;
  v47 = 0LL;
  while ( 1 )
  {
    if ( v10 == v15 )
    {
      v18 = v13 + 48 * v15;
      BugCheckParameter2 = v18;
    }
    else
    {
      MiTryLockLeafPage(v17, (unsigned int)v14, (__int64 *)&BugCheckParameter2);
      v18 = BugCheckParameter2;
      v11 = 0LL;
      if ( !BugCheckParameter2 )
        goto LABEL_37;
      if ( BugCheckParameter2 != v42 )
        goto LABEL_70;
    }
    if ( (unsigned __int64 *)(*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) != v17 )
    {
      v40 = MI_READ_PTE_LOCK_FREE(v17);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v17, v40, *(_QWORD *)(v18 + 8));
    }
    if ( (*(_BYTE *)(v18 + 34) & 7) == 6 )
      MiBadShareCount(v18, a2, v11, v12);
    if ( *(_WORD *)(v18 + 32) != (_WORD)v11
      || (*(_BYTE *)(v18 + 35) & 0x40) != 0
      || MiIsPageOnBadList(v18)
      || (unsigned int)MiIsPfnFromSlabAllocation(v19) )
    {
      break;
    }
    MiUnlinkPageFromListEx(v18);
    if ( ((*(_QWORD *)(v18 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v18, 12);
    MiReleasePageFileSpace((__int64)v43, *(_QWORD *)(v18 + 16), 1);
    v20 = *(_QWORD *)(v18 + 16);
    if ( (v20 & 4) != 0 )
    {
      v20 &= ~4uLL;
      *(_QWORD *)(v18 + 16) = v20;
    }
    if ( (v20 & 2) != 0 )
      *(_QWORD *)(v18 + 16) = v20 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_BYTE *)(v18 + 35) &= 0xF8u;
    MiSetPfnIdentity(v18, 0LL);
    ++*((_DWORD *)&v47 + ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) >> 6));
    *(_QWORD *)(v18 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v18 + 34) &= 0xC7u;
    *(_BYTE *)(v18 + 35) &= ~0x20u;
    v21 = *(_BYTE *)(v18 + 34) & 0xEF;
    *(_BYTE *)(v18 + 34) = v21;
    *(_BYTE *)(v18 + 34) = v21 & 0xF8 | 1;
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_QWORD *)(v18 + 24) &= 0x8000000000000000uLL;
    *(_QWORD *)(v18 + 16) = 0LL;
    v22 = ZeroPte;
    v23 = MiPteInShadowRange(v17);
    v11 = 0LL;
    if ( !v23 )
    {
      v14 = 1LL;
LABEL_31:
      v24 = v11;
      goto LABEL_32;
    }
    HasShadow = MiPteHasShadow();
    v14 = 1LL;
    if ( !HasShadow )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v22 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_31;
    }
    v24 = 1;
    if ( HIBYTE(word_140C51864) == (_BYTE)v11 && (ZeroPte & 1) != 0 )
      v22 = ZeroPte | 0x8000000000000000uLL;
LABEL_32:
    *v17 = v22;
    if ( v24 )
    {
      MiWritePteShadow((__int64)v17, v22);
      v11 = 0LL;
    }
    v42 -= 48LL;
    v5 += v14;
    v10 -= v14;
    --v17;
    if ( v10 < v15 )
      goto LABEL_37;
    v13 = 0xFFFFDE0000000000uLL;
  }
  if ( v10 == v15 )
    goto LABEL_37;
LABEL_70:
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_37:
  v26 = (unsigned int *)&v47;
  v27 = 1;
  v28 = v11;
  v29 = v11;
  do
  {
    v30 = *v26;
    v31 = v27;
    v32 = v28;
    if ( *v26 && v28 )
      v29 = 1;
    v27 = v11;
    v28 = *v26;
    if ( v32 >= v30 )
      v27 = v31;
    LODWORD(v11) = v11 + 1;
    ++v26;
    if ( v32 >= v30 )
      v28 = v32;
  }
  while ( (unsigned int)v11 < 4 );
  if ( v29 )
  {
    v38 = 16LL;
    v39 = 48 * v15 - 0x220000000000LL;
    do
    {
      if ( *(unsigned __int8 *)(v39 + 34) >> 6 != v27 )
        MiChangePageAttribute(v39, v27, 1);
      v39 += 48LL;
      --v38;
    }
    while ( v38 );
  }
  v33 = 48 * v9 - 0x220000000000LL;
  BugCheckParameter2 = v33;
  if ( v5 == 16 )
  {
    *(_QWORD *)&v45 = v9 - 15;
    *((_QWORD *)&v45 + 1) = 0x200000001LL;
    LOBYTE(v46) = 2;
    v34 = *((_QWORD *)v43 + 2)
        + 24512LL * *(unsigned int *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v9) >> 4)) + 8);
    MiInitializeAllResidentPageBasePfns(v43, v9 - 15, 16LL, 2, v27, 1, 1);
    MiCreateInitialLargeLeafPfns(v9 - 15, 16LL, 2, v27, *v43, 1);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v34 + 22848));
LABEL_47:
    v35 = 0;
    do
    {
      if ( v9 == v15 )
        break;
      if ( !v34 )
      {
        MiSetPfnPteFrame(v33, 0LL);
        MiInsertPageInFreeOrZeroedList(v9);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++v35;
      v33 = BugCheckParameter2 - 48;
      --v9;
      BugCheckParameter2 -= 48LL;
    }
    while ( v35 < v5 );
    v36 = v44;
    MiLockNestedPageAtDpcInline(v44);
    *(_QWORD *)(v36 + 24) ^= (*(_QWORD *)(v36 + 24) ^ (*(_QWORD *)(v36 + 24) - v5)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v34 = 0LL;
    if ( v5 )
      goto LABEL_47;
  }
  if ( !v34 )
    return 0LL;
  MiInsertLargePageInNodeList(&v45);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v34 + 22848));
  return 1LL;
}

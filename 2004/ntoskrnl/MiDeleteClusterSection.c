/*
 * XREFs of MiDeleteClusterSection @ 0x1402273C0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x14022A1F0 (MiDeleteSubsectionPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402BED20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiIsPageOnBadList @ 0x140319D2C (MiIsPageOnBadList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiTryLockLeafPage @ 0x14033AC04 (MiTryLockLeafPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiBadShareCount @ 0x1403EEC84 (MiBadShareCount.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1403F0724 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F0F18 (MiInitializeAllResidentPageBasePfns.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MI_NODE_FROM_PFN @ 0x140542668 (MI_NODE_FROM_PFN.c)
 */

__int64 __fastcall MiDeleteClusterSection(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rcx
  __int64 v5; // r12
  unsigned int v6; // r15d
  unsigned __int64 v7; // r13
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r14
  unsigned __int64 *v17; // rsi
  unsigned __int64 v18; // r10
  ULONG_PTR v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v22; // al
  unsigned __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // rdi
  int v26; // ecx
  unsigned int i; // r9d
  unsigned int v28; // edx
  __int64 v29; // r10
  unsigned int v30; // r11d
  unsigned int v31; // r8d
  __int64 v32; // r11
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rsi
  ULONG_PTR v36; // rsi
  unsigned int v37; // eax
  __int64 v38; // rbp
  _QWORD *v39; // rbx
  unsigned __int64 v40; // r12
  ULONG_PTR v42; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-98h] BYREF
  __int64 v44; // [rsp+48h] [rbp-90h]
  unsigned __int64 v45; // [rsp+50h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-80h] BYREF
  __int128 v47; // [rsp+70h] [rbp-68h] BYREF
  __int64 v48; // [rsp+80h] [rbp-58h]
  __int128 v49; // [rsp+88h] [rbp-50h]

  v48 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = -1LL;
  v47 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = v4 & 0xFFFFFFFFFLL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v44 = *(_QWORD *)(qword_140C4E448 + 8 * ((v4 >> 39) & 0x3FF));
  do
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * v8);
    v10 = v9;
    if ( !v9 || (v9 & 0x800) == 0 )
      return 0LL;
    if ( qword_140C4DD40 )
    {
      if ( (v9 & 0x10) != 0 )
        v10 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v10 = ~qword_140C4DD40 & v9;
    }
    v11 = (v10 >> 12) & 0xFFFFFFFFFLL;
    if ( ((*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
      return 0LL;
    v12 = 48 * v11 - 0x58000000000LL;
    BugCheckParameter2 = v12;
    if ( MiIsPfnFromSlabAllocation(v12) || v8 && v11 != v3 )
      return 0LL;
    ++v8;
    v3 = v11 + 1;
  }
  while ( v8 < 0x10 );
  v16 = v11 - 15;
  v45 = v14 + 48 * v5;
  v17 = (unsigned __int64 *)(a2 + 120);
  v49 = 0LL;
  while ( 1 )
  {
    v18 = 0x8000000000000000uLL;
    if ( v11 == v16 )
    {
      v19 = v14 + 48 * v16;
      BugCheckParameter2 = v19;
    }
    else
    {
      MiTryLockLeafPage(v17, v13, &BugCheckParameter2);
      v19 = BugCheckParameter2;
      if ( !BugCheckParameter2 )
        goto LABEL_45;
      if ( BugCheckParameter2 != v12 )
        goto LABEL_44;
    }
    if ( (unsigned __int64 *)(v18 | *(_QWORD *)(v19 + 8)) != v17 )
    {
      v42 = MI_READ_PTE_LOCK_FREE(v17);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v17, v42, *(_QWORD *)(v19 + 8));
    }
    if ( (*(_BYTE *)(v19 + 34) & 7) == 6 )
      MiBadShareCount(v19);
    if ( *(_WORD *)(v19 + 32)
      || (*(_BYTE *)(v19 + 35) & 0x40) != 0
      || (unsigned int)MiIsPageOnBadList(v19, v13, v14, v15)
      || MiIsPfnFromSlabAllocation(v20) )
    {
      break;
    }
    MiUnlinkPageFromList(v19);
    if ( ((*(_QWORD *)(v19 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v19, 12LL);
    MiReleasePageFileSpace(v44, *(_QWORD *)(v19 + 16), 1LL);
    v21 = *(_QWORD *)(v19 + 16);
    if ( (v21 & 4) != 0 )
    {
      v21 &= ~4uLL;
      *(_QWORD *)(v19 + 16) = v21;
    }
    if ( (v21 & 2) != 0 )
      *(_QWORD *)(v19 + 16) = v21 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_BYTE *)(v19 + 35) &= 0xF8u;
    *(_QWORD *)(v19 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    ++*((_DWORD *)&v49 + ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) >> 6));
    *(_QWORD *)(v19 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v19 + 34) &= 0xC7u;
    *(_BYTE *)(v19 + 35) &= ~0x20u;
    v22 = *(_BYTE *)(v19 + 34) & 0xEF;
    *(_BYTE *)(v19 + 34) = v22;
    *(_BYTE *)(v19 + 34) = v22 & 0xF8 | 1;
    *(_QWORD *)(v19 + 8) = 0LL;
    *(_QWORD *)(v19 + 24) &= 0x8000000000000000uLL;
    *(_QWORD *)(v19 + 16) = 0LL;
    v23 = ZeroPte;
    if ( !(unsigned int)MiPteInShadowRange(v17) )
      goto LABEL_40;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v23 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_40:
      *v17 = v23;
      goto LABEL_41;
    }
    if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
      v23 = ZeroPte | 0x8000000000000000uLL;
    *v17 = v23;
    MiWritePteShadow(v17, v23);
LABEL_41:
    ++v7;
    --v11;
    v12 -= 48LL;
    --v17;
    if ( v11 < v16 )
      goto LABEL_45;
    v14 = 0xFFFFFA8000000000uLL;
  }
  if ( v11 == v16 )
    goto LABEL_45;
LABEL_44:
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_45:
  LODWORD(v24) = 0;
  LODWORD(v25) = 1;
  v26 = 0;
  for ( i = 0; i < 4; i += 4 )
  {
    v28 = *((_DWORD *)&v49 + i);
    if ( v28 && (_DWORD)v24 )
      v26 = 1;
    v29 = i + 1;
    v30 = i;
    if ( (unsigned int)v24 >= v28 )
    {
      v28 = v24;
      v30 = v25;
    }
    v31 = *((_DWORD *)&v49 + v29);
    if ( v31 && v28 )
      v26 = 1;
    if ( v28 >= v31 )
    {
      LODWORD(v29) = v30;
      v31 = v28;
    }
    v32 = i + 2;
    v33 = *((unsigned int *)&v49 + v32);
    if ( (_DWORD)v33 && v31 )
      v26 = 1;
    v25 = i + 3;
    if ( v31 >= (unsigned int)v33 )
    {
      v33 = v31;
      LODWORD(v32) = v29;
    }
    v24 = *((unsigned int *)&v49 + v25);
    if ( (_DWORD)v24 && (_DWORD)v33 )
      v26 = 1;
    if ( (unsigned int)v33 >= (unsigned int)v24 )
      LODWORD(v25) = v32;
    if ( (unsigned int)v33 >= (unsigned int)v24 )
      v24 = (unsigned int)v33;
  }
  if ( v26 )
  {
    v34 = 48 * v16 - 0x58000000000LL;
    v35 = 16LL;
    do
    {
      if ( *(unsigned __int8 *)(v34 + 34) >> 6 != (_DWORD)v25 )
        MiChangePageAttribute(v34, (unsigned int)v25, 1LL);
      v34 += 48LL;
      --v35;
    }
    while ( v35 );
  }
  v36 = v16 + 15;
  BugCheckParameter2 = 48 * (v16 + 15) - 0x58000000000LL;
  if ( v7 == 16 )
  {
    *(_QWORD *)&v47 = v16;
    *((_QWORD *)&v47 + 1) = 0x200000001LL;
    LOBYTE(v48) = 2;
    v37 = MI_NODE_FROM_PFN(48 * (v16 + 15) - 0x58000000000LL, v33, v24);
    v38 = *(_QWORD *)(v44 + 16) + 4544LL * v37;
    MiInitializeAllResidentPageBasePfns(v44, v16, 16, 2, v25, 1, 1);
    MiCreateInitialLargeLeafPfns(v16, 16, 2, v25, *(_WORD *)v44, 1);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v38 + 4328), &LockHandle);
LABEL_77:
    v39 = (_QWORD *)(48 * (v16 + 15) - 0x58000000000LL + 40);
    do
    {
      if ( v36 == v16 )
        break;
      if ( !v38 )
      {
        *v39 &= 0xFFFFFFF000000000uLL;
        MiInsertPageInFreeOrZeroedList(v36);
      }
      _InterlockedAnd64(v39 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      ++v6;
      --v36;
      v39 -= 6;
    }
    while ( v6 < v7 );
    v40 = v45;
    MiLockNestedPageAtDpcInline(v45);
    v33 = *(_QWORD *)(v40 + 24) ^ (*(_QWORD *)(v40 + 24) ^ (*(_QWORD *)(v40 + 24) - v7)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v40 + 24) = v33;
    _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v38 = 0LL;
    if ( v7 )
      goto LABEL_77;
  }
  if ( v38 )
  {
    MiInsertLargePageInNodeList(&v47, v33, v24);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return 1LL;
  }
  return 0LL;
}

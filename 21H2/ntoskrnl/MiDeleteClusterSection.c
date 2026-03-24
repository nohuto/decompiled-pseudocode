/*
 * XREFs of MiDeleteClusterSection @ 0x1403003E0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140239170 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14022CB20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiClearPfnImageVerified @ 0x1402A3214 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiIsPfnFromSlabAllocation @ 0x140302EF0 (MiIsPfnFromSlabAllocation.c)
 *     MiReleasePageFileSpace @ 0x140303154 (MiReleasePageFileSpace.c)
 *     MiIsPageOnBadList @ 0x14030356C (MiIsPageOnBadList.c)
 *     MiTryLockLeafPage @ 0x140303978 (MiTryLockLeafPage.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1403F63D4 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F6BC8 (MiInitializeAllResidentPageBasePfns.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MI_NODE_FROM_PFN @ 0x140547B38 (MI_NODE_FROM_PFN.c)
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
  ULONG_PTR v12; // rbp
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r14
  unsigned __int64 *v16; // rsi
  unsigned __int64 v17; // r10
  ULONG_PTR v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // al
  unsigned __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rdi
  int v28; // ecx
  __int64 v29; // r9
  unsigned int v30; // edx
  __int64 v31; // r10
  int v32; // r11d
  unsigned int v33; // r8d
  __int64 v34; // r11
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rsi
  ULONG_PTR v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // rbp
  _QWORD *v41; // rbx
  __int64 v42; // r12
  ULONG_PTR v44; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-98h] BYREF
  __int64 v46; // [rsp+48h] [rbp-90h]
  __int64 v47; // [rsp+50h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-80h] BYREF
  __int128 v49; // [rsp+70h] [rbp-68h] BYREF
  __int64 v50; // [rsp+80h] [rbp-58h]
  __int128 v51; // [rsp+88h] [rbp-50h]

  v50 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = -1LL;
  v49 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = v4 & 0xFFFFFFFFFLL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v46 = *(_QWORD *)(qword_140C4E648 + 8 * ((v4 >> 39) & 0x3FF));
  do
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * v8);
    v10 = v9;
    if ( !v9 || (v9 & 0x800) == 0 )
      return 0LL;
    if ( qword_140C4DF40 )
    {
      if ( (v9 & 0x10) != 0 )
        v10 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v10 = ~qword_140C4DF40 & v9;
    }
    v11 = (v10 >> 12) & 0xFFFFFFFFFLL;
    if ( ((*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
      return 0LL;
    v12 = 48 * v11 - 0x58000000000LL;
    BugCheckParameter2 = v12;
    if ( (unsigned int)MiIsPfnFromSlabAllocation(v12) || v8 && v11 != v3 )
      return 0LL;
    ++v8;
    v3 = v11 + 1;
  }
  while ( v8 < 0x10 );
  v15 = v11 - 15;
  v47 = v14 + 48 * v5;
  v16 = (unsigned __int64 *)(a2 + 120);
  v51 = 0LL;
  while ( 1 )
  {
    v17 = 0x8000000000000000uLL;
    if ( v11 == v15 )
    {
      v18 = v14 + 48 * v15;
      BugCheckParameter2 = v18;
    }
    else
    {
      MiTryLockLeafPage(v16, v13, &BugCheckParameter2);
      v18 = BugCheckParameter2;
      if ( !BugCheckParameter2 )
        goto LABEL_45;
      if ( BugCheckParameter2 != v12 )
        goto LABEL_44;
    }
    if ( (unsigned __int64 *)(v17 | *(_QWORD *)(v18 + 8)) != v16 )
    {
      v44 = MI_READ_PTE_LOCK_FREE(v16);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v16, v44, *(_QWORD *)(v18 + 8));
    }
    if ( (*(_BYTE *)(v18 + 34) & 7) == 6 )
      MiBadShareCount(v18);
    if ( *(_WORD *)(v18 + 32)
      || (*(_BYTE *)(v18 + 35) & 0x40) != 0
      || (unsigned int)MiIsPageOnBadList(v18)
      || (unsigned int)MiIsPfnFromSlabAllocation(v19) )
    {
      break;
    }
    MiUnlinkPageFromList(v18, 0);
    if ( ((*(_QWORD *)(v18 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v18, 12LL, v20);
    MiReleasePageFileSpace(v46, *(_QWORD *)(v18 + 16), 1LL);
    v22 = *(_QWORD *)(v18 + 16);
    if ( (v22 & 4) != 0 )
    {
      v22 &= ~4uLL;
      *(_QWORD *)(v18 + 16) = v22;
    }
    if ( (v22 & 2) != 0 )
      *(_QWORD *)(v18 + 16) = v22 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_BYTE *)(v18 + 35) &= 0xF8u;
    *(_QWORD *)(v18 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    ++*((_DWORD *)&v51 + ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) >> 6));
    *(_QWORD *)(v18 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v18 + 34) &= 0xC7u;
    *(_BYTE *)(v18 + 35) &= ~0x20u;
    v23 = *(_BYTE *)(v18 + 34) & 0xEF;
    *(_BYTE *)(v18 + 34) = v23;
    *(_BYTE *)(v18 + 34) = v23 & 0xF8 | 1;
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_QWORD *)(v18 + 24) &= 0x8000000000000000uLL;
    *(_QWORD *)(v18 + 16) = 0LL;
    v24 = ZeroPte;
    if ( !(unsigned int)MiPteInShadowRange(v16, v21) )
      goto LABEL_40;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v24 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_40:
      *v16 = v24;
      goto LABEL_41;
    }
    if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
      v24 = ZeroPte | 0x8000000000000000uLL;
    *v16 = v24;
    MiWritePteShadow((__int64)v16, v24, v25);
LABEL_41:
    ++v7;
    --v11;
    v12 -= 48LL;
    --v16;
    if ( v11 < v15 )
      goto LABEL_45;
    v14 = 0xFFFFFA8000000000uLL;
  }
  if ( v11 == v15 )
    goto LABEL_45;
LABEL_44:
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_45:
  LODWORD(v26) = 0;
  LODWORD(v27) = 1;
  v28 = 0;
  LODWORD(v29) = 0;
  do
  {
    v30 = *((_DWORD *)&v51 + (unsigned int)v29);
    if ( v30 && (_DWORD)v26 )
      v28 = 1;
    v31 = (unsigned int)(v29 + 1);
    v32 = v29;
    if ( (unsigned int)v26 >= v30 )
    {
      v30 = v26;
      v32 = v27;
    }
    v33 = *((_DWORD *)&v51 + v31);
    if ( v33 && v30 )
      v28 = 1;
    if ( v30 >= v33 )
    {
      LODWORD(v31) = v32;
      v33 = v30;
    }
    v34 = (unsigned int)(v29 + 2);
    v35 = *((unsigned int *)&v51 + v34);
    if ( (_DWORD)v35 && v33 )
      v28 = 1;
    v27 = (unsigned int)(v29 + 3);
    if ( v33 >= (unsigned int)v35 )
    {
      v35 = v33;
      LODWORD(v34) = v31;
    }
    v26 = *((unsigned int *)&v51 + v27);
    if ( (_DWORD)v26 && (_DWORD)v35 )
      v28 = 1;
    if ( (unsigned int)v35 >= (unsigned int)v26 )
      LODWORD(v27) = v34;
    v29 = (unsigned int)(v29 + 4);
    if ( (unsigned int)v35 >= (unsigned int)v26 )
      v26 = (unsigned int)v35;
  }
  while ( (unsigned int)v29 < 4 );
  if ( v28 )
  {
    v36 = 48 * v15 - 0x58000000000LL;
    v37 = 16LL;
    do
    {
      if ( *(unsigned __int8 *)(v36 + 34) >> 6 != (_DWORD)v27 )
        MiChangePageAttribute(v36, (unsigned int)v27, 1LL);
      v36 += 48LL;
      --v37;
    }
    while ( v37 );
  }
  v38 = v15 + 15;
  BugCheckParameter2 = 48 * (v15 + 15) - 0x58000000000LL;
  if ( v7 == 16 )
  {
    *(_QWORD *)&v49 = v15;
    *((_QWORD *)&v49 + 1) = 0x200000001LL;
    LOBYTE(v50) = 2;
    v39 = MI_NODE_FROM_PFN(48 * (v15 + 15) - 0x58000000000LL, v35, v26);
    v40 = *(_QWORD *)(v46 + 16) + 4544LL * v39;
    MiInitializeAllResidentPageBasePfns(v46, v15, 16, 2, v27, 1, 1);
    MiCreateInitialLargeLeafPfns(v15, 16, 2, v27, *(_WORD *)v46, 1);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v40 + 4328), &LockHandle);
LABEL_77:
    v41 = (_QWORD *)(48 * (v15 + 15) - 0x58000000000LL + 40);
    do
    {
      if ( v38 == v15 )
        break;
      if ( !v40 )
      {
        *v41 &= 0xFFFFFFF000000000uLL;
        MiInsertPageInFreeOrZeroedList(v38, 2);
      }
      _InterlockedAnd64(v41 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      ++v6;
      --v38;
      v41 -= 6;
    }
    while ( v6 < v7 );
    v42 = v47;
    MiLockNestedPageAtDpcInline(v47, v35, v26, v29);
    *(_QWORD *)(v42 + 24) ^= (*(_QWORD *)(v42 + 24) ^ (*(_QWORD *)(v42 + 24) - v7)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v40 = 0LL;
    if ( v7 )
      goto LABEL_77;
  }
  if ( v40 )
  {
    MiInsertLargePageInNodeList((__int64)&v49);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return 1LL;
  }
  return 0LL;
}

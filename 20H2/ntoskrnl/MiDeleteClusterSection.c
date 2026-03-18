/*
 * XREFs of MiDeleteClusterSection @ 0x14034A680
 * Callers:
 *     MiDeleteSubsectionPages @ 0x1402C7990 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140296D60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiClearPfnImageVerified @ 0x140349B58 (MiClearPfnImageVerified.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
 *     MiIsPageOnBadList @ 0x14034D80C (MiIsPageOnBadList.c)
 *     MiTryLockLeafPage @ 0x14034D840 (MiTryLockLeafPage.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiBadShareCount @ 0x1403F30EC (MiBadShareCount.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1403F4C38 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F542C (MiInitializeAllResidentPageBasePfns.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MI_NODE_FROM_PFN @ 0x140546038 (MI_NODE_FROM_PFN.c)
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
  __int64 v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rdi
  int v26; // ecx
  __int64 v27; // r9
  unsigned int v28; // edx
  __int64 v29; // r10
  int v30; // r11d
  unsigned int v31; // r8d
  __int64 v32; // r11
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rsi
  ULONG_PTR v36; // rsi
  unsigned int v37; // eax
  __int64 v38; // rbp
  _QWORD *v39; // rbx
  __int64 v40; // r12
  ULONG_PTR v42; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-98h] BYREF
  __int64 v44; // [rsp+48h] [rbp-90h]
  __int64 v45; // [rsp+50h] [rbp-88h]
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
  v44 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((v4 >> 39) & 0x3FF));
  do
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * v8);
    v10 = v9;
    if ( !v9 || (v9 & 0x800) == 0 )
      return 0LL;
    if ( qword_140C4DDC0 )
    {
      if ( (v9 & 0x10) != 0 )
        v10 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v10 = ~qword_140C4DDC0 & v9;
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
  v45 = v14 + 48 * v5;
  v16 = (unsigned __int64 *)(a2 + 120);
  v49 = 0LL;
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
      v42 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v16);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v16, v42, *(_QWORD *)(v18 + 8));
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
      MiClearPfnImageVerified(v18, 12);
    MiReleasePageFileSpace(v44, *(_QWORD *)(v18 + 16), 1LL);
    v20 = *(_QWORD *)(v18 + 16);
    if ( (v20 & 4) != 0 )
    {
      v20 &= ~4uLL;
      *(_QWORD *)(v18 + 16) = v20;
    }
    if ( (v20 & 2) != 0 )
      *(_QWORD *)(v18 + 16) = v20 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_BYTE *)(v18 + 35) &= 0xF8u;
    *(_QWORD *)(v18 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    ++*((_DWORD *)&v49 + ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) >> 6));
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
    if ( !MiPteInShadowRange((unsigned __int64)v16) )
      goto LABEL_40;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v22 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_40:
      *v16 = v22;
      goto LABEL_41;
    }
    if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
      v22 = ZeroPte | 0x8000000000000000uLL;
    *v16 = v22;
    MiWritePteShadow((__int64)v16, v22, v23);
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
  LODWORD(v24) = 0;
  LODWORD(v25) = 1;
  v26 = 0;
  LODWORD(v27) = 0;
  do
  {
    v28 = *((_DWORD *)&v49 + (unsigned int)v27);
    if ( v28 && (_DWORD)v24 )
      v26 = 1;
    v29 = (unsigned int)(v27 + 1);
    v30 = v27;
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
    v32 = (unsigned int)(v27 + 2);
    v33 = *((unsigned int *)&v49 + v32);
    if ( (_DWORD)v33 && v31 )
      v26 = 1;
    v25 = (unsigned int)(v27 + 3);
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
    v27 = (unsigned int)(v27 + 4);
    if ( (unsigned int)v33 >= (unsigned int)v24 )
      v24 = (unsigned int)v33;
  }
  while ( (unsigned int)v27 < 4 );
  if ( v26 )
  {
    v34 = 48 * v15 - 0x58000000000LL;
    v35 = 16LL;
    do
    {
      if ( *(unsigned __int8 *)(v34 + 34) >> 6 != (_DWORD)v25 )
        MiChangePageAttribute(v34, v25, 1);
      v34 += 48LL;
      --v35;
    }
    while ( v35 );
  }
  v36 = v15 + 15;
  BugCheckParameter2 = 48 * (v15 + 15) - 0x58000000000LL;
  if ( v7 == 16 )
  {
    *(_QWORD *)&v47 = v15;
    *((_QWORD *)&v47 + 1) = 0x200000001LL;
    LOBYTE(v48) = 2;
    v37 = MI_NODE_FROM_PFN(48 * (v15 + 15) - 0x58000000000LL, v33, v24);
    v38 = *(_QWORD *)(v44 + 16) + 4544LL * v37;
    MiInitializeAllResidentPageBasePfns(v44, v15, 16, 2, v25, 1, 1);
    MiCreateInitialLargeLeafPfns(v15, 16, 2, v25, *(_WORD *)v44, 1);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v38 + 4328), &LockHandle);
LABEL_77:
    v39 = (_QWORD *)(48 * (v15 + 15) - 0x58000000000LL + 40);
    do
    {
      if ( v36 == v15 )
        break;
      if ( !v38 )
      {
        *v39 &= 0xFFFFFFF000000000uLL;
        MiInsertPageInFreeOrZeroedList(v36, 2);
      }
      _InterlockedAnd64(v39 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      ++v6;
      --v36;
      v39 -= 6;
    }
    while ( v6 < v7 );
    v40 = v45;
    MiLockNestedPageAtDpcInline(v45, v33, v24, v27);
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
    MiInsertLargePageInNodeList((__int64)&v47, v33, v24, v27);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return 1LL;
  }
  return 0LL;
}

/*
 * XREFs of MiDeleteClusterSection @ 0x14030B130
 * Callers:
 *     MiDeleteSubsectionPages @ 0x1402DD9C0 (MiDeleteSubsectionPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D1370 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     MiTryLockLeafPage @ 0x14030E6C8 (MiTryLockLeafPage.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1403F63D4 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F6BC8 (MiInitializeAllResidentPageBasePfns.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MI_NODE_FROM_PFN @ 0x140547D78 (MI_NODE_FROM_PFN.c)
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
  __int64 v24; // rdi
  int v25; // ecx
  unsigned int i; // r9d
  unsigned int v27; // edx
  __int64 v28; // r10
  unsigned int v29; // r11d
  unsigned int v30; // r8d
  __int64 v31; // r11
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rsi
  ULONG_PTR v35; // rsi
  unsigned int v36; // eax
  __int64 v37; // rbp
  _QWORD *v38; // rbx
  __int64 v39; // r12
  ULONG_PTR v41; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-98h] BYREF
  __int64 v43; // [rsp+48h] [rbp-90h]
  __int64 v44; // [rsp+50h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-80h] BYREF
  __int128 v46; // [rsp+70h] [rbp-68h] BYREF
  __int64 v47; // [rsp+80h] [rbp-58h]
  __int128 v48; // [rsp+88h] [rbp-50h]

  v47 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = -1LL;
  v46 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = v4 & 0xFFFFFFFFFLL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v43 = *(_QWORD *)(qword_140C4E688 + 8 * ((v4 >> 39) & 0x3FF));
  do
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * v8);
    v10 = v9;
    if ( !v9 || (v9 & 0x800) == 0 )
      return 0LL;
    if ( qword_140C4DF80 )
    {
      if ( (v9 & 0x10) != 0 )
        v10 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v10 = ~qword_140C4DF80 & v9;
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
  v44 = v14 + 48 * v5;
  v16 = (unsigned __int64 *)(a2 + 120);
  v48 = 0LL;
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
      v41 = MI_READ_PTE_LOCK_FREE(v16);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v16, v41, *(_QWORD *)(v18 + 8));
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
    MiReleasePageFileSpace(v43, *(_QWORD *)(v18 + 16), 1LL);
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
    ++*((_DWORD *)&v48 + ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) >> 6));
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
    if ( !(unsigned int)MiPteInShadowRange(v16) )
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
    if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
      v22 = ZeroPte | 0x8000000000000000uLL;
    *v16 = v22;
    MiWritePteShadow((__int64)v16, v22);
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
  LODWORD(v23) = 0;
  LODWORD(v24) = 1;
  v25 = 0;
  for ( i = 0; i < 4; i += 4 )
  {
    v27 = *((_DWORD *)&v48 + i);
    if ( v27 && (_DWORD)v23 )
      v25 = 1;
    v28 = i + 1;
    v29 = i;
    if ( (unsigned int)v23 >= v27 )
    {
      v27 = v23;
      v29 = v24;
    }
    v30 = *((_DWORD *)&v48 + v28);
    if ( v30 && v27 )
      v25 = 1;
    if ( v27 >= v30 )
    {
      LODWORD(v28) = v29;
      v30 = v27;
    }
    v31 = i + 2;
    v32 = *((unsigned int *)&v48 + v31);
    if ( (_DWORD)v32 && v30 )
      v25 = 1;
    v24 = i + 3;
    if ( v30 >= (unsigned int)v32 )
    {
      v32 = v30;
      LODWORD(v31) = v28;
    }
    v23 = *((unsigned int *)&v48 + v24);
    if ( (_DWORD)v23 && (_DWORD)v32 )
      v25 = 1;
    if ( (unsigned int)v32 >= (unsigned int)v23 )
      LODWORD(v24) = v31;
    if ( (unsigned int)v32 >= (unsigned int)v23 )
      v23 = (unsigned int)v32;
  }
  if ( v25 )
  {
    v33 = 48 * v15 - 0x58000000000LL;
    v34 = 16LL;
    do
    {
      if ( *(unsigned __int8 *)(v33 + 34) >> 6 != (_DWORD)v24 )
        MiChangePageAttribute(v33, (unsigned int)v24, 1LL);
      v33 += 48LL;
      --v34;
    }
    while ( v34 );
  }
  v35 = v15 + 15;
  BugCheckParameter2 = 48 * (v15 + 15) - 0x58000000000LL;
  if ( v7 == 16 )
  {
    *(_QWORD *)&v46 = v15;
    *((_QWORD *)&v46 + 1) = 0x200000001LL;
    LOBYTE(v47) = 2;
    v36 = MI_NODE_FROM_PFN(48 * (v15 + 15) - 0x58000000000LL, v32, v23);
    v37 = *(_QWORD *)(v43 + 16) + 4544LL * v36;
    MiInitializeAllResidentPageBasePfns(v43, v15, 16, 2, v24, 1, 1);
    MiCreateInitialLargeLeafPfns(v15, 16, 2, v24, *(_WORD *)v43, 1);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v37 + 4328), &LockHandle);
LABEL_77:
    v38 = (_QWORD *)(48 * (v15 + 15) - 0x58000000000LL + 40);
    do
    {
      if ( v35 == v15 )
        break;
      if ( !v37 )
      {
        *v38 &= 0xFFFFFFF000000000uLL;
        MiInsertPageInFreeOrZeroedList(v35, 2);
      }
      _InterlockedAnd64(v38 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      ++v6;
      --v35;
      v38 -= 6;
    }
    while ( v6 < v7 );
    v39 = v44;
    MiLockNestedPageAtDpcInline(v44);
    *(_QWORD *)(v39 + 24) ^= (*(_QWORD *)(v39 + 24) ^ (*(_QWORD *)(v39 + 24) - v7)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v37 = 0LL;
    if ( v7 )
      goto LABEL_77;
  }
  if ( v37 )
  {
    MiInsertLargePageInNodeList((__int64)&v46);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return 1LL;
  }
  return 0LL;
}

/*
 * XREFs of MiDeleteClusterPage @ 0x140336580
 * Callers:
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiDeleteBatch @ 0x1402DCCA0 (MiDeleteBatch.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiTryLockNestedPageAtDpcInline @ 0x14030E6B0 (MiTryLockNestedPageAtDpcInline.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403F606C (MiConvertLockedSmallPageToLarge.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiLockPageAtDpc @ 0x14054FB5C (MiLockPageAtDpc.c)
 */

__int64 __fastcall MiDeleteClusterPage(ULONG_PTR BugCheckParameter2, unsigned __int8 *a2)
{
  ULONG_PTR v2; // r15
  __int64 v3; // rsi
  unsigned __int64 v5; // r13
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // r14
  struct _LIST_ENTRY *Flink; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  struct _LIST_ENTRY *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // rdi
  unsigned __int64 i; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  struct _LIST_ENTRY *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // r12
  unsigned __int64 v27; // rdx
  _DWORD *v28; // r9
  bool v29; // zf
  unsigned __int64 v30; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned int v32; // ecx
  __int64 j; // rcx
  unsigned int v35; // eax
  ULONG_PTR v36; // r13
  __int64 *v37; // r15
  ULONG_PTR v38; // rbx
  unsigned int v39; // esi
  __int64 v40; // r14
  char v41; // al
  unsigned __int64 v42; // rax
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // rbx
  ULONG_PTR v46; // rax
  __int64 v47; // [rsp+30h] [rbp-49h]
  unsigned __int64 v48; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v49; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v50; // [rsp+48h] [rbp-31h] BYREF
  __int64 v51; // [rsp+50h] [rbp-29h]
  unsigned __int64 v52; // [rsp+58h] [rbp-21h]
  __int128 v53; // [rsp+60h] [rbp-19h] BYREF
  __int64 v54; // [rsp+70h] [rbp-9h]
  __int64 v55; // [rsp+78h] [rbp-1h]
  _KPROCESS *Process; // [rsp+80h] [rbp+7h]
  __int128 v57; // [rsp+88h] [rbp+Fh]

  v2 = BugCheckParameter2;
  v54 = 0LL;
  v3 = -1LL;
  v47 = -1LL;
  v53 = 0LL;
  v5 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v51 = *(_QWORD *)(qword_140C4E688 + 8LL * Process[1].IdealProcessorPadding[5]);
  v6 = (unsigned __int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = *v6;
  if ( (unsigned int)MiPteInShadowRange(v6)
    && (unsigned int)MiPteHasShadow()
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v9 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v6 >> 3) & 0x1FF));
      v10 = v7 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v7;
      v7 = v10;
      if ( (v9 & 0x42) != 0 )
        v7 = v10 | 0x42;
    }
  }
  v50 = v7;
  if ( (unsigned int)MiPteInShadowRange(&v50)
    && (unsigned int)MiPteHasShadow()
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v11 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v11 )
    {
      v12 = *((_QWORD *)&v11->Flink + (((unsigned __int64)&v50 >> 3) & 0x1FF));
      v13 = v7 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v7;
      v7 = v13;
      if ( (v12 & 0x42) != 0 )
        v7 = v13 | 0x42;
    }
  }
  v14 = v2;
  v55 = (v7 >> 12) & 0xFFFFFFFFFLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v16 = MI_READ_PTE_LOCK_FREE(v14);
    if ( !v16 || (v16 & 0x400) == 0 )
      return 0LL;
    v17 = v16 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v48 = v17;
    if ( (unsigned __int64)&v48 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v48 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v18 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v18 )
      {
        v19 = *((_QWORD *)&v18->Flink + (((unsigned __int64)&v48 >> 3) & 0x1FF));
        if ( (v19 & 0x20) != 0 )
          v17 |= 0x20uLL;
        if ( (v19 & 0x42) != 0 )
          v17 |= 0x42uLL;
      }
      else
      {
        v17 = v48;
      }
    }
    v20 = (v17 >> 12) & 0xFFFFFFFFFLL;
    if ( i )
    {
      if ( v20 != v5 )
        return 0LL;
    }
    if ( byte_140C5209E && _bittest64((const signed __int64 *)qword_140C525C8, (unsigned __int64)(48 * v20 / 48) >> 9)
      || (unsigned int)MI_PFN_IS_PROTO(48 * v20 - 0x58000000000LL)
      || *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v22 + 40) >> 39) & 0x3FFLL)) != v51 )
    {
      return 0LL;
    }
    v5 = v21 + 1;
    v14 += 8LL;
  }
  MiDeleteBatch(a2);
  v52 = v5 - 16;
  v23 = v5 - 16;
  v24 = 48 * (v5 - 16);
  v25 = v24 - 0x58000000000LL;
  v26 = v24 - 0x58000000000LL;
  v27 = (__int64)((unsigned __int128)(v24 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  MiSearchNumaNodeTable(v27 + (v27 >> 63));
  v57 = 0LL;
  v29 = 0;
  if ( v5 - 16 < v5 )
  {
    v30 = v5 - 16;
    v52 = v5 - 16;
    while ( 1 )
    {
      if ( v23 == v30 )
      {
        MiLockPageAtDpc(v25);
      }
      else if ( !MiTryLockNestedPageAtDpcInline(v25) )
      {
        goto LABEL_53;
      }
      BugCheckParameter4 = *(_QWORD *)(v25 + 8);
      v47 = v23;
      if ( (BugCheckParameter4 | 0x8000000000000000uLL) != v2 )
      {
        v46 = MI_READ_PTE_LOCK_FREE(v2);
        KeBugCheckEx(0x1Au, 0x403uLL, v2, v46, BugCheckParameter4);
      }
      v32 = *(unsigned __int8 *)(v25 + 34);
      if ( (v32 & 7) != 6 )
        MiBadShareCount(v25);
      if ( *(_WORD *)(v25 + 32) != 1 || (*(_BYTE *)(v25 + 35) & 0x40) != 0 )
        break;
      ++v23;
      v25 += 48LL;
      v2 += 8LL;
      ++*((_DWORD *)&v57 + ((unsigned __int64)v32 >> 6));
      if ( v23 >= v5 )
      {
LABEL_53:
        v3 = v47;
        goto LABEL_55;
      }
      v30 = v5 - 16;
    }
    v3 = v23;
LABEL_55:
    v29 = v23 == v5;
  }
  if ( !v29 )
  {
    if ( v3 != -1 )
    {
      for ( j = 48 * v3 - 0x58000000000LL; j != v26; j -= 48LL )
        _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v35 = 0;
  v36 = v25;
  v37 = (__int64 *)(v2 - 128);
  v38 = v25 - 768;
  v39 = 1;
  if ( (_DWORD)v57 )
  {
    v35 = v57;
    v39 = 0;
  }
  if ( v35 < DWORD1(v57) )
  {
    v35 = DWORD1(v57);
    v39 = 1;
  }
  if ( v35 < DWORD2(v57) )
  {
    v35 = DWORD2(v57);
    v39 = 2;
  }
  v40 = v51;
  if ( v35 < HIDWORD(v57) )
    v39 = 3;
  do
  {
    v41 = (*(_QWORD *)(v38 + 40) >> 60) & 7;
    *(_WORD *)(v38 + 32) = 2;
    if ( v41 == 3 )
      MiClearPfnImageVerified(v38, 12);
    v49 = *(_QWORD *)(v38 + 16);
    if ( (v49 & 0x400) == 0 )
    {
      v42 = (v49 & 4) != 0 || (v49 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v49) : 0LL;
      v49 = v42;
      if ( v42 )
        MiReleasePageFileInfo(v40, v42, 0);
    }
    *(_QWORD *)(v38 + 16) = ZeroPte;
    if ( *(unsigned __int8 *)(v38 + 34) >> 6 != v39 )
      MiChangePageAttribute(v38, v39, 1LL, v28);
    v43 = *(_BYTE *)(v38 + 35);
    if ( (v43 & 0x10) != 0 )
      *(_BYTE *)(v38 + 35) = v43 & 0xEF;
    MiConvertLockedSmallPageToLarge(v38, v26, 2LL);
    if ( v38 != v26 )
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v44 = ZeroPte;
    if ( (unsigned __int64)v37 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v37 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_95;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v44 & 1) != 0 )
      {
        v44 |= 0x8000000000000000uLL;
      }
LABEL_95:
      *v37 = v44;
      goto LABEL_96;
    }
    if ( !HIBYTE(word_140C4E048) && (v44 & 1) != 0 )
      v44 |= 0x8000000000000000uLL;
    *v37 = v44;
    MiWritePteShadow((__int64)v37, v44);
LABEL_96:
    v38 += 48LL;
    ++v37;
  }
  while ( v38 < v36 );
  *(_QWORD *)&v53 = v52;
  *((_QWORD *)&v53 + 1) = 1LL;
  LOBYTE(v54) = 2;
  MiInsertLargePageInNodeList((__int64)&v53);
  v45 = 48 * v55 - 0x58000000000LL;
  MiLockPageAtDpc(v45);
  *(_QWORD *)(v45 + 24) ^= (*(_QWORD *)(v45 + 24) ^ (*(_QWORD *)(v45 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  return 1LL;
}

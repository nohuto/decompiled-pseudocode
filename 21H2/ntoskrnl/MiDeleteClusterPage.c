/*
 * XREFs of MiDeleteClusterPage @ 0x14032B830
 * Callers:
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 * Callees:
 *     MiDeleteBatch @ 0x140238450 (MiDeleteBatch.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiClearPfnImageVerified @ 0x1402A3214 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiTryLockNestedPageAtDpcInline @ 0x140303960 (MiTryLockNestedPageAtDpcInline.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403F606C (MiConvertLockedSmallPageToLarge.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiLockPageAtDpc @ 0x14054F91C (MiLockPageAtDpc.c)
 */

__int64 __fastcall MiDeleteClusterPage(ULONG_PTR BugCheckParameter2, unsigned __int8 *a2)
{
  ULONG_PTR v2; // r15
  __int64 v3; // rsi
  unsigned __int64 v5; // r13
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v10; // rax
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
  __int64 v28; // r8
  _DWORD *v29; // r9
  bool v30; // zf
  unsigned __int64 v31; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned int v33; // ecx
  __int64 j; // rcx
  unsigned int v36; // eax
  ULONG_PTR v37; // r13
  __int64 *v38; // r15
  ULONG_PTR v39; // rbx
  unsigned int v40; // esi
  __int64 v41; // r14
  char v42; // al
  unsigned __int64 v43; // rax
  char v44; // al
  __int64 v45; // rdx
  __int64 v46; // rbx
  ULONG_PTR v47; // rax
  __int64 v48; // [rsp+30h] [rbp-49h]
  unsigned __int64 v49; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v50; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-31h] BYREF
  __int64 v52; // [rsp+50h] [rbp-29h]
  unsigned __int64 v53; // [rsp+58h] [rbp-21h]
  __int128 v54; // [rsp+60h] [rbp-19h] BYREF
  __int64 v55; // [rsp+70h] [rbp-9h]
  __int64 v56; // [rsp+78h] [rbp-1h]
  _KPROCESS *Process; // [rsp+80h] [rbp+7h]
  __int128 v58; // [rsp+88h] [rbp+Fh]

  v2 = BugCheckParameter2;
  v55 = 0LL;
  v3 = -1LL;
  v48 = -1LL;
  v54 = 0LL;
  v5 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v52 = *(_QWORD *)(qword_140C4E648 + 8LL * Process[1].IdealProcessorPadding[5]);
  v6 = (unsigned __int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = *v6;
  if ( (unsigned int)MiPteInShadowRange(v6, a2)
    && (unsigned int)MiPteHasShadow()
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v8 = (unsigned int)v6;
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v6 >> 3) & 0x1FF));
      v8 = v7 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v8 = v7;
      v7 = v8;
      if ( (v10 & 0x42) != 0 )
        v7 = v8 | 0x42;
    }
  }
  v51 = v7;
  if ( (unsigned int)MiPteInShadowRange(&v51, v8)
    && (unsigned int)MiPteHasShadow()
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v11 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v11 )
    {
      v12 = *((_QWORD *)&v11->Flink + (((unsigned __int64)&v51 >> 3) & 0x1FF));
      v13 = v7 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v7;
      v7 = v13;
      if ( (v12 & 0x42) != 0 )
        v7 = v13 | 0x42;
    }
  }
  v14 = v2;
  v56 = (v7 >> 12) & 0xFFFFFFFFFLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v16 = MI_READ_PTE_LOCK_FREE(v14);
    if ( !v16 || (v16 & 0x400) == 0 )
      return 0LL;
    v17 = v16 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v49 = v17;
    if ( (unsigned __int64)&v49 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v49 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v18 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v18 )
      {
        v19 = *((_QWORD *)&v18->Flink + (((unsigned __int64)&v49 >> 3) & 0x1FF));
        if ( (v19 & 0x20) != 0 )
          v17 |= 0x20uLL;
        if ( (v19 & 0x42) != 0 )
          v17 |= 0x42uLL;
      }
      else
      {
        v17 = v49;
      }
    }
    v20 = (v17 >> 12) & 0xFFFFFFFFFLL;
    if ( i )
    {
      if ( v20 != v5 )
        return 0LL;
    }
    if ( byte_140C5205E && _bittest64((const signed __int64 *)qword_140C52588, (unsigned __int64)(48 * v20 / 48) >> 9)
      || (unsigned int)MI_PFN_IS_PROTO(48 * v20 - 0x58000000000LL)
      || *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v22 + 40) >> 39) & 0x3FFLL)) != v52 )
    {
      return 0LL;
    }
    v5 = v21 + 1;
    v14 += 8LL;
  }
  MiDeleteBatch(a2);
  v53 = v5 - 16;
  v23 = v5 - 16;
  v24 = 48 * (v5 - 16);
  v25 = v24 - 0x58000000000LL;
  v26 = v24 - 0x58000000000LL;
  v27 = (__int64)((unsigned __int128)(v24 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  MiSearchNumaNodeTable(v27 + (v27 >> 63));
  v58 = 0LL;
  v30 = 0;
  if ( v5 - 16 < v5 )
  {
    v31 = v5 - 16;
    v53 = v5 - 16;
    while ( 1 )
    {
      if ( v23 == v31 )
      {
        MiLockPageAtDpc(v25);
      }
      else if ( !MiTryLockNestedPageAtDpcInline(v25) )
      {
        goto LABEL_53;
      }
      BugCheckParameter4 = *(_QWORD *)(v25 + 8);
      v48 = v23;
      if ( (BugCheckParameter4 | 0x8000000000000000uLL) != v2 )
      {
        v47 = MI_READ_PTE_LOCK_FREE(v2);
        KeBugCheckEx(0x1Au, 0x403uLL, v2, v47, BugCheckParameter4);
      }
      v33 = *(unsigned __int8 *)(v25 + 34);
      if ( (v33 & 7) != 6 )
        MiBadShareCount(v25);
      if ( *(_WORD *)(v25 + 32) != 1 || (*(_BYTE *)(v25 + 35) & 0x40) != 0 )
        break;
      ++v23;
      v25 += 48LL;
      v2 += 8LL;
      ++*((_DWORD *)&v58 + ((unsigned __int64)v33 >> 6));
      if ( v23 >= v5 )
      {
LABEL_53:
        v3 = v48;
        goto LABEL_55;
      }
      v31 = v5 - 16;
    }
    v3 = v23;
LABEL_55:
    v30 = v23 == v5;
  }
  if ( !v30 )
  {
    if ( v3 != -1 )
    {
      for ( j = 48 * v3 - 0x58000000000LL; j != v26; j -= 48LL )
        _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v36 = 0;
  v37 = v25;
  v38 = (__int64 *)(v2 - 128);
  v39 = v25 - 768;
  v40 = 1;
  if ( (_DWORD)v58 )
  {
    v36 = v58;
    v40 = 0;
  }
  if ( v36 < DWORD1(v58) )
  {
    v36 = DWORD1(v58);
    v40 = 1;
  }
  if ( v36 < DWORD2(v58) )
  {
    v36 = DWORD2(v58);
    v40 = 2;
  }
  v41 = v52;
  if ( v36 < HIDWORD(v58) )
    v40 = 3;
  do
  {
    v42 = (*(_QWORD *)(v39 + 40) >> 60) & 7;
    *(_WORD *)(v39 + 32) = 2;
    if ( v42 == 3 )
      MiClearPfnImageVerified(v39, 12LL, v28);
    v50 = *(_QWORD *)(v39 + 16);
    if ( (v50 & 0x400) == 0 )
    {
      v43 = (v50 & 4) != 0 || (v50 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v50) : 0LL;
      v50 = v43;
      if ( v43 )
        MiReleasePageFileInfo(v41, v43, 0);
    }
    *(_QWORD *)(v39 + 16) = ZeroPte;
    if ( *(unsigned __int8 *)(v39 + 34) >> 6 != v40 )
      MiChangePageAttribute(v39, v40, 1LL, v29);
    v44 = *(_BYTE *)(v39 + 35);
    if ( (v44 & 0x10) != 0 )
      *(_BYTE *)(v39 + 35) = v44 & 0xEF;
    MiConvertLockedSmallPageToLarge(v39, v26, 2LL);
    if ( v39 != v26 )
      _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v45 = ZeroPte;
    if ( (unsigned __int64)v38 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v38 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_95;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v45 & 1) != 0 )
      {
        v45 |= 0x8000000000000000uLL;
      }
LABEL_95:
      *v38 = v45;
      goto LABEL_96;
    }
    if ( !HIBYTE(word_140C4E008) && (v45 & 1) != 0 )
      v45 |= 0x8000000000000000uLL;
    *v38 = v45;
    MiWritePteShadow((__int64)v38, v45, v28);
LABEL_96:
    v39 += 48LL;
    ++v38;
  }
  while ( v39 < v37 );
  *(_QWORD *)&v54 = v53;
  *((_QWORD *)&v54 + 1) = 1LL;
  LOBYTE(v55) = 2;
  MiInsertLargePageInNodeList((__int64)&v54);
  v46 = 48 * v56 - 0x58000000000LL;
  MiLockPageAtDpc(v46);
  *(_QWORD *)(v46 + 24) ^= (*(_QWORD *)(v46 + 24) ^ (*(_QWORD *)(v46 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  return 1LL;
}

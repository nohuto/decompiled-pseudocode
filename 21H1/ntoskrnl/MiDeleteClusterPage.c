/*
 * XREFs of MiDeleteClusterPage @ 0x14028DDB0
 * Callers:
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiDeleteBatch @ 0x14029A5F0 (MiDeleteBatch.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiTryLockNestedPageAtDpcInline @ 0x140353620 (MiTryLockNestedPageAtDpcInline.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403ED924 (MiBadShareCount.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403EF05C (MiConvertLockedSmallPageToLarge.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiLockPageAtDpc @ 0x140549E2C (MiLockPageAtDpc.c)
 */

__int64 __fastcall MiDeleteClusterPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v2; // r15
  __int64 v3; // rsi
  unsigned __int64 v5; // r13
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _LIST_ENTRY *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  ULONG_PTR v17; // rdi
  unsigned __int64 i; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // r12
  unsigned __int64 v30; // rdx
  bool v31; // zf
  unsigned __int64 v32; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned int v34; // ecx
  __int64 j; // rcx
  unsigned int v37; // eax
  unsigned __int64 v38; // r13
  __int64 *v39; // r15
  unsigned __int64 v40; // rbx
  unsigned int v41; // esi
  __int64 v42; // r14
  char v43; // al
  __int64 v44; // rax
  char v45; // al
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rbx
  ULONG_PTR v50; // rax
  __int64 v51; // [rsp+30h] [rbp-49h]
  unsigned __int64 v52; // [rsp+38h] [rbp-41h] BYREF
  __int64 v53; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v54; // [rsp+48h] [rbp-31h] BYREF
  __int64 v55; // [rsp+50h] [rbp-29h]
  unsigned __int64 v56; // [rsp+58h] [rbp-21h]
  __int64 v57; // [rsp+60h] [rbp-19h]
  _KPROCESS *Process; // [rsp+68h] [rbp-11h]
  __int128 v59; // [rsp+70h] [rbp-9h] BYREF
  __int64 v60; // [rsp+80h] [rbp+7h]
  __int128 v61; // [rsp+88h] [rbp+Fh]

  v2 = BugCheckParameter2;
  v60 = 0LL;
  v3 = -1LL;
  v51 = -1LL;
  v59 = 0LL;
  v5 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v55 = *(_QWORD *)(qword_140C4E588 + 8LL * Process[1].IdealProcessorPadding[5]);
  v6 = (unsigned __int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = *v6;
  if ( (unsigned int)MiPteInShadowRange(v6, a2)
    && (unsigned int)MiPteHasShadow(v9, v8)
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v8 = (unsigned int)v6;
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v6 >> 3) & 0x1FF));
      v8 = v7 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v8 = v7;
      v7 = v8;
      if ( (v11 & 0x42) != 0 )
        v7 = v8 | 0x42;
    }
  }
  v54 = v7;
  if ( (unsigned int)MiPteInShadowRange(&v54, v8)
    && (unsigned int)MiPteHasShadow(v13, v12)
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v54 >> 3) & 0x1FF));
      v16 = v7 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = v7;
      v7 = v16;
      if ( (v15 & 0x42) != 0 )
        v7 = v16 | 0x42;
    }
  }
  v17 = v2;
  v57 = (v7 >> 12) & 0xFFFFFFFFFLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v19 = MI_READ_PTE_LOCK_FREE(v17);
    if ( !v19 || (v19 & 0x400) == 0 )
      return 0LL;
    v21 = v19 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v52 = v21;
    if ( (unsigned __int64)&v52 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v52 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(&v52, v20)
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      v20 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v20 )
      {
        v22 = *(_QWORD *)(v20 + 8 * (((unsigned __int64)&v52 >> 3) & 0x1FF));
        if ( (v22 & 0x20) != 0 )
          v21 |= 0x20uLL;
        if ( (v22 & 0x42) != 0 )
          v21 |= 0x42uLL;
      }
      else
      {
        v21 = v52;
      }
    }
    v23 = (v21 >> 12) & 0xFFFFFFFFFLL;
    if ( i )
    {
      if ( v23 != v5 )
        return 0LL;
    }
    if ( byte_140C51F5E )
    {
      v20 = (unsigned __int64)(48 * v23 / 48) >> 9;
      if ( _bittest64((const signed __int64 *)qword_140C52488, v20) )
        return 0LL;
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * v23 - 0x58000000000LL, v20, v23)
      || *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v25 + 40) >> 39) & 0x3FFLL)) != v55 )
    {
      return 0LL;
    }
    v5 = v24 + 1;
    v17 += 8LL;
  }
  MiDeleteBatch(a2);
  v56 = v5 - 16;
  v26 = v5 - 16;
  v27 = 48 * (v5 - 16);
  v28 = v27 - 0x58000000000LL;
  v29 = v27 - 0x58000000000LL;
  v30 = (__int64)((unsigned __int128)(v27 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  MiSearchNumaNodeTable(v30 + (v30 >> 63));
  v61 = 0LL;
  v31 = 0;
  if ( v5 - 16 < v5 )
  {
    v32 = v5 - 16;
    v56 = v5 - 16;
    while ( 1 )
    {
      if ( v26 == v32 )
      {
        MiLockPageAtDpc(v28);
      }
      else if ( !(unsigned int)MiTryLockNestedPageAtDpcInline(v28) )
      {
        goto LABEL_53;
      }
      BugCheckParameter4 = *(_QWORD *)(v28 + 8);
      v51 = v26;
      if ( (BugCheckParameter4 | 0x8000000000000000uLL) != v2 )
      {
        v50 = MI_READ_PTE_LOCK_FREE(v2);
        KeBugCheckEx(0x1Au, 0x403uLL, v2, v50, BugCheckParameter4);
      }
      v34 = *(unsigned __int8 *)(v28 + 34);
      if ( (v34 & 7) != 6 )
        MiBadShareCount(v28);
      if ( *(_WORD *)(v28 + 32) != 1 || (*(_BYTE *)(v28 + 35) & 0x40) != 0 )
        break;
      ++v26;
      v28 += 48LL;
      v2 += 8LL;
      ++*((_DWORD *)&v61 + ((unsigned __int64)v34 >> 6));
      if ( v26 >= v5 )
      {
LABEL_53:
        v3 = v51;
        goto LABEL_55;
      }
      v32 = v5 - 16;
    }
    v3 = v26;
LABEL_55:
    v31 = v26 == v5;
  }
  if ( !v31 )
  {
    if ( v3 != -1 )
    {
      for ( j = 48 * v3 - 0x58000000000LL; j != v29; j -= 48LL )
        _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v37 = 0;
  v38 = v28;
  v39 = (__int64 *)(v2 - 128);
  v40 = v28 - 768;
  v41 = 1;
  if ( (_DWORD)v61 )
  {
    v37 = v61;
    v41 = 0;
  }
  if ( v37 < DWORD1(v61) )
  {
    v37 = DWORD1(v61);
    v41 = 1;
  }
  if ( v37 < DWORD2(v61) )
  {
    v37 = DWORD2(v61);
    v41 = 2;
  }
  v42 = v55;
  if ( v37 < HIDWORD(v61) )
    v41 = 3;
  do
  {
    v43 = (*(_QWORD *)(v40 + 40) >> 60) & 7;
    *(_WORD *)(v40 + 32) = 2;
    if ( v43 == 3 )
      MiClearPfnImageVerified(v40, 12LL);
    v53 = *(_QWORD *)(v40 + 16);
    if ( (v53 & 0x400) == 0 )
    {
      v44 = (v53 & 4) != 0 || (v53 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v53) : 0LL;
      v53 = v44;
      if ( v44 )
        MiReleasePageFileInfo(v42, v44, 0LL);
    }
    *(_QWORD *)(v40 + 16) = ZeroPte;
    if ( *(unsigned __int8 *)(v40 + 34) >> 6 != v41 )
      MiChangePageAttribute(v40, v41, 1LL);
    v45 = *(_BYTE *)(v40 + 35);
    if ( (v45 & 0x10) != 0 )
      *(_BYTE *)(v40 + 35) = v45 & 0xEF;
    MiConvertLockedSmallPageToLarge(v40, v29, 2LL);
    if ( v40 != v29 )
      _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v48 = ZeroPte;
    if ( (unsigned __int64)v39 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v39 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_95;
    if ( !(unsigned int)MiPteHasShadow(v46, ZeroPte) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v48 & 1) != 0 )
      {
        v48 |= 0x8000000000000000uLL;
      }
LABEL_95:
      *v39 = v48;
      goto LABEL_96;
    }
    if ( !HIBYTE(word_140C4DF48) && (v48 & 1) != 0 )
      v48 |= 0x8000000000000000uLL;
    *v39 = v48;
    MiWritePteShadow(v39, v48);
LABEL_96:
    v40 += 48LL;
    ++v39;
  }
  while ( v40 < v38 );
  *(_QWORD *)&v59 = v56;
  *((_QWORD *)&v59 + 1) = 1LL;
  LOBYTE(v60) = 2;
  MiInsertLargePageInNodeList(&v59, 2LL, v47);
  v49 = 48 * v57 - 0x58000000000LL;
  MiLockPageAtDpc(v49);
  *(_QWORD *)(v49 + 24) ^= (*(_QWORD *)(v49 + 24) ^ (*(_QWORD *)(v49 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  return 1LL;
}

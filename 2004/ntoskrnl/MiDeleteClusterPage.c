/*
 * XREFs of MiDeleteClusterPage @ 0x140234D60
 * Callers:
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiDeleteBatch @ 0x1402415C0 (MiDeleteBatch.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiTryLockNestedPageAtDpcInline @ 0x1402F7640 (MiTryLockNestedPageAtDpcInline.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403EEC84 (MiBadShareCount.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403F03BC (MiConvertLockedSmallPageToLarge.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiLockPageAtDpc @ 0x14054A47C (MiLockPageAtDpc.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _LIST_ENTRY *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  ULONG_PTR v22; // rdi
  unsigned __int64 i; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  unsigned __int64 v27; // r8
  struct _LIST_ENTRY *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // r12
  unsigned __int64 v37; // rdx
  bool v38; // zf
  unsigned __int64 v39; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned int v41; // ecx
  __int64 j; // rcx
  unsigned int v44; // eax
  unsigned __int64 v45; // r13
  __int64 *v46; // r15
  unsigned __int64 v47; // rbx
  unsigned int v48; // esi
  __int64 v49; // r14
  char v50; // al
  __int64 v51; // rax
  char v52; // al
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rbx
  ULONG_PTR v58; // rax
  __int64 v59; // [rsp+30h] [rbp-49h]
  unsigned __int64 v60; // [rsp+38h] [rbp-41h] BYREF
  __int64 v61; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v62; // [rsp+48h] [rbp-31h] BYREF
  __int64 v63; // [rsp+50h] [rbp-29h]
  unsigned __int64 v64; // [rsp+58h] [rbp-21h]
  __int64 v65; // [rsp+60h] [rbp-19h]
  _KPROCESS *Process; // [rsp+68h] [rbp-11h]
  __int128 v67; // [rsp+70h] [rbp-9h] BYREF
  __int64 v68; // [rsp+80h] [rbp+7h]
  __int128 v69; // [rsp+88h] [rbp+Fh]

  v2 = BugCheckParameter2;
  v68 = 0LL;
  v3 = -1LL;
  v59 = -1LL;
  v67 = 0LL;
  v5 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v63 = *(_QWORD *)(qword_140C4E448 + 8LL * Process[1].IdealProcessorPadding[5]);
  v6 = (unsigned __int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = *v6;
  if ( (unsigned int)MiPteInShadowRange(v6)
    && (unsigned int)MiPteHasShadow(v9, v8, v10, v11)
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v6 >> 3) & 0x1FF));
      v14 = v7 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v14 = v7;
      v7 = v14;
      if ( (v13 & 0x42) != 0 )
        v7 = v14 | 0x42;
    }
  }
  v62 = v7;
  if ( (unsigned int)MiPteInShadowRange(&v62)
    && (unsigned int)MiPteHasShadow(v16, v15, v17, v18)
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v19 )
    {
      v20 = *((_QWORD *)&v19->Flink + (((unsigned __int64)&v62 >> 3) & 0x1FF));
      v21 = v7 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v21 = v7;
      v7 = v21;
      if ( (v20 & 0x42) != 0 )
        v7 = v21 | 0x42;
    }
  }
  v22 = v2;
  v65 = (v7 >> 12) & 0xFFFFFFFFFLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v24 = MI_READ_PTE_LOCK_FREE(v22);
    if ( !v24 || (v24 & 0x400) == 0 )
      return 0LL;
    v27 = v24 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v60 = v27;
    if ( (unsigned __int64)&v60 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v60 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(&v60, v25, v27, v26)
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v28 )
      {
        v29 = *((_QWORD *)&v28->Flink + (((unsigned __int64)&v60 >> 3) & 0x1FF));
        if ( (v29 & 0x20) != 0 )
          v27 |= 0x20uLL;
        if ( (v29 & 0x42) != 0 )
          v27 |= 0x42uLL;
      }
      else
      {
        v27 = v60;
      }
    }
    v30 = (v27 >> 12) & 0xFFFFFFFFFLL;
    if ( i )
    {
      if ( v30 != v5 )
        return 0LL;
    }
    if ( byte_140C51E5E && _bittest64((const signed __int64 *)qword_140C52388, (unsigned __int64)(48 * v30 / 48) >> 9)
      || (unsigned int)MI_PFN_IS_PROTO(48 * v30 - 0x58000000000LL)
      || *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v32 + 40) >> 39) & 0x3FFLL)) != v63 )
    {
      return 0LL;
    }
    v5 = v31 + 1;
    v22 += 8LL;
  }
  MiDeleteBatch(a2);
  v64 = v5 - 16;
  v33 = v5 - 16;
  v34 = 48 * (v5 - 16);
  v35 = v34 - 0x58000000000LL;
  v36 = v34 - 0x58000000000LL;
  v37 = (__int64)((unsigned __int128)(v34 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  MiSearchNumaNodeTable(v37 + (v37 >> 63));
  v69 = 0LL;
  v38 = 0;
  if ( v5 - 16 < v5 )
  {
    v39 = v5 - 16;
    v64 = v5 - 16;
    while ( 1 )
    {
      if ( v33 == v39 )
      {
        MiLockPageAtDpc(v35);
      }
      else if ( !(unsigned int)MiTryLockNestedPageAtDpcInline(v35) )
      {
        goto LABEL_53;
      }
      BugCheckParameter4 = *(_QWORD *)(v35 + 8);
      v59 = v33;
      if ( (BugCheckParameter4 | 0x8000000000000000uLL) != v2 )
      {
        v58 = MI_READ_PTE_LOCK_FREE(v2);
        KeBugCheckEx(0x1Au, 0x403uLL, v2, v58, BugCheckParameter4);
      }
      v41 = *(unsigned __int8 *)(v35 + 34);
      if ( (v41 & 7) != 6 )
        MiBadShareCount(v35);
      if ( *(_WORD *)(v35 + 32) != 1 || (*(_BYTE *)(v35 + 35) & 0x40) != 0 )
        break;
      ++v33;
      v35 += 48LL;
      v2 += 8LL;
      ++*((_DWORD *)&v69 + ((unsigned __int64)v41 >> 6));
      if ( v33 >= v5 )
      {
LABEL_53:
        v3 = v59;
        goto LABEL_55;
      }
      v39 = v5 - 16;
    }
    v3 = v33;
LABEL_55:
    v38 = v33 == v5;
  }
  if ( !v38 )
  {
    if ( v3 != -1 )
    {
      for ( j = 48 * v3 - 0x58000000000LL; j != v36; j -= 48LL )
        _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v44 = 0;
  v45 = v35;
  v46 = (__int64 *)(v2 - 128);
  v47 = v35 - 768;
  v48 = 1;
  if ( (_DWORD)v69 )
  {
    v44 = v69;
    v48 = 0;
  }
  if ( v44 < DWORD1(v69) )
  {
    v44 = DWORD1(v69);
    v48 = 1;
  }
  if ( v44 < DWORD2(v69) )
  {
    v44 = DWORD2(v69);
    v48 = 2;
  }
  v49 = v63;
  if ( v44 < HIDWORD(v69) )
    v48 = 3;
  do
  {
    v50 = (*(_QWORD *)(v47 + 40) >> 60) & 7;
    *(_WORD *)(v47 + 32) = 2;
    if ( v50 == 3 )
      MiClearPfnImageVerified(v47, 12LL);
    v61 = *(_QWORD *)(v47 + 16);
    if ( (v61 & 0x400) == 0 )
    {
      v51 = (v61 & 4) != 0 || (v61 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v61) : 0LL;
      v61 = v51;
      if ( v51 )
        MiReleasePageFileInfo(v49, v51, 0LL);
    }
    *(_QWORD *)(v47 + 16) = ZeroPte;
    if ( *(unsigned __int8 *)(v47 + 34) >> 6 != v48 )
      MiChangePageAttribute(v47, v48, 1LL);
    v52 = *(_BYTE *)(v47 + 35);
    if ( (v52 & 0x10) != 0 )
      *(_BYTE *)(v47 + 35) = v52 & 0xEF;
    MiConvertLockedSmallPageToLarge(v47, v36, 2LL);
    if ( v47 != v36 )
      _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v56 = ZeroPte;
    if ( (unsigned __int64)v46 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v46 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_95;
    if ( !(unsigned int)MiPteHasShadow(v53, ZeroPte, v54, v55) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v56 & 1) != 0 )
      {
        v56 |= 0x8000000000000000uLL;
      }
LABEL_95:
      *v46 = v56;
      goto LABEL_96;
    }
    if ( !HIBYTE(word_140C4DE08) && (v56 & 1) != 0 )
      v56 |= 0x8000000000000000uLL;
    *v46 = v56;
    MiWritePteShadow(v46, v56);
LABEL_96:
    v47 += 48LL;
    ++v46;
  }
  while ( v47 < v45 );
  *(_QWORD *)&v67 = v64;
  *((_QWORD *)&v67 + 1) = 1LL;
  LOBYTE(v68) = 2;
  MiInsertLargePageInNodeList(&v67, 2LL, v54);
  v57 = 48 * v65 - 0x58000000000LL;
  MiLockPageAtDpc(v57);
  *(_QWORD *)(v57 + 24) ^= (*(_QWORD *)(v57 + 24) ^ (*(_QWORD *)(v57 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  return 1LL;
}

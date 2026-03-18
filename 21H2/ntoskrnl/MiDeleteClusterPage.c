/*
 * XREFs of MiDeleteClusterPage @ 0x1402CC0F0
 * Callers:
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiDeleteBatch @ 0x1402C9E70 (MiDeleteBatch.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiBadShareCount @ 0x1405AD6C8 (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteClusterPage(ULONG_PTR BugCheckParameter2, unsigned __int8 *a2)
{
  ULONG_PTR v2; // r14
  __int64 v3; // r12
  unsigned __int64 v5; // r15
  __int64 v6; // r13
  ULONG_PTR v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 i; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // rsi
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // zf
  __int64 v22; // rbx
  signed __int8 v23; // al
  unsigned int v24; // ecx
  unsigned __int64 v25; // r15
  unsigned __int64 *v26; // r14
  _QWORD *v27; // rsi
  unsigned int v28; // eax
  unsigned int v29; // r13d
  volatile signed __int64 *v30; // rdi
  char v31; // al
  char v32; // al
  signed __int64 v33; // rax
  volatile signed __int64 v34; // rcx
  signed __int64 v35; // rax
  signed __int64 v36; // rax
  volatile signed __int64 v37; // rcx
  signed __int64 v38; // rax
  volatile signed __int64 v39; // rax
  char v40; // al
  unsigned __int64 v41; // rbx
  __int64 v42; // rbx
  __int64 j; // rcx
  __int64 v45; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v47; // rcx
  struct _LIST_ENTRY *v48; // r8
  __int64 v49; // rcx
  ULONG_PTR v50; // rax
  __int64 v51; // [rsp+30h] [rbp-D0h]
  __int64 v52; // [rsp+38h] [rbp-C8h] BYREF
  int v53; // [rsp+40h] [rbp-C0h] BYREF
  int v54; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+68h] [rbp-98h]
  _KPROCESS *Process; // [rsp+70h] [rbp-90h]
  __int128 v61; // [rsp+78h] [rbp-88h]
  __int128 v62; // [rsp+88h] [rbp-78h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  signed __int64 v64; // [rsp+A0h] [rbp-60h]
  __int128 v65; // [rsp+A8h] [rbp-58h]
  __int128 v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C8h] [rbp-38h]
  signed __int64 v68; // [rsp+D0h] [rbp-30h]
  __int128 v69; // [rsp+D8h] [rbp-28h]
  __int128 v70; // [rsp+E8h] [rbp-18h]
  __int128 v71; // [rsp+F8h] [rbp-8h]
  __int128 v72; // [rsp+108h] [rbp+8h]
  __int128 v73; // [rsp+118h] [rbp+18h]
  __int128 v74; // [rsp+128h] [rbp+28h]
  __int128 v75; // [rsp+138h] [rbp+38h]
  __int128 v76; // [rsp+148h] [rbp+48h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  volatile signed __int64 v78; // [rsp+160h] [rbp+60h]
  __int128 v79; // [rsp+168h] [rbp+68h] BYREF
  __int128 v80; // [rsp+178h] [rbp+78h]
  __int128 v81; // [rsp+188h] [rbp+88h]

  v2 = BugCheckParameter2;
  v79 = 0LL;
  v3 = -1LL;
  v80 = 0LL;
  v5 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = *(_QWORD *)(qword_140C51F48 + 8LL * Process[1].IdealProcessor[25]);
  v58 = v6;
  v7 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v47 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
      if ( (v47 & 0x20) != 0 )
        v8 |= 0x20uLL;
      if ( (v47 & 0x42) != 0 )
        v8 |= 0x42uLL;
    }
  }
  v56 = v8;
  v9 = v2;
  v59 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v56) >> 12) & 0xFFFFFFFFFFLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v11 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v48 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v48 )
      {
        v49 = *((_QWORD *)&v48->Flink + ((v9 >> 3) & 0x1FF));
        if ( (v49 & 0x20) != 0 )
          v11 |= 0x20uLL;
        if ( (v49 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
    }
    if ( !v11 )
      return 0LL;
    if ( (v11 & 0x400) == 0 )
      return 0LL;
    v57 = v11 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v57) >> 12) & 0xFFFFFFFFFFLL;
    if ( i )
    {
      if ( v12 != v5 )
        return 0LL;
    }
    if ( byte_140C58C66
      && _bittest64((const signed __int64 *)qword_140C58DE0, (0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v12) >> 4)) >> 9) )
    {
      return 0LL;
    }
    v13 = *(_QWORD *)(48 * v12 - 0x220000000000LL + 40);
    if ( v13 < 0 || *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v13 >> 43) & 0x3FF)) != v6 )
      return 0LL;
    v5 = v12 + 1;
    v9 += 8LL;
  }
  MiDeleteBatch(a2);
  v55 = v5 - 16;
  v14 = 48 * (v5 - 16);
  v15 = v5 - 16;
  v16 = v14 - 0x220000000000LL;
  v17 = (_QWORD *)(v14 - 0x220000000000LL);
  v51 = v14 - 0x220000000000LL;
  MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v14 >> 4));
  v81 = 0LL;
  v21 = 0;
  if ( v5 - 16 < v5 )
  {
    v55 = v5 - 16;
    v22 = v16 + 24;
    do
    {
      v23 = _interlockedbittestandset64((volatile signed __int32 *)v22, 0x3FuLL);
      if ( v15 == v5 - 16 )
      {
        v53 = 0;
        if ( v23 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v53);
            while ( *(__int64 *)v22 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0x3FuLL) );
        }
      }
      else if ( v23 )
      {
        break;
      }
      v3 = v15;
      if ( (*(_QWORD *)(v22 - 16) | 0x8000000000000000uLL) != v2 )
      {
        v50 = MI_READ_PTE_LOCK_FREE(v2);
        KeBugCheckEx(0x1Au, 0x403uLL, v2, v50, *(_QWORD *)(v16 + 8));
      }
      v24 = *(unsigned __int8 *)(v22 + 10);
      if ( (v24 & 7) != 6 )
        MiBadShareCount(v16, v18, v19, v20);
      if ( *(_WORD *)(v22 + 8) != 1 )
        break;
      if ( (*(_BYTE *)(v22 + 11) & 0x40) != 0 )
        break;
      ++v15;
      v16 += 48LL;
      v22 += 48LL;
      v2 += 8LL;
      ++*((_DWORD *)&v81 + ((unsigned __int64)v24 >> 6));
    }
    while ( v15 < v5 );
    v17 = (_QWORD *)v51;
    v21 = v15 == v5;
  }
  if ( !v21 )
  {
    if ( v3 != -1 )
    {
      for ( j = 48 * v3 - 0x220000000000LL; (_QWORD *)j != v17; j -= 48LL )
        _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v25 = v16;
  v26 = (unsigned __int64 *)(v2 - 128);
  v27 = (_QWORD *)(v16 - 768);
  v28 = 0;
  v29 = 1;
  if ( (_DWORD)v81 )
  {
    v28 = v81;
    v29 = 0;
  }
  if ( v28 < DWORD1(v81) )
  {
    v28 = DWORD1(v81);
    v29 = 1;
  }
  if ( v28 < DWORD2(v81) )
  {
    v28 = DWORD2(v81);
    v29 = 2;
  }
  v30 = v27 + 5;
  if ( v28 < HIDWORD(v81) )
    v29 = 3;
  do
  {
    v31 = ((unsigned __int64)*v30 >> 60) & 7;
    *((_WORD *)v30 - 4) = 2;
    if ( v31 == 3 )
      MiClearPfnImageVerified((ULONG_PTR)v27, 12);
    v52 = *((_QWORD *)v30 - 3);
    if ( (v52 & 0x400) == 0 )
    {
      if ( (v52 & 4) != 0 || (v52 & 2) != 0 )
      {
        v45 = MI_READ_PTE_LOCK_FREE(&v52);
        v52 = v45;
        if ( v45 )
          MiReleasePageFileInfo(v58, v45, 0LL);
      }
      else
      {
        v52 = 0LL;
      }
    }
    *((_QWORD *)v30 - 3) = ZeroPte;
    if ( *((unsigned __int8 *)v30 - 6) >> 6 != v29 )
      MiChangePageAttribute((__int64)v27, v29, 1);
    v32 = *((_BYTE *)v30 - 5);
    if ( (v32 & 0x10) != 0 )
    {
      *((_BYTE *)v30 - 5) = v32 & 0xEF;
      v32 = *((_BYTE *)v30 - 5);
    }
    if ( *(__int64 *)v30 < 0 )
      *v30 &= ~0x8000000000000000uLL;
    *((_BYTE *)v30 - 5) = v32 & 0xF8;
    v33 = *v30;
    v34 = *v30;
    v63 = 0LL;
    v64 = v33;
    v61 = 0LL;
    v62 = 0LL;
    v69 = 0LL;
    v70 = 0LL;
    v71 = 0LL;
    v35 = _InterlockedCompareExchange64(v30, v34 & 0x8FFFFFFFFFFFFFFFuLL, v33);
    for ( *((_QWORD *)&v71 + 1) = v35; v64 != v35; *((_QWORD *)&v71 + 1) = v35 )
    {
      v64 = v35;
      v35 = _InterlockedCompareExchange64(v30, v35 & 0x8FFFFFFFFFFFFFFFuLL, v35);
    }
    *v27 = 0LL;
    *((_QWORD *)v30 - 4) = 0LL;
    *((_QWORD *)v30 - 3) = 0LL;
    v36 = *v30;
    v37 = *v30;
    v67 = 0LL;
    v68 = v36;
    v65 = 0LL;
    v66 = 0LL;
    v72 = 0LL;
    v73 = 0LL;
    v74 = 0LL;
    v38 = _InterlockedCompareExchange64(v30, v37 & 0xFFFFFF0000000000uLL, v36);
    for ( *((_QWORD *)&v74 + 1) = v38; v68 != v38; *((_QWORD *)&v74 + 1) = v38 )
    {
      v68 = v38;
      v38 = _InterlockedCompareExchange64(v30, v38 & 0xFFFFFF0000000000uLL, v38);
    }
    v39 = *v30;
    *((_QWORD *)v30 - 2) &= ~0x4000000000000000uLL;
    v39 |= 0x10000000000uLL;
    v77 = 0LL;
    v78 = v39;
    *((_QWORD *)v30 - 4) = 0LL;
    v75 = 0LL;
    v76 = 0LL;
    *v30 = v39;
    v40 = *((_BYTE *)v30 - 4) & 0xFC;
    if ( v27 == v17 )
      v40 |= 1u;
    *((_BYTE *)v30 - 4) = v40;
    *((_BYTE *)v30 - 6) &= ~0x10u;
    if ( v27 != v17 )
      _InterlockedAnd64(v30 - 2, 0x7FFFFFFFFFFFFFFFuLL);
    v41 = ZeroPte;
    if ( !(unsigned int)MiPteInShadowRange(v26) )
      goto LABEL_51;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v41 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_51:
      *v26 = v41;
      goto LABEL_52;
    }
    if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
      v41 = ZeroPte | 0x8000000000000000uLL;
    *v26 = v41;
    MiWritePteShadow((__int64)v26, v41);
LABEL_52:
    v17 = (_QWORD *)v51;
    v27 += 6;
    v30 += 6;
    ++v26;
  }
  while ( (unsigned __int64)v27 < v25 );
  *(_QWORD *)&v79 = v55;
  *((_QWORD *)&v79 + 1) = 1LL;
  LOBYTE(v80) = 2;
  MiInsertLargePageInNodeList((__int64)&v79);
  v42 = 48 * v59 - 0x220000000000LL;
  v54 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v54);
    while ( *(__int64 *)(v42 + 24) < 0 );
  }
  *(_QWORD *)(v42 + 24) ^= (*(_QWORD *)(v42 + 24) ^ (*(_QWORD *)(v42 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  return 1LL;
}

/*
 * XREFs of MiReplacePageTablePage @ 0x1403047BC
 * Callers:
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x140384D68 (MmStealTopLevelPage.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiIsPdeOrAboveAccessible @ 0x140320C30 (MiIsPdeOrAboveAccessible.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

unsigned __int64 __fastcall MiReplacePageTablePage(unsigned __int64 a1)
{
  __int64 v2; // r12
  int v3; // r15d
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // r13
  unsigned __int64 v10; // rcx
  int v11; // r10d
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v13; // r11
  int SystemRegionType; // eax
  unsigned __int64 v15; // r14
  __int64 *v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // r13d
  __int64 v36; // rbx
  unsigned __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdi
  __int64 v41; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v43; // rax
  int v44; // [rsp+20h] [rbp-E0h]
  int v45; // [rsp+24h] [rbp-DCh]
  int v46; // [rsp+28h] [rbp-D8h]
  int v47; // [rsp+2Ch] [rbp-D4h]
  int v48; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+48h] [rbp-B8h]
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 *v53; // [rsp+58h] [rbp-A8h]
  int v54; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v55; // [rsp+68h] [rbp-98h]
  unsigned __int64 v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h]
  _QWORD v61[24]; // [rsp+A0h] [rbp-60h] BYREF

  v55 = a1;
  memset(v61, 0, 0xB8uLL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(__int64 **)(a1 + 16);
  *(_DWORD *)(a1 + 56) = -1073741823;
  v56 = v4;
  v52 = v2;
  v57 = v5;
  v53 = v6;
  v50 = v2;
  v7 = 48 * v2 - 0x58000000000LL;
  v8 = *(_DWORD *)(a1 + 60);
  v9 = 48 * v5 - 0x58000000000LL;
  v45 = 0;
  v44 = 0;
  v47 = 0;
  v60 = v9;
  v46 = 0;
  if ( v8 == 1 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 1928LL);
    if ( !v10 )
      return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v9 + 16));
    v59 = MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v59) >> 12) & 0xFFFFFFFFFLL) != v2 )
      return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v9 + 16));
  }
  v11 = 1;
  if ( (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL) == v2 )
  {
    v51 = 1;
    if ( v8 == 1 )
      v50 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 12;
  }
  else
  {
    v51 = 0;
    LeafVa = MiGetLeafVa(v4);
    if ( LeafVa > 0x7FFFFFFEFFFFLL
      && (LeafVa < qword_140C4FA78 || LeafVa > qword_140C4E2A8)
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > v13) )
    {
      SystemRegionType = MiGetSystemRegionType(LeafVa);
      v11 = 0;
      if ( SystemRegionType == 1 )
        v11 = 2;
    }
  }
  v61[2] = 0LL;
  v61[3] = 0LL;
  v15 = v4;
  v16 = v53;
  v58 = -(__int64)v4;
  LODWORD(v61[0]) = v11;
  WORD2(v61[0]) = 0;
  LODWORD(v61[1]) = 20;
  do
  {
    while ( 1 )
    {
      v17 = MI_READ_PTE_LOCK_FREE(v15);
      v49 = v17;
      v21 = v17;
      if ( (v17 & 1) != 0 )
        break;
      v18 = v17;
      if ( (v17 & 0x400) != 0 || (v17 & 0x800) == 0 )
        goto LABEL_35;
      v22 = (__int64)(v15 << 25) >> 16;
      if ( v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL && !(unsigned int)MiIsPdeOrAboveAccessible(v15) )
        goto LABEL_84;
      v23 = MiLockTransitionLeafPage(v15, (_BYTE *)(v3 != 0));
      if ( v23 )
      {
        v21 = MI_READ_PTE_LOCK_FREE(v15);
        v49 = v21;
        v24 = *(_QWORD *)(v23 + 40);
        v19 = 0xFFFFFFFFFLL;
        v18 = v21;
        if ( (v24 & 0xFFFFFFFFFLL) != v50 && (v24 & 0x1000000000LL) != 0 )
          ++v47;
        if ( (*(_BYTE *)(v23 + 34) & 0x20) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_84;
        }
        ++v3;
        goto LABEL_35;
      }
    }
    ++v45;
    if ( (v17 & 0x80u) != 0LL )
      goto LABEL_32;
    v25 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v49) >> 12) & 0xFFFFFFFFFLL;
    if ( v25 != qword_140C4ECA8 )
    {
      v18 = *(_QWORD *)(48 * v25 - 0x57FFFFFFFD8LL);
      if ( ((v18 >> 50) & 1) == 0 || (v18 & 0x1000000000LL) == 0 )
        goto LABEL_33;
LABEL_32:
      ++v44;
      goto LABEL_33;
    }
    ++v46;
LABEL_33:
    if ( v50 == v52 )
      goto LABEL_37;
    v21 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v55 + 64) + 8 * ((__int64)(v15 + v58) >> 3));
    v49 = v21;
    v18 = v21;
LABEL_35:
    if ( v50 != v52 )
    {
      LOBYTE(v18) = -(v18 & 1);
      v21 &= -(__int64)((_BYTE)v18 != 0);
      v49 = v21;
    }
LABEL_37:
    *v16 = v21;
    v15 += 8LL;
    ++v16;
  }
  while ( (v15 & 0xFFF) != 0 );
  if ( v3 )
  {
    MiLockNestedPageAtDpcInline(v7, v18, v19, v20);
  }
  else
  {
    v54 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v54, v18, v19, v20);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  v26 = *(_QWORD *)(v7 + 24);
  v27 = v26 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v51 || (unsigned __int16)v26 == (unsigned __int64)(unsigned int)(v3 - v46 - v47 - v44 + v45 + 1))
    && *(_WORD *)(v7 + 32) == 1
    && v27 < 0x10000 )
  {
    MiLockNestedPageAtDpcInline(v9, v26, v19, v20);
    *(_QWORD *)(v9 + 24) = v27 | *(_QWORD *)(v9 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v29 = v56;
    v30 = v56;
    if ( v3 )
    {
      v31 = v52;
      v32 = v57;
      do
      {
        v33 = MI_READ_PTE_LOCK_FREE(v30);
        if ( (v33 & 1) == 0 && (v33 & 0x400) == 0 && (v33 & 0x800) != 0 )
        {
          if ( qword_140C4DE80 && (v33 & 0x10) == 0 )
            v33 &= ~qword_140C4DE80;
          v34 = 48 * ((v33 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v28 = *(_QWORD *)(v34 + 40);
          if ( (v28 & 0xFFFFFFFFFLL) == v50 && v50 == v31 )
            *(_QWORD *)(v34 + 40) = v28 ^ (v32 ^ v28) & 0xFFFFFFFFFLL;
          --v3;
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v30 += 8LL;
      }
      while ( v3 );
      v29 = v56;
    }
    v35 = v45;
    if ( v45 )
    {
      v53 = (__int64 *)((char *)v53 - v29);
      do
      {
        v49 = MI_READ_PTE_LOCK_FREE(v29);
        v36 = v49;
        if ( (v49 & 1) != 0 )
        {
          --v35;
          v37 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v49) >> 12) & 0xFFFFFFFFFLL;
          v40 = 48 * v37;
          v28 = (*(_QWORD *)(48 * v37 - 0x57FFFFFFFD8LL) >> 50) & 1LL;
          v41 = v50;
          if ( ((*(_QWORD *)(48 * v37 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 && v37 != v50 )
          {
            v48 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 - 0x58000000000LL + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v48, v28, v38, v39);
              while ( *(__int64 *)(v40 - 0x58000000000LL + 24) < 0 );
            }
            v28 = 0xFFFFFFFFFLL;
            if ( (*(_QWORD *)(v40 - 0x58000000000LL + 40) & 0xFFFFFFFFFLL) == v41 && v41 == v52 )
              *(_QWORD *)(v40 - 0x58000000000LL + 40) ^= (v57 ^ *(_QWORD *)(v40 - 0x58000000000LL + 40)) & 0xFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v40 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v36 = v49;
          }
          if ( v41 != v52 )
            v36 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v55 + 64) + 8 * ((__int64)(v29 + v58) >> 3));
          if ( (v36 & 1) != 0 )
          {
            MiWriteValidPteNewProtection((unsigned __int64)v53 + v29, v36 | 0x20);
            if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
              MiInsertTbFlushEntry((__int64)v61, (__int64)(v29 << 25) >> 16, 1LL, 0);
          }
        }
        v29 += 8LL;
      }
      while ( v35 );
    }
    MiFlushTbList((__int64)v61, (_KPROCESS *)v28);
    result = v55;
    *(_DWORD *)(v55 + 56) = 0;
    return result;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_84:
  if ( v3 )
  {
    do
    {
      v15 -= 8LL;
      v43 = MI_READ_PTE_LOCK_FREE(v15);
      if ( (v43 & 1) == 0 && (v43 & 0x400) == 0 && (v43 & 0x800) != 0 )
      {
        if ( qword_140C4DE80 && (v43 & 0x10) == 0 )
          v43 &= ~qword_140C4DE80;
        --v3;
        _InterlockedAnd64(
          (volatile signed __int64 *)(48 * ((v43 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL),
          0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    while ( v3 );
    v9 = v60;
  }
  return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v9 + 16));
}

/*
 * XREFs of MiReplacePageTablePage @ 0x14034221C
 * Callers:
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x140385CD8 (MmStealTopLevelPage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     MiIsPdeOrAboveAccessible @ 0x14035E7A0 (MiIsPdeOrAboveAccessible.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

unsigned __int64 __fastcall MiReplacePageTablePage(unsigned __int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // r12
  int v4; // r15d
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // r13
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // r10d
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v16; // r11
  int SystemRegionType; // eax
  unsigned __int64 v18; // r14
  __int64 *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rbx
  __int64 v30; // r12
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // r13d
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v42; // rax
  int v43; // [rsp+20h] [rbp-E0h]
  int v44; // [rsp+24h] [rbp-DCh]
  int v45; // [rsp+28h] [rbp-D8h]
  int v46; // [rsp+2Ch] [rbp-D4h]
  int v47; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+48h] [rbp-B8h]
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __int64 *v52; // [rsp+58h] [rbp-A8h]
  int v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-98h]
  unsigned __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  __int64 v57; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  __int64 v59; // [rsp+90h] [rbp-70h]
  _QWORD v60[24]; // [rsp+A0h] [rbp-60h] BYREF

  v54 = a1;
  memset(v60, 0, 0xB8uLL);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(__int64 **)(a1 + 16);
  *(_DWORD *)(a1 + 56) = -1073741823;
  v55 = v5;
  v51 = v3;
  v56 = v6;
  v52 = v7;
  v49 = v3;
  v8 = 48 * v3 - 0x58000000000LL;
  v9 = *(_DWORD *)(a1 + 60);
  v10 = 48 * v6 - 0x58000000000LL;
  v44 = 0;
  v11 = 0LL;
  v43 = 0;
  v46 = 0;
  v59 = v10;
  v45 = 0;
  v12 = 0xFFFFF68000000000uLL;
  if ( v9 == 1 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 1928LL);
    if ( !v13 )
      return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v10 + 16), v12, v11, v2);
    v58 = MI_READ_PTE_LOCK_FREE(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v58) >> 12) & 0xFFFFFFFFFLL) != v3 )
      return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v10 + 16), v12, v11, v2);
  }
  v14 = 1;
  if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v3 )
  {
    v50 = 1;
    if ( v9 == 1 )
      v49 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 12;
  }
  else
  {
    v50 = 0;
    LeafVa = MiGetLeafVa(v5);
    if ( LeafVa > 0x7FFFFFFEFFFFLL
      && (LeafVa < qword_140C4F938 || LeafVa > qword_140C4E168)
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > v16) )
    {
      SystemRegionType = MiGetSystemRegionType(LeafVa);
      v14 = 0;
      if ( SystemRegionType == 1 )
        v14 = 2;
    }
  }
  v60[2] = 0LL;
  v60[3] = 0LL;
  v18 = v5;
  v19 = v52;
  v57 = -(__int64)v5;
  LODWORD(v60[0]) = v14;
  WORD2(v60[0]) = 0;
  LODWORD(v60[1]) = 20;
  do
  {
    while ( 1 )
    {
      v20 = MI_READ_PTE_LOCK_FREE(v18);
      v48 = v20;
      v21 = v20;
      if ( (v20 & 1) != 0 )
        break;
      v12 = v20;
      if ( (v20 & 0x400) != 0 || (v20 & 0x800) == 0 )
        goto LABEL_35;
      v22 = (__int64)(v18 << 25) >> 16;
      if ( v22 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL && !(unsigned int)MiIsPdeOrAboveAccessible(v18) )
        goto LABEL_84;
      v23 = MiLockTransitionLeafPage(v18, (_BYTE *)(v4 != 0));
      if ( v23 )
      {
        v21 = MI_READ_PTE_LOCK_FREE(v18);
        v48 = v21;
        v24 = *(_QWORD *)(v23 + 40);
        v11 = 0xFFFFFFFFFLL;
        v12 = v21;
        if ( (v24 & 0xFFFFFFFFFLL) != v49 && (v24 & 0x1000000000LL) != 0 )
          ++v46;
        if ( (*(_BYTE *)(v23 + 34) & 0x20) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_84;
        }
        ++v4;
        goto LABEL_35;
      }
    }
    ++v44;
    if ( (v20 & 0x80u) != 0LL )
      goto LABEL_32;
    v25 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48) >> 12) & 0xFFFFFFFFFLL;
    if ( v25 != qword_140C4EB68 )
    {
      v12 = *(_QWORD *)(48 * v25 - 0x57FFFFFFFD8LL);
      if ( ((v12 >> 50) & 1) == 0 || (v12 & 0x1000000000LL) == 0 )
        goto LABEL_33;
LABEL_32:
      ++v43;
      goto LABEL_33;
    }
    ++v45;
LABEL_33:
    if ( v49 == v51 )
      goto LABEL_37;
    v21 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v54 + 64) + 8 * ((__int64)(v18 + v57) >> 3));
    v48 = v21;
    v12 = v21;
LABEL_35:
    if ( v49 != v51 )
    {
      LOBYTE(v12) = -(v12 & 1);
      v21 &= -(__int64)((_BYTE)v12 != 0);
      v48 = v21;
    }
LABEL_37:
    *v19 = v21;
    v18 += 8LL;
    ++v19;
  }
  while ( (v18 & 0xFFF) != 0 );
  if ( v4 )
  {
    MiLockNestedPageAtDpcInline(v8, v12, v11, v2);
  }
  else
  {
    v53 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v53, v12, v11, v2);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  v12 = *(_QWORD *)(v8 + 24);
  v26 = v12 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v50 || (unsigned __int16)v12 == (unsigned __int64)(unsigned int)(v4 - v45 - v46 - v43 + v44 + 1))
    && *(_WORD *)(v8 + 32) == 1
    && v26 < 0x10000 )
  {
    MiLockNestedPageAtDpcInline(v10, v12, v11, v2);
    *(_QWORD *)(v10 + 24) = v26 | *(_QWORD *)(v10 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v28 = v55;
    v29 = v55;
    if ( v4 )
    {
      v30 = v51;
      v31 = v56;
      do
      {
        v32 = MI_READ_PTE_LOCK_FREE(v29);
        if ( (v32 & 1) == 0 && (v32 & 0x400) == 0 && (v32 & 0x800) != 0 )
        {
          if ( qword_140C4DD40 && (v32 & 0x10) == 0 )
            v32 &= ~qword_140C4DD40;
          v33 = 48 * ((v32 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v27 = *(_QWORD *)(v33 + 40);
          if ( (v27 & 0xFFFFFFFFFLL) == v49 && v49 == v30 )
            *(_QWORD *)(v33 + 40) = v27 ^ (v31 ^ v27) & 0xFFFFFFFFFLL;
          --v4;
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v29 += 8LL;
      }
      while ( v4 );
      v28 = v55;
    }
    v34 = v44;
    if ( v44 )
    {
      v52 = (__int64 *)((char *)v52 - v28);
      do
      {
        v48 = MI_READ_PTE_LOCK_FREE(v28);
        v35 = v48;
        if ( (v48 & 1) != 0 )
        {
          --v34;
          v36 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48) >> 12) & 0xFFFFFFFFFLL;
          v39 = 48 * v36;
          v27 = (*(_QWORD *)(48 * v36 - 0x57FFFFFFFD8LL) >> 50) & 1LL;
          v40 = v49;
          if ( ((*(_QWORD *)(48 * v36 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 && v36 != v49 )
          {
            v47 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 - 0x58000000000LL + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v47, v27, v37, v38);
              while ( *(__int64 *)(v39 - 0x58000000000LL + 24) < 0 );
            }
            v27 = 0xFFFFFFFFFLL;
            if ( (*(_QWORD *)(v39 - 0x58000000000LL + 40) & 0xFFFFFFFFFLL) == v40 && v40 == v51 )
              *(_QWORD *)(v39 - 0x58000000000LL + 40) ^= (v56 ^ *(_QWORD *)(v39 - 0x58000000000LL + 40)) & 0xFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v39 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v35 = v48;
          }
          if ( v40 != v51 )
            v35 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v54 + 64) + 8 * ((__int64)(v28 + v57) >> 3));
          if ( (v35 & 1) != 0 )
          {
            MiWriteValidPteNewProtection((unsigned __int64)v52 + v28, v35 | 0x20);
            if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
              MiInsertTbFlushEntry((__int64)v60, (__int64)(v28 << 25) >> 16, 1LL, 0);
          }
        }
        v28 += 8LL;
      }
      while ( v34 );
    }
    MiFlushTbList((__int64)v60, (_KPROCESS *)v27);
    result = v54;
    *(_DWORD *)(v54 + 56) = 0;
    return result;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_84:
  if ( v4 )
  {
    do
    {
      v18 -= 8LL;
      v42 = MI_READ_PTE_LOCK_FREE(v18);
      if ( (v42 & 1) == 0 && (v42 & 0x400) == 0 && (v42 & 0x800) != 0 )
      {
        if ( qword_140C4DD40 && (v42 & 0x10) == 0 )
          v42 &= ~qword_140C4DD40;
        --v4;
        _InterlockedAnd64(
          (volatile signed __int64 *)(48 * ((v42 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL),
          0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    while ( v4 );
    v10 = v59;
  }
  return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v10 + 16), v12, v11, v2);
}

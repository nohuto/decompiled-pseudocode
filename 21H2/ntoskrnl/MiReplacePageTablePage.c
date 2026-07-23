/*
 * XREFs of MiReplacePageTablePage @ 0x140224260
 * Callers:
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x140388728 (MmStealTopLevelPage.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiIsPdeOrAboveAccessible @ 0x14024F5C0 (MiIsPdeOrAboveAccessible.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiReplacePageTablePage(__int64 a1)
{
  __int64 v2; // r12
  int v3; // r15d
  ULONG_PTR v4; // rsi
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int v12; // r10d
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v14; // r11
  int SystemRegionType; // eax
  ULONG_PTR v16; // r14
  __int64 *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  ULONG_PTR v26; // r12
  ULONG_PTR v27; // rbx
  __int64 v28; // r12
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // r13d
  __int64 v33; // rbx
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r14
  __int64 result; // rax
  unsigned __int64 v38; // rax
  int v39; // [rsp+20h] [rbp-E0h]
  int v40; // [rsp+24h] [rbp-DCh]
  int v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+2Ch] [rbp-D4h]
  int v43; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+48h] [rbp-B8h]
  __int64 v47; // [rsp+50h] [rbp-B0h]
  __int64 *v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+68h] [rbp-98h]
  ULONG_PTR v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h]
  _QWORD v56[24]; // [rsp+A0h] [rbp-60h] BYREF

  v50 = a1;
  memset(v56, 0, 0xB8uLL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(__int64 **)(a1 + 16);
  *(_DWORD *)(a1 + 56) = -1073741823;
  v51 = v4;
  v47 = v2;
  v52 = v5;
  v48 = v6;
  v45 = v2;
  v7 = 48 * v2 - 0x58000000000LL;
  v8 = *(_DWORD *)(a1 + 60);
  v9 = 48 * v5 - 0x58000000000LL;
  v40 = 0;
  v39 = 0;
  v42 = 0;
  v55 = v9;
  v41 = 0;
  v10 = 0xFFFFF68000000000uLL;
  if ( v8 == 1 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 1928LL);
    if ( !v11 )
      return MiSetOriginalPtePfnFromFreeList(v9 + 16, v10);
    v54 = MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v54) >> 12) & 0xFFFFFFFFFLL) != v2 )
      return MiSetOriginalPtePfnFromFreeList(v9 + 16, v10);
  }
  v12 = 1;
  if ( (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL) == v2 )
  {
    v46 = 1;
    if ( v8 == 1 )
      v45 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 12;
  }
  else
  {
    v46 = 0;
    LeafVa = MiGetLeafVa(v4);
    if ( LeafVa > 0x7FFFFFFEFFFFLL
      && (LeafVa < qword_140C4FB78 || LeafVa > qword_140C4E3A8)
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > v14) )
    {
      SystemRegionType = MiGetSystemRegionType(LeafVa);
      v12 = 0;
      if ( SystemRegionType == 1 )
        v12 = 2;
    }
  }
  v56[2] = 0LL;
  v56[3] = 0LL;
  v16 = v4;
  v17 = v48;
  v53 = -(__int64)v4;
  LODWORD(v56[0]) = v12;
  WORD2(v56[0]) = 0;
  LODWORD(v56[1]) = 20;
  do
  {
    while ( 1 )
    {
      v18 = MI_READ_PTE_LOCK_FREE(v16);
      v44 = v18;
      v19 = v18;
      if ( (v18 & 1) != 0 )
        break;
      LOBYTE(v10) = v18;
      if ( (v18 & 0x400) != 0 || (v18 & 0x800) == 0 )
        goto LABEL_35;
      v20 = (__int64)(v16 << 25) >> 16;
      if ( v20 >= 0xFFFFF68000000000uLL && v20 <= 0xFFFFF6FFFFFFFFFFuLL && !(unsigned int)MiIsPdeOrAboveAccessible(v16) )
        goto LABEL_84;
      v21 = MiLockTransitionLeafPage(v16);
      if ( v21 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(v16);
        v44 = v19;
        v22 = *(_QWORD *)(v21 + 40);
        v10 = v19;
        if ( (v22 & 0xFFFFFFFFFLL) != v45 && (v22 & 0x1000000000LL) != 0 )
          ++v42;
        if ( (*(_BYTE *)(v21 + 34) & 0x20) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_84;
        }
        ++v3;
        goto LABEL_35;
      }
    }
    ++v40;
    if ( (v18 & 0x80u) != 0LL )
      goto LABEL_32;
    v23 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v44) >> 12) & 0xFFFFFFFFFLL;
    if ( v23 != qword_140C4EDA8 )
    {
      v24 = *(_QWORD *)(48 * v23 - 0x57FFFFFFFD8LL);
      if ( ((v24 >> 50) & 1) == 0 || (v24 & 0x1000000000LL) == 0 )
        goto LABEL_33;
LABEL_32:
      ++v39;
      goto LABEL_33;
    }
    ++v41;
LABEL_33:
    if ( v45 == v47 )
      goto LABEL_37;
    v19 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v50 + 64) + 8 * ((__int64)(v16 + v53) >> 3));
    v44 = v19;
    LOBYTE(v10) = v19;
LABEL_35:
    if ( v45 != v47 )
    {
      v19 &= -(__int64)((v10 & 1) != 0);
      v44 = v19;
    }
LABEL_37:
    *v17 = v19;
    v16 += 8LL;
    ++v17;
  }
  while ( (v16 & 0xFFF) != 0 );
  if ( v3 )
  {
    MiLockNestedPageAtDpcInline(v7);
  }
  else
  {
    v49 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v49);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  v10 = *(_QWORD *)(v7 + 24);
  v25 = v10 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v46 || (unsigned __int16)v10 == (unsigned __int64)(unsigned int)(v3 - v41 - v42 - v39 + v40 + 1))
    && *(_WORD *)(v7 + 32) == 1
    && v25 < 0x10000 )
  {
    MiLockNestedPageAtDpcInline(v9);
    *(_QWORD *)(v9 + 24) = v25 | *(_QWORD *)(v9 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v26 = v51;
    v27 = v51;
    if ( v3 )
    {
      v28 = v47;
      v29 = v52;
      do
      {
        v30 = MI_READ_PTE_LOCK_FREE(v27);
        if ( (v30 & 1) == 0 && (v30 & 0x400) == 0 && (v30 & 0x800) != 0 )
        {
          if ( qword_140C4DF80 && (v30 & 0x10) == 0 )
            v30 &= ~qword_140C4DF80;
          v31 = 48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) == v45 && v45 == v28 )
            *(_QWORD *)(v31 + 40) ^= (v29 ^ *(_QWORD *)(v31 + 40)) & 0xFFFFFFFFFLL;
          --v3;
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v27 += 8LL;
      }
      while ( v3 );
      v26 = v51;
    }
    v32 = v40;
    if ( v40 )
    {
      v48 = (__int64 *)((char *)v48 - v26);
      do
      {
        v44 = MI_READ_PTE_LOCK_FREE(v26);
        v33 = v44;
        if ( (v44 & 1) != 0 )
        {
          --v32;
          v34 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v44) >> 12) & 0xFFFFFFFFFLL;
          v35 = 48 * v34;
          v36 = v45;
          if ( ((*(_QWORD *)(48 * v34 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 && v34 != v45 )
          {
            v43 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 - 0x58000000000LL + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v43);
              while ( *(__int64 *)(v35 - 0x58000000000LL + 24) < 0 );
            }
            if ( (*(_QWORD *)(v35 - 0x58000000000LL + 40) & 0xFFFFFFFFFLL) == v36 && v36 == v47 )
              *(_QWORD *)(v35 - 0x58000000000LL + 40) ^= (v52 ^ *(_QWORD *)(v35 - 0x58000000000LL + 40)) & 0xFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v35 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v33 = v44;
          }
          if ( v36 != v47 )
            v33 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v50 + 64) + 8 * ((__int64)(v26 + v53) >> 3));
          if ( (v33 & 1) != 0 )
          {
            MiWriteValidPteNewProtection((char *)v48 + v26, v33 | 0x20);
            if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
              MiInsertTbFlushEntry(v56, (__int64)(v26 << 25) >> 16, 1LL, 0LL);
          }
        }
        v26 += 8LL;
      }
      while ( v32 );
    }
    MiFlushTbList(v56);
    result = v50;
    *(_DWORD *)(v50 + 56) = 0;
    return result;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_84:
  if ( v3 )
  {
    do
    {
      v16 -= 8LL;
      v38 = MI_READ_PTE_LOCK_FREE(v16);
      if ( (v38 & 1) == 0 && (v38 & 0x400) == 0 && (v38 & 0x800) != 0 )
      {
        if ( qword_140C4DF80 && (v38 & 0x10) == 0 )
          v38 &= ~qword_140C4DF80;
        --v3;
        _InterlockedAnd64(
          (volatile signed __int64 *)(48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL),
          0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    while ( v3 );
    v9 = v55;
  }
  return MiSetOriginalPtePfnFromFreeList(v9 + 16, v10);
}

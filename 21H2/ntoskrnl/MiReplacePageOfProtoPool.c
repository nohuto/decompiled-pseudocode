/*
 * XREFs of MiReplacePageOfProtoPool @ 0x140256EFC
 * Callers:
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 * Callees:
 *     MiGetPrototypePteRanges @ 0x140248878 (MiGetPrototypePteRanges.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeCopyPage @ 0x140403030 (KeCopyPage.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r15d
  unsigned int m; // r14d
  int v8; // esi
  char *v9; // rdi
  unsigned int v10; // r9d
  unsigned int v11; // eax
  unsigned int v12; // r11d
  unsigned int v13; // ecx
  char *v14; // rdx
  __int64 j; // r8
  unsigned __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rdi
  unsigned int v19; // ebx
  signed __int32 *v20; // rdx
  int v21; // r8d
  int v22; // r9d
  unsigned int k; // eax
  int v24; // ebx
  _QWORD *v25; // rsi
  _QWORD *v26; // r12
  __int64 v27; // rax
  char v28; // r15
  bool v29; // zf
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rsi
  unsigned __int64 v33; // rsi
  unsigned int v34; // edi
  unsigned int v35; // r10d
  char *v36; // r12
  unsigned __int64 v37; // r13
  unsigned int v38; // r9d
  unsigned int v39; // eax
  unsigned int v40; // ebx
  unsigned int v41; // ecx
  char *v42; // rdx
  __int64 n; // r8
  unsigned __int64 v44; // rax
  unsigned int v45; // edx
  __int64 v46; // rsi
  unsigned __int64 v47; // rbx
  __int64 v48; // rbx
  signed __int32 *v50; // rdx
  unsigned int SizeOfBitMap; // eax
  unsigned int v52; // eax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int v54; // [rsp+20h] [rbp-B9h]
  int v55; // [rsp+28h] [rbp-B1h]
  int v56; // [rsp+30h] [rbp-A9h] BYREF
  int v57; // [rsp+34h] [rbp-A5h]
  char *i; // [rsp+38h] [rbp-A1h]
  unsigned __int64 v59; // [rsp+40h] [rbp-99h]
  __int64 v60; // [rsp+48h] [rbp-91h] BYREF
  __int64 v61; // [rsp+50h] [rbp-89h]
  _RTL_BITMAP v62; // [rsp+58h] [rbp-81h] BYREF
  __int64 v63; // [rsp+68h] [rbp-71h]
  __int128 v64; // [rsp+70h] [rbp-69h]
  __int128 v65; // [rsp+80h] [rbp-59h]
  __int128 v66; // [rsp+90h] [rbp-49h]
  signed __int32 v67[16]; // [rsp+A0h] [rbp-39h] BYREF

  *(&v62.SizeOfBitMap + 1) = 0;
  v63 = a2;
  v61 = a3;
  v59 = a1;
  v62.Buffer = (unsigned int *)v67;
  v62.SizeOfBitMap = 512;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  memset(v67, 0, sizeof(v67));
  if ( !(unsigned int)MiGetPrototypePteRanges(a1, &v62) )
    return 0LL;
  v6 = 0;
  KeCopyPage(a4, a1);
  m = 0;
  v8 = (((unsigned __int8)((unsigned __int8)&v67[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
  v55 = v8;
  v9 = (char *)v67 - ((((unsigned __int8)((unsigned __int8)&v67[14] + 1) - 57) & 4) != 0LL ? 4 : 0);
  for ( i = v9; ; v9 = i )
  {
    v10 = m < v62.SizeOfBitMap ? m : 0;
    v11 = v62.SizeOfBitMap - 1;
    while ( 1 )
    {
      v12 = v8 + v11;
      v13 = v8 + v10;
      if ( v11 - v10 == -1 )
        goto LABEL_44;
      v14 = &v9[8 * ((unsigned __int64)v13 >> 6)];
      for ( j = ~*(_QWORD *)v14 | ((1LL << (v13 & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v14 )
      {
        v14 += 8;
        if ( v14 > &v9[8 * ((unsigned __int64)v12 >> 6)] )
          goto LABEL_44;
      }
      _BitScanForward64(&v16, ~j);
      v17 = v16 + ((unsigned int)((v14 - v9) >> 3) << 6);
      if ( v17 > v12 )
      {
LABEL_44:
        v17 = -1;
      }
      else if ( v17 != -1 )
      {
        break;
      }
      if ( !v10 )
        break;
      SizeOfBitMap = m + 1;
      if ( m + 1 > v62.SizeOfBitMap )
        SizeOfBitMap = v62.SizeOfBitMap;
      v11 = SizeOfBitMap - 1;
      v10 = 0;
    }
    v18 = v17 - v8;
    if ( v17 == -1 )
      v18 = 0xFFFFFFFFLL;
    if ( (unsigned int)v18 < m || (_DWORD)v18 == -1 )
      break;
    if ( (unsigned int)v18 < 0x200 )
    {
      v19 = v18;
      v20 = &v67[(unsigned __int64)(unsigned int)v18 >> 5];
      if ( v20 != &v67[15] && (*v20 | *((_DWORD *)qword_140012120 + (v18 & 0x1F))) == 0xFFFFFFFF )
      {
        v19 = v18 - (v18 & 0x1F) + 32;
        for ( ++v20; v20 < &v67[15] && *v20 == -1; ++v20 )
          v19 += 32;
      }
      while ( v19 < 0x200 && _bittest(v67, v19) )
        ++v19;
      v21 = 0;
      if ( v20 == &v67[15] )
        goto LABEL_27;
      v22 = v19 & 0x1F;
      if ( (*v20 & ~*((_DWORD *)qword_140012120 + (v19 & 0x1F))) != 0 )
        goto LABEL_27;
      v21 = 32 - v22;
      if ( v22 != 33 )
      {
        v50 = v20 + 1;
        while ( v50 < &v67[15] && !*v50 )
        {
          ++v50;
          v21 += 32;
          if ( v21 == -1 )
            goto LABEL_32;
        }
LABEL_27:
        for ( k = v21 + v19; k < 0x200 && !_bittest(v67, k) && v21 != -1; ++k )
          ++v21;
      }
LABEL_32:
      if ( v21 )
        goto LABEL_33;
      goto LABEL_81;
    }
    v21 = 0;
LABEL_81:
    v19 = 512;
LABEL_33:
    v24 = v19 - v18;
    v25 = (_QWORD *)(v59 + 8 * v18);
    v26 = (_QWORD *)(a4 + 8 * v18);
    for ( m = v18 + v21 + v24; v24; --v24 )
    {
      v27 = MiLockLeafPage(v25, v6);
      if ( v27 )
      {
        v54 = v6 + 1;
        v28 = *(_BYTE *)(v27 + 34);
        if ( (v28 & 8) != 0 )
        {
          v6 = v54;
          goto LABEL_93;
        }
        if ( (MI_READ_PTE_LOCK_FREE(v25) & 1) != 0 )
        {
          v6 = v54;
        }
        else
        {
          v29 = (v28 & 0x20) == 0;
          v6 = v54;
          if ( !v29 )
            goto LABEL_93;
        }
      }
      else
      {
        _bittestandreset(v67, v18);
      }
      LODWORD(v18) = v18 + 1;
      *v26++ = *v25++;
    }
    if ( m >= 0x200 )
      break;
    v8 = (((unsigned __int8)((unsigned __int8)&v67[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
  }
  v30 = 48 * v63 - 0x58000000000LL;
  v31 = 48 * v61 - 0x58000000000LL;
  if ( v6 )
  {
    MiLockNestedPageAtDpcInline(48 * v63 - 0x58000000000LL);
  }
  else
  {
    v56 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v56);
      while ( *(__int64 *)(v30 + 24) < 0 );
    }
  }
  if ( *(_WORD *)(v30 + 32) == 2
    && (v32 = *(_QWORD *)(v30 + 24), (unsigned __int16)v32 == (unsigned __int64)(v6 + 1))
    && (v33 = v32 & 0x3FFFFFFFFFFFFFFFLL, v33 < 0x10000) )
  {
    MiLockNestedPageAtDpcInline(v31);
    *(_QWORD *)(v31 + 24) = v33 | *(_QWORD *)(v31 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v34 = 1;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_93:
    v34 = 0;
  }
  v35 = 0;
  v36 = i;
  v37 = v59;
  while ( v6 )
  {
    v38 = v35 < v62.SizeOfBitMap ? v35 : 0;
    v39 = v62.SizeOfBitMap - 1;
    while ( 1 )
    {
      v57 = 0;
      v40 = v55 + v39;
      v41 = v55 + v38;
      if ( v39 - v38 == -1 )
        goto LABEL_72;
      v42 = &v36[8 * ((unsigned __int64)v41 >> 6)];
      for ( n = ~*(_QWORD *)v42 | ((1LL << (v41 & 0x3F)) - 1); n == -1; n = ~*(_QWORD *)v42 )
      {
        v42 += 8;
        if ( v42 > &v36[8 * ((unsigned __int64)v40 >> 6)] )
          goto LABEL_72;
      }
      _BitScanForward64(&v44, ~n);
      v45 = v44 + ((unsigned int)((v42 - v36) >> 3) << 6);
      v57 = v44;
      if ( v45 > v40 )
      {
LABEL_72:
        v45 = -1;
      }
      else if ( v45 != -1 )
      {
        break;
      }
      if ( !v38 )
        break;
      v52 = v35 + 1;
      if ( v35 + 1 > v62.SizeOfBitMap )
        v52 = v62.SizeOfBitMap;
      v39 = v52 - 1;
      v38 = 0;
    }
    v46 = v45 - v55;
    if ( v45 == -1 )
      v46 = 0xFFFFFFFFLL;
    v60 = MI_READ_PTE_LOCK_FREE(v37 + 8 * v46);
    v47 = v60;
    if ( (v60 & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&v60)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v60 >> 3) & 0x1FF)) & 0x20) != 0 )
            v47 |= 0x20uLL;
        }
      }
    }
    else if ( qword_140C4DF80 )
    {
      if ( (v60 & 0x10) != 0 )
        v47 = v60 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v47 = ~qword_140C4DF80 & v60;
    }
    v48 = (v47 >> 12) & 0xFFFFFFFFFLL;
    if ( v34 == 1 )
    {
      *((_QWORD *)&v66 + 1) = *(_QWORD *)(48 * v48 - 0x58000000000LL + 40) ^ (v61 ^ *(_QWORD *)(48 * v48
                                                                                              - 0x58000000000LL
                                                                                              + 40)) & 0xFFFFFFFFFLL;
      *(_QWORD *)(48 * v48 - 0x58000000000LL + 40) = *((_QWORD *)&v66 + 1);
    }
    --v6;
    _InterlockedAnd64((volatile signed __int64 *)(48 * v48 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v35 = v46 + 1;
  }
  return v34;
}

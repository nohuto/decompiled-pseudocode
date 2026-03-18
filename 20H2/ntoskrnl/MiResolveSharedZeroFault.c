/*
 * XREFs of MiResolveSharedZeroFault @ 0x1402B1F80
 * Callers:
 *     MiZeroFault @ 0x140224FB0 (MiZeroFault.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiResolveSharedZeroFault(unsigned int *a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v3; // r14
  __int64 v4; // rsi
  unsigned int v5; // r10d
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 Process; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 result; // rax
  __int64 v23; // r13
  unsigned int v24; // edx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r9
  __int128 v29; // xmm1
  __int128 v30; // xmm1
  __int128 v31; // xmm1
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r15
  _QWORD *v34; // r12
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  _QWORD *v40; // rax
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // r11
  __int64 v45; // rdx
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r10
  unsigned __int64 v48; // rdx
  struct _LIST_ENTRY *v49; // rax
  __int64 v50; // rax
  struct _LIST_ENTRY *v51; // r8
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rdi
  unsigned __int64 v55; // r8
  struct _LIST_ENTRY *v56; // rax
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned __int64 v61; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v62; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v63; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v64; // [rsp+40h] [rbp-C0h]
  __int128 v65; // [rsp+50h] [rbp-B0h]
  __int128 v66; // [rsp+60h] [rbp-A0h]
  __int128 v67; // [rsp+70h] [rbp-90h]
  __int128 v68; // [rsp+80h] [rbp-80h]
  __int128 v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v71; // [rsp+A8h] [rbp-58h]
  __int64 v72; // [rsp+B0h] [rbp-50h]
  __int128 v73; // [rsp+B8h] [rbp-48h]
  __int128 v74; // [rsp+C8h] [rbp-38h]
  __int128 v75; // [rsp+D8h] [rbp-28h]
  __int128 v76; // [rsp+E8h] [rbp-18h]
  unsigned int v77; // [rsp+150h] [rbp+50h]
  int v78; // [rsp+158h] [rbp+58h] BYREF
  int v79; // [rsp+160h] [rbp+60h] BYREF
  __int64 v80; // [rsp+168h] [rbp+68h]

  v1 = (unsigned __int64 *)*((_QWORD *)a1 + 1);
  v63 = 0LL;
  v70 = 0LL;
  v3 = *v1;
  v4 = (*v1 >> 9) & 0x7FFFFFFFF8LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v5 = a1[8];
  v6 = v4 - 0x98000000000LL;
  v7 = *((_QWORD *)a1 + 3);
  v77 = v5;
  v8 = 0LL;
  v9 = 0LL;
  v72 = 0LL;
  Process = (__int64)(v6 << 25) >> 16;
  v11 = 0x7FFFFFFEFFFFLL;
  v12 = Process;
  while ( 1 )
  {
    v13 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v12 <= 0x7FFFFFFEFFFFLL )
      break;
    v9 = (unsigned int)(v9 + 1);
    v12 = (__int64)(v12 << 25) >> 16;
    if ( (unsigned int)v9 >= 3 )
      goto LABEL_48;
  }
  v8 = ((Process >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v14 = *(_QWORD *)v8;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v9, v14, v8, 0x7FFFFFFEFFFFLL)
    && (v14 & 1) != 0
    && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v16 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
      v8 = v14 | 0x20;
      if ( (v16 & 0x20) == 0 )
        v8 = v14;
      v14 = v8;
      if ( (v16 & 0x42) != 0 )
        v14 = v8 | 0x42;
    }
  }
  v61 = v14;
  if ( (unsigned __int64)&v61 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v61 <= v13
    && (unsigned int)MiPteHasShadow(&v61, v14, v8, v11)
    && (v14 & 1) != 0
    && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
  {
    v8 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v8 )
    {
      v17 = *(_QWORD *)(v8 + 8 * (((unsigned __int64)&v61 >> 3) & 0x1FF));
      v8 = v14 | 0x20;
      if ( (v17 & 0x20) == 0 )
        v8 = v14;
      v14 = v8;
      if ( (v17 & 0x42) != 0 )
        v14 = v8 | 0x42;
    }
  }
  Process = (v14 >> 12) & 0xFFFFFFFFFLL;
  v18 = 48 * Process - 0x58000000000LL;
  v78 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v78);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
    v5 = v77;
    v13 = 0xFFFFF6FB7DBED7F8uLL;
  }
  *(_QWORD *)(v18 + 16) ^= ((unsigned int)*(_QWORD *)(v18 + 16) ^ ((unsigned int)*(_QWORD *)(v18 + 16) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v9 = *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL;
  v73 = 0LL;
  v74 = 0LL;
  if ( (unsigned __int64)((v9 >> 47) + 1) <= 1 )
  {
    Process = 0xFFFFF68000000000uLL;
    *(_QWORD *)&v73 = (((unsigned __int64)v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v73 + 1) = (((unsigned __int64)v73 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v74 = ((*((_QWORD *)&v73 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v74 + 1) = (((unsigned __int64)v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = 4LL;
    do
    {
      v8 = *(&v72 + v11--);
      v9 = *(_QWORD *)v8;
      if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= v13 && (MiFlags & 0xC00000) != 0 )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 912) != 1 )
        {
          if ( (v9 & 1) == 0 )
            break;
          if ( (v9 & 0x20) == 0 || (v9 & 0x42) == 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v19 = *(_QWORD *)(Process + 1928);
            if ( v19 )
            {
              v20 = *(_QWORD *)(v19 + 8 * ((v8 >> 3) & 0x1FF));
              v8 = v9 | 0x20;
              Process = (unsigned __int8)v20;
              LOBYTE(Process) = v20 & 0x20;
              if ( (v20 & 0x20) == 0 )
                v8 = v9;
              v9 = v8;
              if ( (v20 & 0x42) != 0 )
                v9 = v8 | 0x42;
            }
          }
        }
      }
    }
    while ( (v9 & 1) != 0 && (v9 & 0x80u) == 0LL && v11 );
  }
LABEL_48:
  if ( v5 == 256 )
  {
    v21 = (v7 << 16) | 0x400;
    if ( qword_140C4DDC0 )
    {
      if ( (v21 & qword_140C4DDC0) != 0 )
        v21 |= 0x10uLL;
      else
        v21 |= qword_140C4DDC0;
    }
  }
  else
  {
    v21 = MiSwizzleInvalidPte(32 * (v5 & 0x1F | 0xFFFFFFFFF8000020uLL));
  }
  result = 0xFFFFF6FB7DBED000uLL;
  if ( v6 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_64;
  result = v13;
  if ( v6 > v13 )
    goto LABEL_64;
  if ( !(unsigned int)MiPteHasShadow(v9, Process, v8, v11) )
  {
    result = (unsigned __int64)KeGetCurrentThread();
    if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) != 0 && (v21 & 1) != 0 )
      v21 |= 0x8000000000000000uLL;
LABEL_64:
    *(_QWORD *)v6 = v21;
    goto LABEL_65;
  }
  if ( !HIBYTE(word_140C4DE88) && (v21 & 1) != 0 )
    v21 |= 0x8000000000000000uLL;
  *(_QWORD *)v6 = v21;
  result = MiWritePteShadow(v6, v21);
LABEL_65:
  v23 = *((_QWORD *)a1 + 8);
  if ( !v23 )
    return result;
  v24 = *(_DWORD *)(v23 + 48);
  v25 = *(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32);
  v26 = *(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32);
  v71 = v25;
  if ( MiVadPageSizes[(v24 >> 18) & 3] == 16 )
  {
    v27 = v3 & 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v63 + 1) = 0x10000LL;
    *(_QWORD *)&v63 = v27;
    result = v27 >> 12;
    if ( v27 >> 12 < v25 )
      return result;
    result = (v27 + 0xFFFF) >> 12;
    if ( result > v26 )
      return result;
    v28 = 16LL;
    goto LABEL_77;
  }
  result = *a1;
  if ( (result & 2) == 0 )
  {
    if ( (v24 & 0x70) == 0x20 )
      return result;
    v28 = 8LL;
    v26 -= v3 >> 12;
    *(_QWORD *)&v63 = v3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v26 + 1 < 8 )
      v28 = v26 + 1;
    *((_QWORD *)&v63 + 1) = v28 << 12;
LABEL_77:
    result = (unsigned __int64)&v63;
    *(_QWORD *)&v66 = 0LL;
    *((_QWORD *)&v64 + 1) = &v63;
    v65 = 1uLL;
    LOWORD(v64) = 2;
    v80 = v28;
    goto LABEL_78;
  }
  result = *((_QWORD *)a1 + 7);
  v28 = 256LL;
  v80 = 256LL;
  v26 = v26 - (v3 >> 12) + 1;
  v29 = *(_OWORD *)(result + 16);
  v64 = *(_OWORD *)result;
  v65 = v29;
  v30 = *(_OWORD *)(result + 48);
  v66 = *(_OWORD *)(result + 32);
  v67 = v30;
  v31 = *(_OWORD *)(result + 80);
  v68 = *(_OWORD *)(result + 64);
  v69 = v31;
  if ( v26 < 0x100 )
  {
    v28 = v26;
    v80 = v26;
  }
LABEL_78:
  v32 = 0LL;
  v33 = 0LL;
  if ( v28 )
  {
    while ( 1 )
    {
      v34 = (_QWORD *)(*((_QWORD *)&v64 + 1) + 16LL * *((_QWORD *)&v65 + 1));
      v35 = (*v34 + ((_QWORD)v66 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      v36 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v33 )
      {
        result = v32 + 4096;
        if ( v35 != v32 + 4096 || ((v35 >> 9) & 0xFF8) == 0 )
          return result;
      }
      v37 = *(_QWORD *)v36;
      if ( v36 >= 0xFFFFF6FB7DBED000uLL
        && v36 <= v13
        && (unsigned int)MiPteHasShadow(v26, v37, v25, v28)
        && (v37 & 1) != 0
        && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
      {
        v25 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v25 )
        {
          v38 = *(_QWORD *)(v25 + 8 * ((v36 >> 3) & 0x1FF));
          v25 = v37 | 0x20;
          if ( (v38 & 0x20) == 0 )
            v25 = v37;
          v37 = v25;
          if ( (v38 & 0x42) != 0 )
            v37 = v25 | 0x42;
        }
      }
      if ( !v37 )
        break;
LABEL_164:
      v59 = *(_DWORD *)v34 & 0xFFF;
      v60 = v34[1] + 4095LL;
      *(_QWORD *)&v66 = v66 + 1;
      v26 = (unsigned __int64)(v60 + v59) >> 12;
      if ( (_QWORD)v66 != v26
        || (v26 = *((_QWORD *)&v65 + 1) + 1LL,
            *(_QWORD *)&v66 = 0LL,
            *((_QWORD *)&v65 + 1) = v26,
            v26 >= (unsigned __int64)v65)
        || (result = *((_QWORD *)&v64 + 1), v26 *= 2LL, *(_QWORD *)(*((_QWORD *)&v64 + 1) + 8 * v26 + 8)) )
      {
        result = v65;
        if ( *((_QWORD *)&v65 + 1) != (_QWORD)v65 )
        {
          ++v33;
          v13 = 0xFFFFF6FB7DBED7F8uLL;
          v32 = v35;
          if ( v33 < v28 )
            continue;
        }
      }
      return result;
    }
    result = MiGetProtoPteAddress(v23, v35 >> 12, 4LL, &v70);
    v39 = result;
    if ( !result )
      return result;
    v40 = *(_QWORD **)(v23 + 120);
    if ( (__int64)v40 < 0 )
    {
      result = (unsigned __int64)(*v40 - 1LL) >> 12;
      if ( (v35 >> 12) - v71 > result )
        return result;
    }
    v41 = 0x7FFFFFFEFFFFLL;
    v42 = (__int64)((v36 << 25) - v72) >> 16;
    v43 = 0LL;
    while ( v42 > 0x7FFFFFFEFFFFLL )
    {
      v43 = (unsigned int)(v43 + 1);
      v42 = (__int64)((v42 << 25) - v72) >> 16;
      if ( (unsigned int)v43 >= 3 )
      {
        v25 = 0x8000000000000000uLL;
LABEL_101:
        v44 = 0xFFFFF6FB7DBED7F8uLL;
        goto LABEL_102;
      }
    }
    v46 = (((unsigned __int64)((__int64)((v36 << 25) - v72) >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v47 = 0xFFFFF6FB7DBED000uLL;
    v48 = *(_QWORD *)v46;
    v41 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v46 >= 0xFFFFF6FB7DBED000uLL
      && v46 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v43, v48, v46, 0xFFFFF6FB7DBED7F8uLL)
      && (v48 & 1) != 0
      && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
    {
      v49 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v49 )
      {
        v50 = *((_QWORD *)&v49->Flink + ((v46 >> 3) & 0x1FF));
        v46 = v48 | 0x20;
        if ( (v50 & 0x20) == 0 )
          v46 = v48;
        v48 = v46;
        if ( (v50 & 0x42) != 0 )
          v48 = v46 | 0x42;
      }
    }
    v62 = v48;
    if ( (unsigned __int64)&v62 >= v47
      && (unsigned __int64)&v62 <= v41
      && (unsigned int)MiPteHasShadow(&v62, v48, v46, v41)
      && (v48 & 1) != 0
      && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
    {
      v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v51 )
      {
        v52 = *((_QWORD *)&v51->Flink + (((unsigned __int64)&v62 >> 3) & 0x1FF));
        v53 = v48 | 0x20;
        if ( (v52 & 0x20) == 0 )
          v53 = v48;
        v48 = v53;
        if ( (v52 & 0x42) != 0 )
          v48 = v53 | 0x42;
      }
    }
    v54 = 48 * ((v48 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v79 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v79);
        while ( *(__int64 *)(v54 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) );
      v47 = 0xFFFFF6FB7DBED000uLL;
    }
    *(_QWORD *)(v54 + 16) ^= ((unsigned int)*(_QWORD *)(v54 + 16) ^ ((unsigned int)*(_QWORD *)(v54 + 16) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v25 = 0x8000000000000000uLL;
    v43 = *(_QWORD *)(v54 + 8) | 0x8000000000000000uLL;
    v75 = 0LL;
    v76 = 0LL;
    if ( (unsigned __int64)((v43 >> 47) + 1) > 1 )
      goto LABEL_101;
    v41 = 4LL;
    *(_QWORD *)&v75 = (((unsigned __int64)v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v75 + 1) = (((unsigned __int64)v75 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v76 = ((*((_QWORD *)&v75 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v44 = 0xFFFFF6FB7DBED7F8uLL;
    *((_QWORD *)&v76 + 1) = (((unsigned __int64)v76 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v55 = *((_QWORD *)&v74 + v41-- + 1);
      v43 = *(_QWORD *)v55;
      if ( v55 >= v47
        && v55 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v43 & 1) == 0 )
          break;
        if ( (v43 & 0x20) == 0 || (v43 & 0x42) == 0 )
        {
          v56 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v56 )
          {
            v57 = *((_QWORD *)&v56->Flink + ((v55 >> 3) & 0x1FF));
            v58 = v43 | 0x20;
            if ( (v57 & 0x20) == 0 )
              v58 = v43;
            v43 = v58;
            if ( (v57 & 0x42) != 0 )
              v43 = v58 | 0x42;
          }
        }
      }
    }
    while ( (v43 & 1) != 0 && (v43 & 0x80u) == 0LL && v41 );
    v25 = 0x8000000000000000uLL;
LABEL_102:
    if ( v77 == 256 )
    {
      v45 = MiSwizzleInvalidPte((v39 << 16) | 0x400);
    }
    else
    {
      v45 = 32 * (v77 & 0x1F | 0xFFFFFFFFF8000020uLL);
      if ( qword_140C4DDC0 )
      {
        if ( (qword_140C4DDC0 & v45) != 0 )
          v45 |= 0x10uLL;
        else
          v45 |= qword_140C4DDC0;
      }
    }
    if ( v36 >= 0xFFFFF6FB7DBED000uLL && v36 <= v44 )
    {
      if ( (unsigned int)MiPteHasShadow(v43, v45, v25, v41) )
      {
        if ( !HIBYTE(word_140C4DE88) && (v45 & 1) != 0 )
          v45 |= v25;
        *(_QWORD *)v36 = v45;
        MiWritePteShadow(v36, v45);
        goto LABEL_163;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v45 & 1) != 0 )
      {
        v45 |= v25;
      }
    }
    *(_QWORD *)v36 = v45;
LABEL_163:
    v28 = v80;
    goto LABEL_164;
  }
  return result;
}

/*
 * XREFs of MiResolveSharedZeroFault @ 0x1402225B0
 * Callers:
 *     MiZeroFault @ 0x14020A440 (MiZeroFault.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiResolveSharedZeroFault(unsigned int *a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v3; // r14
  __int64 v4; // rsi
  unsigned int v5; // r10d
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 Process; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r11
  unsigned __int64 *v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  struct _LIST_ENTRY *v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rbx
  unsigned __int64 result; // rax
  __int64 v29; // r13
  unsigned int v30; // edx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r9
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r15
  _QWORD *v40; // r12
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // rsi
  __int64 v43; // rdx
  struct _LIST_ENTRY *v44; // r8
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned __int64 v47; // rbx
  _QWORD *v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // r11
  unsigned __int64 v52; // rdx
  unsigned __int64 *v53; // r8
  unsigned __int64 v54; // r10
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // r8
  struct _LIST_ENTRY *v58; // rax
  __int64 v59; // rax
  __int64 v60; // r8
  struct _LIST_ENTRY *v61; // r8
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rdi
  __int64 v65; // r9
  unsigned __int64 v66; // r8
  struct _LIST_ENTRY *v67; // rax
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned __int64 v73; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v74; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v75; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v76; // [rsp+40h] [rbp-C0h]
  __int128 v77; // [rsp+50h] [rbp-B0h]
  __int128 v78; // [rsp+60h] [rbp-A0h]
  __int128 v79; // [rsp+70h] [rbp-90h]
  __int128 v80; // [rsp+80h] [rbp-80h]
  __int128 v81; // [rsp+90h] [rbp-70h]
  __int64 v82; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v83; // [rsp+A8h] [rbp-58h]
  __int64 v84; // [rsp+B0h] [rbp-50h]
  __int128 v85; // [rsp+B8h] [rbp-48h]
  __int128 v86; // [rsp+C8h] [rbp-38h]
  __int128 v87; // [rsp+D8h] [rbp-28h]
  __int128 v88; // [rsp+E8h] [rbp-18h]
  unsigned int v89; // [rsp+150h] [rbp+50h]
  int v90; // [rsp+158h] [rbp+58h] BYREF
  int v91; // [rsp+160h] [rbp+60h] BYREF
  __int64 v92; // [rsp+168h] [rbp+68h]

  v1 = (unsigned __int64 *)*((_QWORD *)a1 + 1);
  v75 = 0LL;
  v82 = 0LL;
  v3 = *v1;
  v4 = (*v1 >> 9) & 0x7FFFFFFFF8LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v5 = a1[8];
  v6 = v4 - 0x98000000000LL;
  v7 = *((_QWORD *)a1 + 3);
  v89 = v5;
  v8 = 0LL;
  v84 = 0LL;
  Process = (__int64)(v6 << 25) >> 16;
  v10 = Process;
  while ( 1 )
  {
    v11 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v10 <= 0x7FFFFFFEFFFFLL )
      break;
    v8 = (unsigned int)(v8 + 1);
    v10 = (__int64)(v10 << 25) >> 16;
    if ( (unsigned int)v8 >= 3 )
      goto LABEL_48;
  }
  v12 = (unsigned __int64 *)(((Process >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v13 = *v12;
  if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v8, v13)
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v16 = *((_QWORD *)&Flink->Flink + ((v14 >> 3) & 0x1FF));
      v17 = v13 | 0x20;
      if ( (v16 & 0x20) == 0 )
        v17 = v13;
      v13 = v17;
      if ( (v16 & 0x42) != 0 )
        v13 = v17 | 0x42;
    }
  }
  v73 = v13;
  if ( (unsigned __int64)&v73 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v73 <= v11
    && (unsigned int)MiPteHasShadow(&v73, v13)
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    v18 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v18 )
    {
      v19 = *((_QWORD *)&v18->Flink + (((unsigned __int64)&v73 >> 3) & 0x1FF));
      v20 = v13 | 0x20;
      if ( (v19 & 0x20) == 0 )
        v20 = v13;
      v13 = v20;
      if ( (v19 & 0x42) != 0 )
        v13 = v20 | 0x42;
    }
  }
  Process = (v13 >> 12) & 0xFFFFFFFFFLL;
  v21 = 48 * Process - 0x58000000000LL;
  v90 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v90);
      while ( *(__int64 *)(v21 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
    v5 = v89;
    v11 = 0xFFFFF6FB7DBED7F8uLL;
  }
  *(_QWORD *)(v21 + 16) ^= ((unsigned int)*(_QWORD *)(v21 + 16) ^ ((unsigned int)*(_QWORD *)(v21 + 16) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v8 = *(_QWORD *)(v21 + 8) | 0x8000000000000000uLL;
  v85 = 0LL;
  v86 = 0LL;
  if ( (unsigned __int64)((v8 >> 47) + 1) <= 1 )
  {
    Process = 0xFFFFF68000000000uLL;
    *(_QWORD *)&v85 = (((unsigned __int64)v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v85 + 1) = (((unsigned __int64)v85 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v86 = ((*((_QWORD *)&v85 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v86 + 1) = (((unsigned __int64)v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v22 = 4LL;
    do
    {
      v23 = *(&v84 + v22--);
      v8 = *(_QWORD *)v23;
      if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= v11 && (MiFlags & 0xC00000) != 0 )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 912) != 1 )
        {
          if ( (v8 & 1) == 0 )
            break;
          if ( (v8 & 0x20) == 0 || (v8 & 0x42) == 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v24 = *(_QWORD *)(Process + 1928);
            if ( v24 )
            {
              v25 = *(_QWORD *)(v24 + 8 * ((v23 >> 3) & 0x1FF));
              v26 = v8 | 0x20;
              Process = (unsigned __int8)v25;
              LOBYTE(Process) = v25 & 0x20;
              if ( (v25 & 0x20) == 0 )
                v26 = v8;
              v8 = v26;
              if ( (v25 & 0x42) != 0 )
                v8 = v26 | 0x42;
            }
          }
        }
      }
    }
    while ( (v8 & 1) != 0 && (v8 & 0x80u) == 0LL && v22 );
  }
LABEL_48:
  if ( v5 == 256 )
  {
    v27 = (v7 << 16) | 0x400;
    if ( qword_140C4DE80 )
    {
      if ( (v27 & qword_140C4DE80) != 0 )
        v27 |= 0x10uLL;
      else
        v27 |= qword_140C4DE80;
    }
  }
  else
  {
    v27 = MiSwizzleInvalidPte(32 * (v5 & 0x1F | 0xFFFFFFFFF8000020uLL));
  }
  result = 0xFFFFF6FB7DBED000uLL;
  if ( v6 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_64;
  result = v11;
  if ( v6 > v11 )
    goto LABEL_64;
  if ( !(unsigned int)MiPteHasShadow(v8, Process) )
  {
    result = (unsigned __int64)KeGetCurrentThread();
    if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) != 0 && (v27 & 1) != 0 )
      v27 |= 0x8000000000000000uLL;
LABEL_64:
    *(_QWORD *)v6 = v27;
    goto LABEL_65;
  }
  if ( !HIBYTE(word_140C4DF48) && (v27 & 1) != 0 )
    v27 |= 0x8000000000000000uLL;
  *(_QWORD *)v6 = v27;
  result = MiWritePteShadow(v6, v27);
LABEL_65:
  v29 = *((_QWORD *)a1 + 8);
  if ( !v29 )
    return result;
  v30 = *(_DWORD *)(v29 + 48);
  v31 = *(unsigned int *)(v29 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 32) << 32);
  v32 = *(unsigned int *)(v29 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 33) << 32);
  v83 = v31;
  if ( MiVadPageSizes[(v30 >> 18) & 3] == 16 )
  {
    v33 = v3 & 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v75 + 1) = 0x10000LL;
    *(_QWORD *)&v75 = v33;
    result = v33 >> 12;
    if ( v33 >> 12 < v31 )
      return result;
    result = (v33 + 0xFFFF) >> 12;
    if ( result > v32 )
      return result;
    v34 = 16LL;
    goto LABEL_77;
  }
  result = *a1;
  if ( (result & 2) == 0 )
  {
    if ( (v30 & 0x70) == 0x20 )
      return result;
    v34 = 8LL;
    v32 -= v3 >> 12;
    *(_QWORD *)&v75 = v3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v32 + 1 < 8 )
      v34 = v32 + 1;
    *((_QWORD *)&v75 + 1) = v34 << 12;
LABEL_77:
    result = (unsigned __int64)&v75;
    *(_QWORD *)&v78 = 0LL;
    *((_QWORD *)&v76 + 1) = &v75;
    v77 = 1uLL;
    LOWORD(v76) = 2;
    v92 = v34;
    goto LABEL_78;
  }
  result = *((_QWORD *)a1 + 7);
  v34 = 256LL;
  v92 = 256LL;
  v32 = v32 - (v3 >> 12) + 1;
  v35 = *(_OWORD *)(result + 16);
  v76 = *(_OWORD *)result;
  v77 = v35;
  v36 = *(_OWORD *)(result + 48);
  v78 = *(_OWORD *)(result + 32);
  v79 = v36;
  v37 = *(_OWORD *)(result + 80);
  v80 = *(_OWORD *)(result + 64);
  v81 = v37;
  if ( v32 < 0x100 )
  {
    v34 = v32;
    v92 = v32;
  }
LABEL_78:
  v38 = 0LL;
  v39 = 0LL;
  if ( v34 )
  {
    while ( 1 )
    {
      v40 = (_QWORD *)(*((_QWORD *)&v76 + 1) + 16LL * *((_QWORD *)&v77 + 1));
      v41 = (*v40 + ((_QWORD)v78 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v39 )
      {
        result = v38 + 4096;
        if ( v41 != v38 + 4096 || ((v41 >> 9) & 0xFF8) == 0 )
          return result;
      }
      v43 = *(_QWORD *)v42;
      if ( v42 >= 0xFFFFF6FB7DBED000uLL
        && v42 <= v11
        && (unsigned int)MiPteHasShadow(v32, v43)
        && (v43 & 1) != 0
        && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
      {
        v44 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v44 )
        {
          v45 = *((_QWORD *)&v44->Flink + ((v42 >> 3) & 0x1FF));
          v46 = v43 | 0x20;
          if ( (v45 & 0x20) == 0 )
            v46 = v43;
          v43 = v46;
          if ( (v45 & 0x42) != 0 )
            v43 = v46 | 0x42;
        }
      }
      if ( !v43 )
        break;
LABEL_163:
      v71 = *(_DWORD *)v40 & 0xFFF;
      v72 = v40[1] + 4095LL;
      *(_QWORD *)&v78 = v78 + 1;
      v32 = (unsigned __int64)(v72 + v71) >> 12;
      if ( (_QWORD)v78 != v32
        || (v32 = *((_QWORD *)&v77 + 1) + 1LL,
            *(_QWORD *)&v78 = 0LL,
            *((_QWORD *)&v77 + 1) = v32,
            v32 >= (unsigned __int64)v77)
        || (result = *((_QWORD *)&v76 + 1), v32 *= 2LL, *(_QWORD *)(*((_QWORD *)&v76 + 1) + 8 * v32 + 8)) )
      {
        result = v77;
        if ( *((_QWORD *)&v77 + 1) != (_QWORD)v77 )
        {
          ++v39;
          v11 = 0xFFFFF6FB7DBED7F8uLL;
          v38 = v41;
          if ( v39 < v34 )
            continue;
        }
      }
      return result;
    }
    result = MiGetProtoPteAddress(v29, v41 >> 12, 4, &v82);
    v47 = result;
    if ( !result )
      return result;
    v48 = *(_QWORD **)(v29 + 120);
    if ( (__int64)v48 < 0 )
    {
      result = (unsigned __int64)(*v48 - 1LL) >> 12;
      if ( (v41 >> 12) - v83 > result )
        return result;
    }
    v49 = (__int64)((v42 << 25) - v84) >> 16;
    v50 = 0LL;
    while ( v49 > 0x7FFFFFFEFFFFLL )
    {
      v50 = (unsigned int)(v50 + 1);
      v49 = (__int64)((v49 << 25) - v84) >> 16;
      if ( (unsigned int)v50 >= 3 )
        goto LABEL_100;
    }
    v53 = (unsigned __int64 *)((((unsigned __int64)((__int64)((v42 << 25) - v84) >> 16) >> 18) & 0x3FFFFFF8)
                             - 0x904C0000000LL);
    v54 = 0xFFFFF6FB7DBED000uLL;
    v55 = *v53;
    v56 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v53 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v53 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v50, v55)
      && (v55 & 1) != 0
      && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
    {
      v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v58 )
      {
        v59 = *((_QWORD *)&v58->Flink + ((v57 >> 3) & 0x1FF));
        v60 = v55 | 0x20;
        if ( (v59 & 0x20) == 0 )
          v60 = v55;
        v55 = v60;
        if ( (v59 & 0x42) != 0 )
          v55 = v60 | 0x42;
      }
    }
    v74 = v55;
    if ( (unsigned __int64)&v74 >= v54
      && (unsigned __int64)&v74 <= v56
      && (unsigned int)MiPteHasShadow(&v74, v55)
      && (v55 & 1) != 0
      && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
    {
      v61 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v61 )
      {
        v62 = *((_QWORD *)&v61->Flink + (((unsigned __int64)&v74 >> 3) & 0x1FF));
        v63 = v55 | 0x20;
        if ( (v62 & 0x20) == 0 )
          v63 = v55;
        v55 = v63;
        if ( (v62 & 0x42) != 0 )
          v55 = v63 | 0x42;
      }
    }
    v64 = 48 * ((v55 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v91 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v91);
        while ( *(__int64 *)(v64 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 24), 0x3FuLL) );
      v54 = 0xFFFFF6FB7DBED000uLL;
    }
    *(_QWORD *)(v64 + 16) ^= ((unsigned int)*(_QWORD *)(v64 + 16) ^ ((unsigned int)*(_QWORD *)(v64 + 16) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v50 = *(_QWORD *)(v64 + 8) | 0x8000000000000000uLL;
    v87 = 0LL;
    v88 = 0LL;
    if ( (unsigned __int64)((v50 >> 47) + 1) > 1 )
    {
LABEL_100:
      v51 = 0xFFFFF6FB7DBED7F8uLL;
      goto LABEL_101;
    }
    v65 = 4LL;
    *(_QWORD *)&v87 = (((unsigned __int64)v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v87 + 1) = (((unsigned __int64)v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v88 = ((*((_QWORD *)&v87 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v51 = 0xFFFFF6FB7DBED7F8uLL;
    *((_QWORD *)&v88 + 1) = (((unsigned __int64)v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v66 = *((_QWORD *)&v86 + v65-- + 1);
      v50 = *(_QWORD *)v66;
      if ( v66 >= v54
        && v66 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v50 & 1) == 0 )
          break;
        if ( (v50 & 0x20) == 0 || (v50 & 0x42) == 0 )
        {
          v67 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v67 )
          {
            v68 = *((_QWORD *)&v67->Flink + ((v66 >> 3) & 0x1FF));
            v69 = v50 | 0x20;
            if ( (v68 & 0x20) == 0 )
              v69 = v50;
            v50 = v69;
            if ( (v68 & 0x42) != 0 )
              v50 = v69 | 0x42;
          }
        }
      }
    }
    while ( (v50 & 1) != 0 && (v50 & 0x80u) == 0LL && v65 );
LABEL_101:
    if ( v89 == 256 )
    {
      v52 = MiSwizzleInvalidPte((v47 << 16) | 0x400);
    }
    else
    {
      v52 = 32 * (v89 & 0x1F | 0xFFFFFFFFF8000020uLL);
      if ( qword_140C4DE80 )
      {
        if ( (qword_140C4DE80 & v52) != 0 )
          v52 |= 0x10uLL;
        else
          v52 |= qword_140C4DE80;
      }
    }
    if ( v42 >= 0xFFFFF6FB7DBED000uLL && v42 <= v51 )
    {
      if ( (unsigned int)MiPteHasShadow(v50, v52) )
      {
        if ( !HIBYTE(word_140C4DF48) && (v52 & 1) != 0 )
          v52 |= v70;
        *(_QWORD *)v42 = v52;
        MiWritePteShadow(v42, v52);
        goto LABEL_162;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v52 & 1) != 0 )
      {
        v52 |= v70;
      }
    }
    *(_QWORD *)v42 = v52;
LABEL_162:
    v34 = v92;
    goto LABEL_163;
  }
  return result;
}

/*
 * XREFs of MiResolveSharedZeroFault @ 0x1403398C0
 * Callers:
 *     MiZeroFault @ 0x140359BB0 (MiZeroFault.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 */

char __fastcall MiResolveSharedZeroFault(__int64 a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // r10d
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  signed __int64 v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  struct _LIST_ENTRY *v23; // rax
  __int64 v24; // rax
  char v25; // r8
  __int64 v26; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // r13
  unsigned int v29; // edx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rcx
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r15
  _QWORD *v41; // r12
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rsi
  __int64 v44; // rdx
  struct _LIST_ENTRY *v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  struct _KTHREAD *v48; // rbx
  _QWORD *v49; // rax
  unsigned __int64 v50; // rax
  unsigned int v51; // ecx
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // r10
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // r9
  struct _LIST_ENTRY *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdi
  signed __int64 v63; // rcx
  __int64 v64; // r9
  unsigned __int64 v65; // r8
  __int64 v66; // rcx
  struct _LIST_ENTRY *v67; // rax
  __int64 v68; // rax
  char v69; // r8
  __int64 v70; // r8
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned __int64 v75; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v76; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v77; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v78; // [rsp+40h] [rbp-C0h]
  __int128 v79; // [rsp+50h] [rbp-B0h]
  __int128 v80; // [rsp+60h] [rbp-A0h]
  __int128 v81; // [rsp+70h] [rbp-90h]
  __int128 v82; // [rsp+80h] [rbp-80h]
  __int128 v83; // [rsp+90h] [rbp-70h]
  __int64 v84; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v85; // [rsp+A8h] [rbp-58h]
  __int64 v86; // [rsp+B0h] [rbp-50h]
  __int128 v87; // [rsp+B8h] [rbp-48h]
  __int128 v88; // [rsp+C8h] [rbp-38h]
  __int128 v89; // [rsp+D8h] [rbp-28h]
  __int128 v90; // [rsp+E8h] [rbp-18h]
  int v91; // [rsp+150h] [rbp+50h]
  int v92; // [rsp+158h] [rbp+58h] BYREF
  int v93; // [rsp+160h] [rbp+60h] BYREF
  __int64 v94; // [rsp+168h] [rbp+68h]

  v1 = *(unsigned __int64 **)(a1 + 8);
  v77 = 0LL;
  v84 = 0LL;
  v3 = *v1;
  v4 = (*v1 >> 9) & 0x7FFFFFFFF8LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v5 = *(_DWORD *)(a1 + 32);
  v6 = v4 - 0x98000000000LL;
  v7 = *(_QWORD *)(a1 + 24);
  v91 = v5;
  v8 = 0;
  v86 = 0LL;
  v9 = 0x7FFFFFFEFFFFLL;
  v10 = (__int64)(v6 << 25) >> 16;
  while ( 1 )
  {
    v11 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v10 <= 0x7FFFFFFEFFFFLL )
      break;
    ++v8;
    v10 = (__int64)(v10 << 25) >> 16;
    if ( v8 >= 3 )
      goto LABEL_48;
  }
  v12 = (((unsigned __int64)((__int64)(v6 << 25) >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v13 = *(_QWORD *)v12;
  if ( v12 >= 0xFFFFF6FB7DBED000uLL
    && v12 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v15 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
      v12 = v13 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v12 = v13;
      v13 = v12;
      if ( (v15 & 0x42) != 0 )
        v13 = v12 | 0x42;
    }
  }
  v75 = v13;
  if ( (unsigned __int64)&v75 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v75 <= v11
    && (unsigned int)MiPteHasShadow()
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    v12 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v12 )
    {
      v16 = *(_QWORD *)(v12 + 8 * (((unsigned __int64)&v75 >> 3) & 0x1FF));
      v12 = v13 | 0x20;
      if ( (v16 & 0x20) == 0 )
        v12 = v13;
      v13 = v12;
      if ( (v16 & 0x42) != 0 )
        v13 = v12 | 0x42;
    }
  }
  v17 = (v13 >> 12) & 0xFFFFFFFFFLL;
  v18 = 48 * v17 - 0x58000000000LL;
  v92 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v92, v17, v12, v9);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
    v5 = v91;
    v11 = 0xFFFFF6FB7DBED7F8uLL;
  }
  *(_QWORD *)(v18 + 16) ^= ((unsigned int)*(_QWORD *)(v18 + 16) ^ ((unsigned int)*(_QWORD *)(v18 + 16) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL;
  v87 = 0LL;
  v88 = 0LL;
  if ( (unsigned __int64)((v19 >> 47) + 1) <= 1 )
  {
    *(_QWORD *)&v87 = (((unsigned __int64)v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v87 + 1) = (((unsigned __int64)v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v88 = ((*((_QWORD *)&v87 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v88 + 1) = (((unsigned __int64)v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = 4LL;
    do
    {
      v21 = *(&v86 + v20--);
      v22 = *(_QWORD *)v21;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL
        && v21 <= v11
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v22 & 1) == 0 )
          break;
        if ( (v22 & 0x20) == 0 || (v22 & 0x42) == 0 )
        {
          v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v23 )
          {
            v24 = *((_QWORD *)&v23->Flink + ((v21 >> 3) & 0x1FF));
            v25 = v22 | 0x20;
            if ( (v24 & 0x20) == 0 )
              v25 = v22;
            LOBYTE(v22) = v25;
            if ( (v24 & 0x42) != 0 )
              LOBYTE(v22) = v25 | 0x42;
          }
        }
      }
    }
    while ( (v22 & 1) != 0 && (v22 & 0x80u) == 0LL && v20 );
  }
LABEL_48:
  if ( v5 == 256 )
  {
    v26 = (v7 << 16) | 0x400;
    if ( qword_140C4DF80 )
    {
      if ( (v26 & qword_140C4DF80) != 0 )
        v26 |= 0x10uLL;
      else
        v26 |= qword_140C4DF80;
    }
  }
  else
  {
    v26 = MiSwizzleInvalidPte(32 * (v5 & 0x1F | 0xFFFFFFFFF8000020uLL));
  }
  LOBYTE(CurrentThread) = 0;
  if ( v6 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_64;
  LOBYTE(CurrentThread) = v11;
  if ( v6 > v11 )
    goto LABEL_64;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v26 & 1) != 0 )
      v26 |= 0x8000000000000000uLL;
LABEL_64:
    *(_QWORD *)v6 = v26;
    goto LABEL_65;
  }
  if ( !HIBYTE(word_140C4E048) && (v26 & 1) != 0 )
    v26 |= 0x8000000000000000uLL;
  *(_QWORD *)v6 = v26;
  LOBYTE(CurrentThread) = MiWritePteShadow(v6, v26);
LABEL_65:
  v28 = *(_QWORD *)(a1 + 64);
  if ( !v28 )
    return (char)CurrentThread;
  v29 = *(_DWORD *)(v28 + 48);
  v30 = *(unsigned int *)(v28 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v28 + 32) << 32);
  v31 = *(unsigned int *)(v28 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v28 + 33) << 32);
  v85 = v30;
  if ( MiVadPageSizes[(v29 >> 18) & 3] == 16 )
  {
    v32 = v3 & 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v77 + 1) = 0x10000LL;
    *(_QWORD *)&v77 = v32;
    CurrentThread = (struct _KTHREAD *)(v32 >> 12);
    if ( v32 >> 12 < v30 )
      return (char)CurrentThread;
    CurrentThread = (struct _KTHREAD *)((v32 + 0xFFFF) >> 12);
    if ( (unsigned __int64)CurrentThread > v31 )
      return (char)CurrentThread;
    v33 = 16LL;
    goto LABEL_77;
  }
  LODWORD(CurrentThread) = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    if ( (v29 & 0x70) == 0x20 )
      return (char)CurrentThread;
    v33 = 8LL;
    v38 = v31 - (v3 >> 12);
    *(_QWORD *)&v77 = v3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v38 + 1 < 8 )
      v33 = v38 + 1;
    *((_QWORD *)&v77 + 1) = v33 << 12;
LABEL_77:
    CurrentThread = (struct _KTHREAD *)&v77;
    *(_QWORD *)&v80 = 0LL;
    *((_QWORD *)&v78 + 1) = &v77;
    v79 = 1uLL;
    LOWORD(v78) = 2;
    v94 = v33;
    goto LABEL_78;
  }
  CurrentThread = *(struct _KTHREAD **)(a1 + 56);
  v33 = 256LL;
  v94 = 256LL;
  v34 = v31 - (v3 >> 12) + 1;
  v35 = *(_OWORD *)&CurrentThread->Header.WaitListHead.Blink;
  v78 = *(_OWORD *)&CurrentThread->Header.Lock;
  v79 = v35;
  v36 = *(_OWORD *)&CurrentThread->StackLimit;
  v80 = *(_OWORD *)&CurrentThread->QuantumTarget;
  v81 = v36;
  v37 = *(_OWORD *)&CurrentThread->CurrentRunTime;
  v82 = *(_OWORD *)&CurrentThread->ThreadLock;
  v83 = v37;
  if ( v34 < 0x100 )
  {
    v33 = v34;
    v94 = v34;
  }
LABEL_78:
  v39 = 0LL;
  v40 = 0LL;
  if ( v33 )
  {
    while ( 1 )
    {
      v41 = (_QWORD *)(*((_QWORD *)&v78 + 1) + 16LL * *((_QWORD *)&v79 + 1));
      v42 = (*v41 + ((_QWORD)v80 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      v43 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v40 )
      {
        LOBYTE(CurrentThread) = v39;
        if ( v42 != v39 + 4096 || ((v42 >> 9) & 0xFF8) == 0 )
          return (char)CurrentThread;
      }
      v44 = *(_QWORD *)v43;
      if ( v43 >= 0xFFFFF6FB7DBED000uLL
        && v43 <= v11
        && (unsigned int)MiPteHasShadow()
        && (v44 & 1) != 0
        && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
      {
        v45 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v45 )
        {
          v46 = *((_QWORD *)&v45->Flink + ((v43 >> 3) & 0x1FF));
          v47 = v44 | 0x20;
          if ( (v46 & 0x20) == 0 )
            v47 = v44;
          v44 = v47;
          if ( (v46 & 0x42) != 0 )
            v44 = v47 | 0x42;
        }
      }
      if ( !v44 )
        break;
LABEL_163:
      v71 = *(_DWORD *)v41 & 0xFFF;
      v72 = v41[1] + 4095LL;
      *(_QWORD *)&v80 = v80 + 1;
      if ( (_QWORD)v80 != (unsigned __int64)(v72 + v71) >> 12
        || (v73 = *((_QWORD *)&v79 + 1) + 1LL,
            *(_QWORD *)&v80 = 0LL,
            *((_QWORD *)&v79 + 1) = v73,
            v73 >= (unsigned __int64)v79)
        || (LOBYTE(CurrentThread) = BYTE8(v78), *(_QWORD *)(*((_QWORD *)&v78 + 1) + 16 * v73 + 8)) )
      {
        LOBYTE(CurrentThread) = v79;
        if ( *((_QWORD *)&v79 + 1) != (_QWORD)v79 )
        {
          ++v40;
          v11 = 0xFFFFF6FB7DBED7F8uLL;
          v39 = v42;
          if ( v40 < v33 )
            continue;
        }
      }
      return (char)CurrentThread;
    }
    CurrentThread = (struct _KTHREAD *)MiGetProtoPteAddress(v28, v42 >> 12, 4LL, &v84);
    v48 = CurrentThread;
    if ( !CurrentThread )
      return (char)CurrentThread;
    v49 = *(_QWORD **)(v28 + 120);
    if ( (__int64)v49 < 0 )
    {
      CurrentThread = (struct _KTHREAD *)((unsigned __int64)(*v49 - 1LL) >> 12);
      if ( (v42 >> 12) - v85 > (unsigned __int64)CurrentThread )
        return (char)CurrentThread;
    }
    v50 = (__int64)((v43 << 25) - v86) >> 16;
    v51 = 0;
    while ( v50 > 0x7FFFFFFEFFFFLL )
    {
      ++v51;
      v50 = (__int64)((v50 << 25) - v86) >> 16;
      if ( v51 >= 3 )
        goto LABEL_100;
    }
    v54 = (((unsigned __int64)((__int64)((v43 << 25) - v86) >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v55 = 0xFFFFF6FB7DBED000uLL;
    v56 = *(_QWORD *)v54;
    v57 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v54 >= 0xFFFFF6FB7DBED000uLL
      && v54 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v56 & 1) != 0
      && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
    {
      v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v58 )
      {
        v59 = *((_QWORD *)&v58->Flink + ((v54 >> 3) & 0x1FF));
        v54 = v56 | 0x20;
        if ( (v59 & 0x20) == 0 )
          v54 = v56;
        v56 = v54;
        if ( (v59 & 0x42) != 0 )
          v56 = v54 | 0x42;
      }
    }
    v76 = v56;
    if ( (unsigned __int64)&v76 >= v55
      && (unsigned __int64)&v76 <= v57
      && (unsigned int)MiPteHasShadow()
      && (v56 & 1) != 0
      && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
    {
      v54 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v54 )
      {
        v60 = *(_QWORD *)(v54 + 8 * (((unsigned __int64)&v76 >> 3) & 0x1FF));
        v54 = v56 | 0x20;
        if ( (v60 & 0x20) == 0 )
          v54 = v56;
        v56 = v54;
        if ( (v60 & 0x42) != 0 )
          v56 = v54 | 0x42;
      }
    }
    v61 = (v56 >> 12) & 0xFFFFFFFFFLL;
    v62 = 48 * v61 - 0x58000000000LL;
    v93 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v93, v61, v54, v57);
        while ( *(__int64 *)(v62 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 24), 0x3FuLL) );
      v55 = 0xFFFFF6FB7DBED000uLL;
    }
    *(_QWORD *)(v62 + 16) ^= ((unsigned int)*(_QWORD *)(v62 + 16) ^ ((unsigned int)*(_QWORD *)(v62 + 16) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v63 = *(_QWORD *)(v62 + 8) | 0x8000000000000000uLL;
    v89 = 0LL;
    v90 = 0LL;
    if ( (unsigned __int64)((v63 >> 47) + 1) > 1 )
    {
LABEL_100:
      v52 = 0xFFFFF6FB7DBED7F8uLL;
      goto LABEL_101;
    }
    v64 = 4LL;
    *(_QWORD *)&v89 = (((unsigned __int64)v63 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v89 + 1) = (((unsigned __int64)v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v90 = ((*((_QWORD *)&v89 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v52 = 0xFFFFF6FB7DBED7F8uLL;
    *((_QWORD *)&v90 + 1) = (((unsigned __int64)v90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v65 = *((_QWORD *)&v88 + v64-- + 1);
      v66 = *(_QWORD *)v65;
      if ( v65 >= v55
        && v65 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v66 & 1) == 0 )
          break;
        if ( (v66 & 0x20) == 0 || (v66 & 0x42) == 0 )
        {
          v67 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v67 )
          {
            v68 = *((_QWORD *)&v67->Flink + ((v65 >> 3) & 0x1FF));
            v69 = v66 | 0x20;
            if ( (v68 & 0x20) == 0 )
              v69 = v66;
            LOBYTE(v66) = v69;
            if ( (v68 & 0x42) != 0 )
              LOBYTE(v66) = v69 | 0x42;
          }
        }
      }
    }
    while ( (v66 & 1) != 0 && (v66 & 0x80u) == 0LL && v64 );
LABEL_101:
    if ( v91 == 256 )
    {
      v53 = MiSwizzleInvalidPte(((_QWORD)v48 << 16) | 0x400LL);
    }
    else
    {
      v53 = 32 * (v91 & 0x1F | 0xFFFFFFFFF8000020uLL);
      if ( qword_140C4DF80 )
      {
        if ( (qword_140C4DF80 & v53) != 0 )
          v53 |= 0x10uLL;
        else
          v53 |= qword_140C4DF80;
      }
    }
    if ( v43 >= 0xFFFFF6FB7DBED000uLL && v43 <= v52 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v53 & 1) != 0 )
          v53 |= v70;
        *(_QWORD *)v43 = v53;
        MiWritePteShadow(v43, v53);
        goto LABEL_162;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v53 & 1) != 0 )
      {
        v53 |= v70;
      }
    }
    *(_QWORD *)v43 = v53;
LABEL_162:
    v33 = v94;
    goto LABEL_163;
  }
  return (char)CurrentThread;
}

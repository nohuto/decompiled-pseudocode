/*
 * XREFs of MiResolveSharedZeroFault @ 0x14032EB70
 * Callers:
 *     MiZeroFault @ 0x14034EE60 (MiZeroFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
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
  __int64 v28; // r8
  __int64 v29; // r13
  unsigned int v30; // edx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r15
  _QWORD *v42; // r12
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // rsi
  __int64 v45; // rdx
  struct _LIST_ENTRY *v46; // r8
  __int64 v47; // rax
  __int64 v48; // r8
  struct _KTHREAD *v49; // rbx
  _QWORD *v50; // rax
  unsigned __int64 v51; // rax
  unsigned int v52; // ecx
  unsigned __int64 v53; // r11
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // r9
  struct _LIST_ENTRY *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdi
  signed __int64 v64; // rcx
  __int64 v65; // r9
  unsigned __int64 v66; // r8
  __int64 v67; // rcx
  struct _LIST_ENTRY *v68; // rax
  __int64 v69; // rax
  char v70; // r8
  __int64 v71; // r8
  __int64 v72; // rcx
  __int64 v73; // rax
  unsigned __int64 v74; // rcx
  unsigned __int64 v76; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v77; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v78; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v79; // [rsp+40h] [rbp-C0h]
  __int128 v80; // [rsp+50h] [rbp-B0h]
  __int128 v81; // [rsp+60h] [rbp-A0h]
  __int128 v82; // [rsp+70h] [rbp-90h]
  __int128 v83; // [rsp+80h] [rbp-80h]
  __int128 v84; // [rsp+90h] [rbp-70h]
  __int64 v85; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v86; // [rsp+A8h] [rbp-58h]
  __int64 v87; // [rsp+B0h] [rbp-50h]
  __int128 v88; // [rsp+B8h] [rbp-48h]
  __int128 v89; // [rsp+C8h] [rbp-38h]
  __int128 v90; // [rsp+D8h] [rbp-28h]
  __int128 v91; // [rsp+E8h] [rbp-18h]
  int v92; // [rsp+150h] [rbp+50h]
  int v93; // [rsp+158h] [rbp+58h] BYREF
  int v94; // [rsp+160h] [rbp+60h] BYREF
  __int64 v95; // [rsp+168h] [rbp+68h]

  v1 = *(unsigned __int64 **)(a1 + 8);
  v78 = 0LL;
  v85 = 0LL;
  v3 = *v1;
  v4 = (*v1 >> 9) & 0x7FFFFFFFF8LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v5 = *(_DWORD *)(a1 + 32);
  v6 = v4 - 0x98000000000LL;
  v7 = *(_QWORD *)(a1 + 24);
  v92 = v5;
  v8 = 0;
  v87 = 0LL;
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
  v76 = v13;
  if ( (unsigned __int64)&v76 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v76 <= v11
    && (unsigned int)MiPteHasShadow()
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    v12 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v12 )
    {
      v16 = *(_QWORD *)(v12 + 8 * (((unsigned __int64)&v76 >> 3) & 0x1FF));
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
  v93 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v93, v17, v12, v9);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
    v5 = v92;
    v11 = 0xFFFFF6FB7DBED7F8uLL;
  }
  *(_QWORD *)(v18 + 16) ^= ((unsigned int)*(_QWORD *)(v18 + 16) ^ ((unsigned int)*(_QWORD *)(v18 + 16) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL;
  v88 = 0LL;
  v89 = 0LL;
  if ( (unsigned __int64)((v19 >> 47) + 1) <= 1 )
  {
    *(_QWORD *)&v88 = (((unsigned __int64)v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v88 + 1) = (((unsigned __int64)v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v89 = ((*((_QWORD *)&v88 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v89 + 1) = (((unsigned __int64)v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = 4LL;
    do
    {
      v21 = *(&v87 + v20--);
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
    if ( qword_140C4DF40 )
    {
      if ( (v26 & qword_140C4DF40) != 0 )
        v26 |= 0x10uLL;
      else
        v26 |= qword_140C4DF40;
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
  if ( !HIBYTE(word_140C4E008) && (v26 & 1) != 0 )
    v26 |= 0x8000000000000000uLL;
  *(_QWORD *)v6 = v26;
  LOBYTE(CurrentThread) = MiWritePteShadow(v6, v26, v28);
LABEL_65:
  v29 = *(_QWORD *)(a1 + 64);
  if ( !v29 )
    return (char)CurrentThread;
  v30 = *(_DWORD *)(v29 + 48);
  v31 = *(unsigned int *)(v29 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 32) << 32);
  v32 = *(unsigned int *)(v29 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 33) << 32);
  v86 = v31;
  if ( MiVadPageSizes[(v30 >> 18) & 3] == 16 )
  {
    v33 = v3 & 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v78 + 1) = 0x10000LL;
    *(_QWORD *)&v78 = v33;
    CurrentThread = (struct _KTHREAD *)(v33 >> 12);
    if ( v33 >> 12 < v31 )
      return (char)CurrentThread;
    CurrentThread = (struct _KTHREAD *)((v33 + 0xFFFF) >> 12);
    if ( (unsigned __int64)CurrentThread > v32 )
      return (char)CurrentThread;
    v34 = 16LL;
    goto LABEL_77;
  }
  LODWORD(CurrentThread) = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    if ( (v30 & 0x70) == 0x20 )
      return (char)CurrentThread;
    v34 = 8LL;
    v39 = v32 - (v3 >> 12);
    *(_QWORD *)&v78 = v3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v39 + 1 < 8 )
      v34 = v39 + 1;
    *((_QWORD *)&v78 + 1) = v34 << 12;
LABEL_77:
    CurrentThread = (struct _KTHREAD *)&v78;
    *(_QWORD *)&v81 = 0LL;
    *((_QWORD *)&v79 + 1) = &v78;
    v80 = 1uLL;
    LOWORD(v79) = 2;
    v95 = v34;
    goto LABEL_78;
  }
  CurrentThread = *(struct _KTHREAD **)(a1 + 56);
  v34 = 256LL;
  v95 = 256LL;
  v35 = v32 - (v3 >> 12) + 1;
  v36 = *(_OWORD *)&CurrentThread->Header.WaitListHead.Blink;
  v79 = *(_OWORD *)&CurrentThread->Header.Lock;
  v80 = v36;
  v37 = *(_OWORD *)&CurrentThread->StackLimit;
  v81 = *(_OWORD *)&CurrentThread->QuantumTarget;
  v82 = v37;
  v38 = *(_OWORD *)&CurrentThread->CurrentRunTime;
  v83 = *(_OWORD *)&CurrentThread->ThreadLock;
  v84 = v38;
  if ( v35 < 0x100 )
  {
    v34 = v35;
    v95 = v35;
  }
LABEL_78:
  v40 = 0LL;
  v41 = 0LL;
  if ( v34 )
  {
    while ( 1 )
    {
      v42 = (_QWORD *)(*((_QWORD *)&v79 + 1) + 16LL * *((_QWORD *)&v80 + 1));
      v43 = (*v42 + ((_QWORD)v81 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v41 )
      {
        LOBYTE(CurrentThread) = v40;
        if ( v43 != v40 + 4096 || ((v43 >> 9) & 0xFF8) == 0 )
          return (char)CurrentThread;
      }
      v45 = *(_QWORD *)v44;
      if ( v44 >= 0xFFFFF6FB7DBED000uLL
        && v44 <= v11
        && (unsigned int)MiPteHasShadow()
        && (v45 & 1) != 0
        && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
      {
        v46 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v46 )
        {
          v47 = *((_QWORD *)&v46->Flink + ((v44 >> 3) & 0x1FF));
          v48 = v45 | 0x20;
          if ( (v47 & 0x20) == 0 )
            v48 = v45;
          v45 = v48;
          if ( (v47 & 0x42) != 0 )
            v45 = v48 | 0x42;
        }
      }
      if ( !v45 )
        break;
LABEL_163:
      v72 = *(_DWORD *)v42 & 0xFFF;
      v73 = v42[1] + 4095LL;
      *(_QWORD *)&v81 = v81 + 1;
      if ( (_QWORD)v81 != (unsigned __int64)(v73 + v72) >> 12
        || (v74 = *((_QWORD *)&v80 + 1) + 1LL,
            *(_QWORD *)&v81 = 0LL,
            *((_QWORD *)&v80 + 1) = v74,
            v74 >= (unsigned __int64)v80)
        || (LOBYTE(CurrentThread) = BYTE8(v79), *(_QWORD *)(*((_QWORD *)&v79 + 1) + 16 * v74 + 8)) )
      {
        LOBYTE(CurrentThread) = v80;
        if ( *((_QWORD *)&v80 + 1) != (_QWORD)v80 )
        {
          ++v41;
          v11 = 0xFFFFF6FB7DBED7F8uLL;
          v40 = v43;
          if ( v41 < v34 )
            continue;
        }
      }
      return (char)CurrentThread;
    }
    CurrentThread = (struct _KTHREAD *)MiGetProtoPteAddress(v29, v43 >> 12, 4LL, &v85);
    v49 = CurrentThread;
    if ( !CurrentThread )
      return (char)CurrentThread;
    v50 = *(_QWORD **)(v29 + 120);
    if ( (__int64)v50 < 0 )
    {
      CurrentThread = (struct _KTHREAD *)((unsigned __int64)(*v50 - 1LL) >> 12);
      if ( (v43 >> 12) - v86 > (unsigned __int64)CurrentThread )
        return (char)CurrentThread;
    }
    v51 = (__int64)((v44 << 25) - v87) >> 16;
    v52 = 0;
    while ( v51 > 0x7FFFFFFEFFFFLL )
    {
      ++v52;
      v51 = (__int64)((v51 << 25) - v87) >> 16;
      if ( v52 >= 3 )
        goto LABEL_100;
    }
    v55 = (((unsigned __int64)((__int64)((v44 << 25) - v87) >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v56 = 0xFFFFF6FB7DBED000uLL;
    v57 = *(_QWORD *)v55;
    v58 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v55 >= 0xFFFFF6FB7DBED000uLL
      && v55 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v57 & 1) != 0
      && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
    {
      v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v59 )
      {
        v60 = *((_QWORD *)&v59->Flink + ((v55 >> 3) & 0x1FF));
        v55 = v57 | 0x20;
        if ( (v60 & 0x20) == 0 )
          v55 = v57;
        v57 = v55;
        if ( (v60 & 0x42) != 0 )
          v57 = v55 | 0x42;
      }
    }
    v77 = v57;
    if ( (unsigned __int64)&v77 >= v56
      && (unsigned __int64)&v77 <= v58
      && (unsigned int)MiPteHasShadow()
      && (v57 & 1) != 0
      && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
    {
      v55 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v55 )
      {
        v61 = *(_QWORD *)(v55 + 8 * (((unsigned __int64)&v77 >> 3) & 0x1FF));
        v55 = v57 | 0x20;
        if ( (v61 & 0x20) == 0 )
          v55 = v57;
        v57 = v55;
        if ( (v61 & 0x42) != 0 )
          v57 = v55 | 0x42;
      }
    }
    v62 = (v57 >> 12) & 0xFFFFFFFFFLL;
    v63 = 48 * v62 - 0x58000000000LL;
    v94 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v94, v62, v55, v58);
        while ( *(__int64 *)(v63 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) );
      v56 = 0xFFFFF6FB7DBED000uLL;
    }
    *(_QWORD *)(v63 + 16) ^= ((unsigned int)*(_QWORD *)(v63 + 16) ^ ((unsigned int)*(_QWORD *)(v63 + 16) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v64 = *(_QWORD *)(v63 + 8) | 0x8000000000000000uLL;
    v90 = 0LL;
    v91 = 0LL;
    if ( (unsigned __int64)((v64 >> 47) + 1) > 1 )
    {
LABEL_100:
      v53 = 0xFFFFF6FB7DBED7F8uLL;
      goto LABEL_101;
    }
    v65 = 4LL;
    *(_QWORD *)&v90 = (((unsigned __int64)v64 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v90 + 1) = (((unsigned __int64)v90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v91 = ((*((_QWORD *)&v90 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v53 = 0xFFFFF6FB7DBED7F8uLL;
    *((_QWORD *)&v91 + 1) = (((unsigned __int64)v91 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v66 = *((_QWORD *)&v89 + v65-- + 1);
      v67 = *(_QWORD *)v66;
      if ( v66 >= v56
        && v66 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v67 & 1) == 0 )
          break;
        if ( (v67 & 0x20) == 0 || (v67 & 0x42) == 0 )
        {
          v68 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v68 )
          {
            v69 = *((_QWORD *)&v68->Flink + ((v66 >> 3) & 0x1FF));
            v70 = v67 | 0x20;
            if ( (v69 & 0x20) == 0 )
              v70 = v67;
            LOBYTE(v67) = v70;
            if ( (v69 & 0x42) != 0 )
              LOBYTE(v67) = v70 | 0x42;
          }
        }
      }
    }
    while ( (v67 & 1) != 0 && (v67 & 0x80u) == 0LL && v65 );
LABEL_101:
    if ( v92 == 256 )
    {
      v54 = MiSwizzleInvalidPte(((_QWORD)v49 << 16) | 0x400LL);
    }
    else
    {
      v54 = 32 * (v92 & 0x1F | 0xFFFFFFFFF8000020uLL);
      if ( qword_140C4DF40 )
      {
        if ( (qword_140C4DF40 & v54) != 0 )
          v54 |= 0x10uLL;
        else
          v54 |= qword_140C4DF40;
      }
    }
    if ( v44 >= 0xFFFFF6FB7DBED000uLL && v44 <= v53 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (v54 & 1) != 0 )
          v54 |= v71;
        *(_QWORD *)v44 = v54;
        MiWritePteShadow(v44, v54, v71);
        goto LABEL_162;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v54 & 1) != 0 )
      {
        v54 |= v71;
      }
    }
    *(_QWORD *)v44 = v54;
LABEL_162:
    v34 = v95;
    goto LABEL_163;
  }
  return (char)CurrentThread;
}

/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x140237520
 * Callers:
 *     <none>
 * Callees:
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1402BAA60 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r13
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  char v7; // di
  ULONG_PTR v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  int v26; // eax
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rbx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rcx
  unsigned __int64 *v33; // rbx
  __int64 *v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // r8
  struct _LIST_ENTRY *v37; // rax
  __int64 v38; // rax
  char v39; // r8^7
  unsigned __int8 v40; // cl
  char v41; // dl
  unsigned __int8 v42; // dl
  char v43; // cl
  __int64 v44; // r10
  __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned int v53; // ecx
  __int64 v54; // r14
  unsigned __int64 v55; // rdx
  __int64 updated; // rax
  bool v57; // zf
  unsigned __int64 v58; // r8
  __int64 *v59; // r9
  __int64 v60; // r12
  __int64 v61; // r10
  __int64 *v62; // rdx
  unsigned __int64 v63; // rdx
  __int64 v65; // [rsp+20h] [rbp-48h]
  __int64 v66; // [rsp+28h] [rbp-40h]
  int v67; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v68; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v66 = *(_QWORD *)(v3 + 16);
  if ( a3 )
    return 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v65 = *(_QWORD *)(v3 + 24);
  while ( 1 )
  {
    v12 = MI_READ_PTE_LOCK_FREE(a2);
    v68 = v12;
    if ( (v12 & 1) != 0 )
      break;
    if ( (v12 & 0x400) != 0 )
      goto LABEL_124;
    if ( (v12 & 0x800) == 0 )
    {
      if ( (v12 & 2) == 0 )
        goto LABEL_124;
      v68 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
      v16 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (unsigned int)MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow(v18, v17, v19, v20) )
        {
          v21 = 1;
          if ( !HIBYTE(word_140C4DE08) && (v12 & 1) != 0 )
            v16 = v12 & 0x7FFFFFFFFFFFFFFDLL | 0x8000000000000000uLL;
          goto LABEL_23;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v12 & 1) != 0 )
        {
          v16 = v12 & 0x7FFFFFFFFFFFFFFDLL | 0x8000000000000000uLL;
        }
      }
      v21 = 0;
LABEL_23:
      *(_QWORD *)a2 = v16;
      v6 = v12;
      if ( v21 )
        MiWritePteShadow(a2, v16);
      goto LABEL_124;
    }
    v13 = MiLockTransitionLeafPage(a2);
    v8 = v13;
    if ( v13 )
    {
      v14 = *(_BYTE *)(v13 + 34);
      v7 = 1;
      if ( (v14 & 0x28) == 0 )
      {
        v15 = *(_QWORD *)(v8 + 16);
        if ( (v15 & 2) != 0 )
        {
          v6 = *(_QWORD *)(v8 + 16);
          if ( *(_WORD *)(v8 + 32) || (v14 & 7) != 3 )
          {
            *(_QWORD *)(v8 + 16) = v15 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          else
          {
            MiUnlinkPageFromList(v8);
            *(_QWORD *)(v8 + 16) &= ~2uLL;
            MiInsertPageInList(v8, 8u);
          }
        }
      }
      goto LABEL_124;
    }
  }
  if ( (unsigned __int64)&v68 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v68 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v68, v9, v10, v11)
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v23 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v68 >> 3) & 0x1FF));
      v24 = v12 | 0x20;
      if ( (v23 & 0x20) == 0 )
        v24 = v12;
      v12 = v24;
      if ( (v23 & 0x42) != 0 )
        v12 = v24;
    }
  }
  v25 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL);
  if ( ((*(_QWORD *)(v25 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    v8 = v25 - 0x58000000000LL;
    v26 = MI_PFN_IS_PROTO(v25 - 0x58000000000LL);
    v29 = 0xFFFFF68000000000uLL;
    if ( v26 )
    {
      v30 = *(_QWORD **)(v3 + 8);
      if ( !v30 )
        goto LABEL_124;
LABEL_114:
      v58 = v30[2];
      if ( v58 < v30[1] )
      {
        v59 = (__int64 *)(*v30 + 16 * v58);
        v60 = (__int64)(a2 << 25) >> 16;
        if ( !v58 || (v61 = *(v59 - 1), v62 = v59 - 1, v61 + *(v59 - 2) != v60) )
        {
          v30[2] = v58 + 1;
          v62 = v59 + 1;
          *v59 = v60;
          v59[1] = 0LL;
          v61 = 0LL;
        }
        *v62 = v61 + 4096;
        ++v30[3];
        if ( (v7 & 2) != 0 )
          ++*(_QWORD *)(v3 + 136);
        if ( (v7 & 4) != 0 )
        {
          ++*(_QWORD *)(v3 + 120);
        }
        else if ( (v7 & 8) != 0 )
        {
          ++*(_QWORD *)(v3 + 128);
        }
      }
      goto LABEL_124;
    }
    if ( (*(_QWORD *)(v25 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL) != a2 )
      goto LABEL_124;
    v7 = 1;
    v67 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 - 0x57FFFFFFFE8LL), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v67, v29);
        while ( *(__int64 *)(v25 - 0x57FFFFFFFE8LL) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 - 0x57FFFFFFFE8LL), 0x3FuLL) );
      v27 = 0xFFFFF6FB7DBED7F8uLL;
      v28 = 0xFFFFF6FB7DBED000uLL;
    }
    v31 = 0xFFFFFA8000000022uLL;
    if ( (*(_BYTE *)(v25 - 0x57FFFFFFFDELL) & 8) != 0 )
      goto LABEL_124;
    v32 = *(_QWORD *)(v25 - 0x57FFFFFFFF0LL);
    v33 = (unsigned __int64 *)(v25 - 0x57FFFFFFFF0LL);
    if ( (v32 & 2) != 0 )
    {
      v6 = *(_QWORD *)(v25 - 0x57FFFFFFFF0LL);
      v32 &= ~2uLL;
      *v33 = v32;
    }
    if ( !*(_DWORD *)(v3 + 144) )
    {
      if ( *(_WORD *)(v25 - 0x57FFFFFFFE0LL) != 1 )
        goto LABEL_124;
      if ( (*(_BYTE *)(v66 + 184) & 7) == 0 )
      {
        v34 = (__int64 *)(((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
        v35 = *v34;
        if ( (unsigned __int64)v34 >= v28
          && (unsigned __int64)v34 <= v27
          && (unsigned int)MiPteHasShadow(v32, v35, v34, 0xFFFFFA8000000022uLL)
          && (v35 & 1) != 0
          && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
        {
          v37 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v37 )
          {
            v38 = *((_QWORD *)&v37->Flink + ((v36 >> 3) & 0x1FF));
            v39 = HIBYTE(v35);
            if ( (v38 & 0x20) == 0 )
              v39 = HIBYTE(v35);
            HIBYTE(v35) = v39;
            if ( (v38 & 0x42) != 0 )
              HIBYTE(v35) = v39;
          }
        }
        if ( (HIBYTE(v35) & 0xF) == 8 )
          goto LABEL_124;
      }
    }
    v40 = *(_BYTE *)(v25 + v31);
    if ( (v68 & 0x42) == 0 && (v40 & 0x10) == 0 )
    {
      if ( (*(_DWORD *)v33 & 4) == 0 )
        goto LABEL_124;
      v7 = 3;
    }
    if ( (v40 & 0x10) == 0 )
    {
      v41 = *(_BYTE *)(v25 + v31);
      if ( (*(_DWORD *)v33 & 0x400LL) == 0 && (v40 & 8) == 0 )
      {
        v5 = MiCapturePageFileInfoInline(v25 - 0x57FFFFFFFF0LL, 1LL);
        v31 = 0xFFFFFA8000000022uLL;
        v41 = *(_BYTE *)(v25 - 0x57FFFFFFFDELL);
      }
      v42 = v41 | 0x10;
      *(_BYTE *)(v25 + v31) = v42;
      v40 = v42;
    }
    v43 = v40 >> 6;
    if ( v43 != 1 )
    {
      if ( v43 == 2 )
      {
        v7 |= 4u;
      }
      else if ( !v43 )
      {
        v7 |= 8u;
      }
    }
    v44 = v65;
    if ( *(_DWORD *)(v3 + 32) == -1 )
    {
      v45 = -9LL;
      v46 = -2049LL;
      v47 = *(_QWORD *)(v65 + 8LL * *(unsigned int *)(v65 + 1156) + 6944);
      v48 = *v33 & 0x400;
      if ( (*v33 & 0x400) != 0 )
        v45 = -2049LL;
      v49 = *v33 & v45;
      if ( !v48 )
        v49 &= 0xFFFFFFFFFFFFFFF9uLL;
      if ( v47 )
      {
        v46 = *(unsigned __int16 *)(v47 + 204);
        if ( v49 )
        {
          v48 = qword_140C4DD40;
          if ( qword_140C4DD40 )
          {
            if ( (v49 & 0x10) != 0 )
              LODWORD(v49) = v49 & 0xFFFFFFEF;
            else
              LODWORD(v49) = ~(_DWORD)qword_140C4DD40 & v49;
          }
          v50 = v49 | 0xFFFFFFFF00000000uLL;
          if ( qword_140C4DD40 )
          {
            if ( (v50 & qword_140C4DD40) != 0 )
              v50 |= 0x10uLL;
            else
              v50 |= qword_140C4DD40;
          }
        }
        else
        {
          v50 = MiSwizzleInvalidPte(0xFFFFFFFF00000000uLL, 0LL, v47, v46);
        }
        v49 = (unsigned __int16)(v50 ^ ((_WORD)v46 << 12)) & 0xF000 ^ v50;
      }
      v68 = v49;
      if ( (unsigned __int64)v33 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v33 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_104;
      if ( (unsigned int)MiPteHasShadow(v48, v49, v47, v46) )
      {
        v51 = v49;
        if ( !HIBYTE(word_140C4DE08) && (v49 & 1) != 0 )
          v51 = v49 | 0x8000000000000000uLL;
        *v33 = v51;
        MiWritePteShadow(v25 - 0x57FFFFFFFF0LL, v51);
        v44 = v65;
        goto LABEL_105;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
LABEL_104:
        *v33 = v49;
        goto LABEL_105;
      }
      v52 = v49 | 0x8000000000000000uLL;
      if ( (v49 & 1) == 0 )
        v52 = v49;
      *v33 = v52;
    }
LABEL_105:
    _InterlockedAnd64((volatile signed __int64 *)(v25 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    v53 = *(_DWORD *)(v3 + 32);
    v7 &= ~1u;
    v30 = *(_QWORD **)v3;
    if ( v53 != -1 )
    {
      v54 = v3 + 16LL * v53;
      if ( v53 >= 5 || !*(_DWORD *)(v54 + 48) )
        goto LABEL_124;
      MiReservePageFileSpaceForPage(v44, a2, 128LL, v54 + 40);
      v55 = *(_QWORD *)(v54 + 40);
      if ( qword_140C4DD40 && (v55 & 0x10) == 0 )
        v55 &= ~qword_140C4DD40;
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v54 + 40), HIDWORD(v55) + 1);
      v57 = (*(_DWORD *)(v54 + 48))-- == 1;
      *(_QWORD *)(v54 + 40) = updated;
      if ( v57 )
        ++*(_DWORD *)(v3 + 32);
      v7 |= 0x10u;
    }
    goto LABEL_114;
  }
LABEL_124:
  if ( (v7 & 1) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 )
  {
    v63 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v6 & 4) == 0 )
      v63 = v6;
    MiReleasePageFileInfo(v65, v63, 0LL);
  }
  if ( v5 )
    MiReleasePageFileInfo(v65, v5, 0LL);
  return 0LL;
}

/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x140337C00
 * Callers:
 *     <none>
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiReservePageFileSpaceForPage @ 0x1402E1EB0 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r13
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  char v7; // di
  ULONG_PTR v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  int v14; // edx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r11
  __int64 v24; // rdx
  _QWORD *v25; // rbx
  unsigned __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int64 *v28; // rbx
  __int64 *v29; // r8
  __int64 v30; // rdx
  unsigned __int64 v31; // r8
  struct _LIST_ENTRY *v32; // rax
  __int64 v33; // rax
  char v34; // r8^7
  unsigned __int8 v35; // cl
  char v36; // dl
  unsigned __int8 v37; // dl
  char v38; // cl
  __int64 v39; // r10
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned __int64 v42; // rdx
  __int16 v43; // r9
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // r14
  unsigned __int64 v49; // rdx
  __int64 updated; // rax
  bool v51; // zf
  unsigned __int64 v52; // r8
  __int64 *v53; // r9
  __int64 v54; // r12
  __int64 v55; // r10
  __int64 *v56; // rdx
  unsigned __int64 v57; // rdx
  __int64 v59; // [rsp+20h] [rbp-48h]
  __int64 v60; // [rsp+28h] [rbp-40h]
  int v61; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v62; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v60 = *(_QWORD *)(v3 + 16);
  if ( a3 )
    return 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v59 = *(_QWORD *)(v3 + 24);
  while ( 1 )
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2);
    v62 = v9;
    if ( (v9 & 1) != 0 )
      break;
    if ( (v9 & 0x400) != 0 )
      goto LABEL_124;
    if ( (v9 & 0x800) == 0 )
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_124;
      v62 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
      v13 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (unsigned int)MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v14 = 1;
          if ( !HIBYTE(word_140C4E048) && (v9 & 1) != 0 )
            v13 = v9 & 0x7FFFFFFFFFFFFFFDLL | 0x8000000000000000uLL;
          goto LABEL_23;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v9 & 1) != 0 )
        {
          v13 = v9 & 0x7FFFFFFFFFFFFFFDLL | 0x8000000000000000uLL;
        }
      }
      v14 = 0;
LABEL_23:
      *(_QWORD *)a2 = v13;
      v6 = v9;
      if ( v14 )
        MiWritePteShadow(a2, v13);
      goto LABEL_124;
    }
    v10 = MiLockTransitionLeafPage(a2, 0LL);
    v8 = v10;
    if ( v10 )
    {
      v11 = *(_BYTE *)(v10 + 34);
      v7 = 1;
      if ( (v11 & 0x28) == 0 )
      {
        v12 = *(_QWORD *)(v8 + 16);
        if ( (v12 & 2) != 0 )
        {
          v6 = *(_QWORD *)(v8 + 16);
          if ( *(_WORD *)(v8 + 32) || (v11 & 7) != 3 )
          {
            *(_QWORD *)(v8 + 16) = v12 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          else
          {
            MiUnlinkPageFromList(v8, 0);
            *(_QWORD *)(v8 + 16) &= ~2uLL;
            MiInsertPageInList(v8, 8u);
          }
        }
      }
      goto LABEL_124;
    }
  }
  if ( (unsigned __int64)&v62 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v62 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v62 >> 3) & 0x1FF));
      v17 = v9 | 0x20;
      if ( (v16 & 0x20) == 0 )
        v17 = v9;
      v9 = v17;
      if ( (v16 & 0x42) != 0 )
        v9 = v17;
    }
  }
  v18 = 48 * ((v9 >> 12) & 0xFFFFFFFFFLL);
  if ( ((*(_QWORD *)(v18 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    v8 = v18 - 0x58000000000LL;
    v19 = MI_PFN_IS_PROTO(v18 - 0x58000000000LL);
    v24 = 0xFFFFF68000000000uLL;
    if ( v19 )
    {
      v25 = *(_QWORD **)(v3 + 8);
      if ( !v25 )
        goto LABEL_124;
LABEL_114:
      v52 = v25[2];
      if ( v52 < v25[1] )
      {
        v53 = (__int64 *)(*v25 + 16 * v52);
        v54 = (__int64)(a2 << 25) >> 16;
        if ( !v52 || (v55 = *(v53 - 1), v56 = v53 - 1, v55 + *(v53 - 2) != v54) )
        {
          v25[2] = v52 + 1;
          v56 = v53 + 1;
          *v53 = v54;
          v53[1] = 0LL;
          v55 = 0LL;
        }
        *v56 = v55 + 4096;
        ++v25[3];
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
    if ( (*(_QWORD *)(v18 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL) != a2 )
      goto LABEL_124;
    v7 = 1;
    v61 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 - 0x57FFFFFFFE8LL), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v61, v24, v20, v21);
        while ( *(__int64 *)(v18 - 0x57FFFFFFFE8LL) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 - 0x57FFFFFFFE8LL), 0x3FuLL) );
      v22 = 0xFFFFF6FB7DBED7F8uLL;
      v23 = 0xFFFFF6FB7DBED000uLL;
    }
    v26 = 0xFFFFFA8000000022uLL;
    if ( (*(_BYTE *)(v18 - 0x57FFFFFFFDELL) & 8) != 0 )
      goto LABEL_124;
    v27 = *(_QWORD *)(v18 - 0x57FFFFFFFF0LL);
    v28 = (unsigned __int64 *)(v18 - 0x57FFFFFFFF0LL);
    if ( (v27 & 2) != 0 )
    {
      v6 = *(_QWORD *)(v18 - 0x57FFFFFFFF0LL);
      *v28 = v27 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    if ( !*(_DWORD *)(v3 + 144) )
    {
      if ( *(_WORD *)(v18 - 0x57FFFFFFFE0LL) != 1 )
        goto LABEL_124;
      if ( (*(_BYTE *)(v60 + 184) & 7) == 0 )
      {
        v29 = (__int64 *)(((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
        v30 = *v29;
        if ( (unsigned __int64)v29 >= v23
          && (unsigned __int64)v29 <= v22
          && (unsigned int)MiPteHasShadow()
          && (v30 & 1) != 0
          && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
        {
          v32 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v32 )
          {
            v33 = *((_QWORD *)&v32->Flink + ((v31 >> 3) & 0x1FF));
            v34 = HIBYTE(v30);
            if ( (v33 & 0x20) == 0 )
              v34 = HIBYTE(v30);
            HIBYTE(v30) = v34;
            if ( (v33 & 0x42) != 0 )
              HIBYTE(v30) = v34;
          }
        }
        if ( (HIBYTE(v30) & 0xF) == 8 )
          goto LABEL_124;
      }
    }
    v35 = *(_BYTE *)(v18 + v26);
    if ( (v62 & 0x42) == 0 && (v35 & 0x10) == 0 )
    {
      if ( (*(_DWORD *)v28 & 4) == 0 )
        goto LABEL_124;
      v7 = 3;
    }
    if ( (v35 & 0x10) == 0 )
    {
      v36 = *(_BYTE *)(v18 + v26);
      if ( (*(_DWORD *)v28 & 0x400LL) == 0 && (v35 & 8) == 0 )
      {
        v5 = MiCapturePageFileInfoInline((unsigned __int64 *)(v18 - 0x57FFFFFFFF0LL), 1, 0);
        v26 = 0xFFFFFA8000000022uLL;
        v36 = *(_BYTE *)(v18 - 0x57FFFFFFFDELL);
      }
      v37 = v36 | 0x10;
      *(_BYTE *)(v18 + v26) = v37;
      v35 = v37;
    }
    v38 = v35 >> 6;
    if ( v38 != 1 )
    {
      if ( v38 == 2 )
      {
        v7 |= 4u;
      }
      else if ( !v38 )
      {
        v7 |= 8u;
      }
    }
    v39 = v59;
    if ( *(_DWORD *)(v3 + 32) == -1 )
    {
      v40 = -9LL;
      v41 = *(_QWORD *)(v59 + 8LL * *(unsigned int *)(v59 + 1156) + 6944);
      if ( (*v28 & 0x400) != 0 )
        v40 = -2049LL;
      v42 = *v28 & v40;
      if ( (*v28 & 0x400) == 0 )
        v42 &= 0xFFFFFFFFFFFFFFF9uLL;
      if ( v41 )
      {
        v43 = *(_WORD *)(v41 + 204);
        if ( v42 )
        {
          if ( qword_140C4DF80 )
          {
            if ( (v42 & 0x10) != 0 )
              LODWORD(v42) = v42 & 0xFFFFFFEF;
            else
              LODWORD(v42) = ~(_DWORD)qword_140C4DF80 & v42;
          }
          v44 = v42 | 0xFFFFFFFF00000000uLL;
          if ( qword_140C4DF80 )
          {
            if ( (v44 & qword_140C4DF80) != 0 )
              v44 |= 0x10uLL;
            else
              v44 |= qword_140C4DF80;
          }
        }
        else
        {
          v44 = MiSwizzleInvalidPte(0xFFFFFFFF00000000uLL);
        }
        v42 = (unsigned __int16)(v44 ^ (v43 << 12)) & 0xF000 ^ v44;
      }
      v62 = v42;
      if ( (unsigned __int64)v28 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v28 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_104;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v45 = v42;
        if ( !HIBYTE(word_140C4E048) && (v42 & 1) != 0 )
          v45 = v42 | 0x8000000000000000uLL;
        *v28 = v45;
        MiWritePteShadow(v18 - 0x57FFFFFFFF0LL, v45);
        v39 = v59;
        goto LABEL_105;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
LABEL_104:
        *v28 = v42;
        goto LABEL_105;
      }
      v46 = v42 | 0x8000000000000000uLL;
      if ( (v42 & 1) == 0 )
        v46 = v42;
      *v28 = v46;
    }
LABEL_105:
    _InterlockedAnd64((volatile signed __int64 *)(v18 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    v47 = *(_DWORD *)(v3 + 32);
    v7 &= ~1u;
    v25 = *(_QWORD **)v3;
    if ( v47 != -1 )
    {
      v48 = v3 + 16LL * v47;
      if ( v47 >= 5 || !*(_DWORD *)(v48 + 48) )
        goto LABEL_124;
      MiReservePageFileSpaceForPage(v39, a2, 128, (unsigned __int64 *)(v48 + 40));
      v49 = *(_QWORD *)(v48 + 40);
      if ( qword_140C4DF80 && (v49 & 0x10) == 0 )
        v49 &= ~qword_140C4DF80;
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v48 + 40), HIDWORD(v49) + 1);
      v51 = (*(_DWORD *)(v48 + 48))-- == 1;
      *(_QWORD *)(v48 + 40) = updated;
      if ( v51 )
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
    v57 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v6 & 4) == 0 )
      v57 = v6;
    MiReleasePageFileInfo(v59, v57, 0);
  }
  if ( v5 )
    MiReleasePageFileInfo(v59, v5, 0);
  return 0LL;
}

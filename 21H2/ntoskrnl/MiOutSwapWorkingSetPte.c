/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x14032CEB0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiReservePageFileSpaceForPage @ 0x14023D660 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r13
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  char v7; // di
  ULONG_PTR v8; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // edx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r11
  __int64 v26; // rdx
  _QWORD *v27; // rbx
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  unsigned __int64 *v30; // rbx
  __int64 *v31; // r8
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  struct _LIST_ENTRY *v34; // rax
  __int64 v35; // rax
  char v36; // r8^7
  unsigned __int8 v37; // cl
  char v38; // dl
  unsigned __int8 v39; // dl
  char v40; // cl
  __int64 v41; // r10
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned __int64 v44; // rdx
  __int16 v45; // r9
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned int v50; // ecx
  __int64 v51; // r14
  unsigned __int64 v52; // rdx
  __int64 updated; // rax
  bool v54; // zf
  unsigned __int64 v55; // r8
  __int64 *v56; // r9
  __int64 v57; // r12
  __int64 v58; // r10
  __int64 *v59; // rdx
  unsigned __int64 v60; // rdx
  __int64 v62; // [rsp+20h] [rbp-48h]
  __int64 v63; // [rsp+28h] [rbp-40h]
  int v64; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v65; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v63 = *(_QWORD *)(v3 + 16);
  if ( a3 )
    return 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v62 = *(_QWORD *)(v3 + 24);
  while ( 1 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(a2);
    v65 = v10;
    if ( (v10 & 1) != 0 )
      break;
    if ( (v10 & 0x400) != 0 )
      goto LABEL_124;
    if ( (v10 & 0x800) == 0 )
    {
      if ( (v10 & 2) == 0 )
        goto LABEL_124;
      v65 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
      v14 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (unsigned int)MiPteInShadowRange(a2, v9) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v16 = 1;
          if ( !HIBYTE(word_140C4E008) && (v10 & 1) != 0 )
            v14 = v10 & 0x7FFFFFFFFFFFFFFDLL | 0x8000000000000000uLL;
          goto LABEL_23;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v10 & 1) != 0 )
        {
          v14 = v10 & 0x7FFFFFFFFFFFFFFDLL | 0x8000000000000000uLL;
        }
      }
      v16 = 0;
LABEL_23:
      *(_QWORD *)a2 = v14;
      v6 = v10;
      if ( v16 )
        MiWritePteShadow(a2, v14, v15);
      goto LABEL_124;
    }
    v11 = MiLockTransitionLeafPage(a2);
    v8 = v11;
    if ( v11 )
    {
      v12 = *(_BYTE *)(v11 + 34);
      v7 = 1;
      if ( (v12 & 0x28) == 0 )
      {
        v13 = *(_QWORD *)(v8 + 16);
        if ( (v13 & 2) != 0 )
        {
          v6 = *(_QWORD *)(v8 + 16);
          if ( *(_WORD *)(v8 + 32) || (v12 & 7) != 3 )
          {
            *(_QWORD *)(v8 + 16) = v13 & 0xFFFFFFFFFFFFFFFDuLL;
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
  if ( (unsigned __int64)&v65 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v65 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v18 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v65 >> 3) & 0x1FF));
      v19 = v10 | 0x20;
      if ( (v18 & 0x20) == 0 )
        v19 = v10;
      v10 = v19;
      if ( (v18 & 0x42) != 0 )
        v10 = v19;
    }
  }
  v20 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL);
  if ( ((*(_QWORD *)(v20 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    v8 = v20 - 0x58000000000LL;
    v21 = MI_PFN_IS_PROTO(v20 - 0x58000000000LL);
    v26 = 0xFFFFF68000000000uLL;
    if ( v21 )
    {
      v27 = *(_QWORD **)(v3 + 8);
      if ( !v27 )
        goto LABEL_124;
LABEL_114:
      v55 = v27[2];
      if ( v55 < v27[1] )
      {
        v56 = (__int64 *)(*v27 + 16 * v55);
        v57 = (__int64)(a2 << 25) >> 16;
        if ( !v55 || (v58 = *(v56 - 1), v59 = v56 - 1, v58 + *(v56 - 2) != v57) )
        {
          v27[2] = v55 + 1;
          v59 = v56 + 1;
          *v56 = v57;
          v56[1] = 0LL;
          v58 = 0LL;
        }
        *v59 = v58 + 4096;
        ++v27[3];
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
    if ( (*(_QWORD *)(v20 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL) != a2 )
      goto LABEL_124;
    v7 = 1;
    v64 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 - 0x57FFFFFFFE8LL), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v64, v26, v22, v23);
        while ( *(__int64 *)(v20 - 0x57FFFFFFFE8LL) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 - 0x57FFFFFFFE8LL), 0x3FuLL) );
      v24 = 0xFFFFF6FB7DBED7F8uLL;
      v25 = 0xFFFFF6FB7DBED000uLL;
    }
    v28 = 0xFFFFFA8000000022uLL;
    if ( (*(_BYTE *)(v20 - 0x57FFFFFFFDELL) & 8) != 0 )
      goto LABEL_124;
    v29 = *(_QWORD *)(v20 - 0x57FFFFFFFF0LL);
    v30 = (unsigned __int64 *)(v20 - 0x57FFFFFFFF0LL);
    if ( (v29 & 2) != 0 )
    {
      v6 = *(_QWORD *)(v20 - 0x57FFFFFFFF0LL);
      *v30 = v29 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    if ( !*(_DWORD *)(v3 + 144) )
    {
      if ( *(_WORD *)(v20 - 0x57FFFFFFFE0LL) != 1 )
        goto LABEL_124;
      if ( (*(_BYTE *)(v63 + 184) & 7) == 0 )
      {
        v31 = (__int64 *)(((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
        v32 = *v31;
        if ( (unsigned __int64)v31 >= v25
          && (unsigned __int64)v31 <= v24
          && (unsigned int)MiPteHasShadow()
          && (v32 & 1) != 0
          && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
        {
          v34 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v34 )
          {
            v35 = *((_QWORD *)&v34->Flink + ((v33 >> 3) & 0x1FF));
            v36 = HIBYTE(v32);
            if ( (v35 & 0x20) == 0 )
              v36 = HIBYTE(v32);
            HIBYTE(v32) = v36;
            if ( (v35 & 0x42) != 0 )
              HIBYTE(v32) = v36;
          }
        }
        if ( (HIBYTE(v32) & 0xF) == 8 )
          goto LABEL_124;
      }
    }
    v37 = *(_BYTE *)(v20 + v28);
    if ( (v65 & 0x42) == 0 && (v37 & 0x10) == 0 )
    {
      if ( (*(_DWORD *)v30 & 4) == 0 )
        goto LABEL_124;
      v7 = 3;
    }
    if ( (v37 & 0x10) == 0 )
    {
      v38 = *(_BYTE *)(v20 + v28);
      if ( (*(_DWORD *)v30 & 0x400LL) == 0 && (v37 & 8) == 0 )
      {
        v5 = MiCapturePageFileInfoInline((unsigned __int64 *)(v20 - 0x57FFFFFFFF0LL), 1, 0);
        v28 = 0xFFFFFA8000000022uLL;
        v38 = *(_BYTE *)(v20 - 0x57FFFFFFFDELL);
      }
      v39 = v38 | 0x10;
      *(_BYTE *)(v20 + v28) = v39;
      v37 = v39;
    }
    v40 = v37 >> 6;
    if ( v40 != 1 )
    {
      if ( v40 == 2 )
      {
        v7 |= 4u;
      }
      else if ( !v40 )
      {
        v7 |= 8u;
      }
    }
    v41 = v62;
    if ( *(_DWORD *)(v3 + 32) == -1 )
    {
      v42 = -9LL;
      v43 = *(_QWORD *)(v62 + 8LL * *(unsigned int *)(v62 + 1156) + 6944);
      if ( (*v30 & 0x400) != 0 )
        v42 = -2049LL;
      v44 = *v30 & v42;
      if ( (*v30 & 0x400) == 0 )
        v44 &= 0xFFFFFFFFFFFFFFF9uLL;
      if ( v43 )
      {
        v45 = *(_WORD *)(v43 + 204);
        if ( v44 )
        {
          if ( qword_140C4DF40 )
          {
            if ( (v44 & 0x10) != 0 )
              LODWORD(v44) = v44 & 0xFFFFFFEF;
            else
              LODWORD(v44) = ~(_DWORD)qword_140C4DF40 & v44;
          }
          v46 = v44 | 0xFFFFFFFF00000000uLL;
          if ( qword_140C4DF40 )
          {
            if ( (v46 & qword_140C4DF40) != 0 )
              v46 |= 0x10uLL;
            else
              v46 |= qword_140C4DF40;
          }
        }
        else
        {
          v46 = MiSwizzleInvalidPte(0xFFFFFFFF00000000uLL);
        }
        v44 = (unsigned __int16)(v46 ^ (v45 << 12)) & 0xF000 ^ v46;
      }
      v65 = v44;
      if ( (unsigned __int64)v30 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v30 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_104;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v48 = v44;
        if ( !HIBYTE(word_140C4E008) && (v44 & 1) != 0 )
        {
          v47 = 0x8000000000000000uLL;
          v48 = v44 | 0x8000000000000000uLL;
        }
        *v30 = v48;
        MiWritePteShadow(v20 - 0x57FFFFFFFF0LL, v48, v47);
        v41 = v62;
        goto LABEL_105;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
LABEL_104:
        *v30 = v44;
        goto LABEL_105;
      }
      v49 = v44 | 0x8000000000000000uLL;
      if ( (v44 & 1) == 0 )
        v49 = v44;
      *v30 = v49;
    }
LABEL_105:
    _InterlockedAnd64((volatile signed __int64 *)(v20 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    v50 = *(_DWORD *)(v3 + 32);
    v7 &= ~1u;
    v27 = *(_QWORD **)v3;
    if ( v50 != -1 )
    {
      v51 = v3 + 16LL * v50;
      if ( v50 >= 5 || !*(_DWORD *)(v51 + 48) )
        goto LABEL_124;
      MiReservePageFileSpaceForPage(v41, a2, 128, (unsigned __int64 *)(v51 + 40));
      v52 = *(_QWORD *)(v51 + 40);
      if ( qword_140C4DF40 && (v52 & 0x10) == 0 )
        v52 &= ~qword_140C4DF40;
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v51 + 40), HIDWORD(v52) + 1);
      v54 = (*(_DWORD *)(v51 + 48))-- == 1;
      *(_QWORD *)(v51 + 40) = updated;
      if ( v54 )
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
    v60 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v6 & 4) == 0 )
      v60 = v6;
    MiReleasePageFileInfo(v62, v60, 0);
  }
  if ( v5 )
    MiReleasePageFileInfo(v62, v5, 0);
  return 0LL;
}

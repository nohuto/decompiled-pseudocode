/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x1402B02C0
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, unsigned __int64 a2, int a3)
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
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r11
  _QWORD *v28; // rbx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 *v31; // rbx
  __int64 *v32; // r8
  __int64 v33; // rdx
  unsigned __int64 v34; // r8
  struct _LIST_ENTRY *v35; // rax
  __int64 v36; // rax
  char v37; // r8^7
  unsigned __int8 v38; // cl
  char v39; // dl
  unsigned __int8 v40; // dl
  char v41; // cl
  __int64 v42; // r10
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned int v51; // ecx
  __int64 v52; // r14
  unsigned __int64 v53; // rdx
  __int64 updated; // rax
  bool v55; // zf
  unsigned __int64 v56; // r8
  __int64 *v57; // r9
  __int64 v58; // r12
  __int64 v59; // r10
  __int64 *v60; // rdx
  unsigned __int64 v61; // rdx
  __int64 v63; // [rsp+20h] [rbp-48h]
  __int64 v64; // [rsp+28h] [rbp-40h]
  int v65; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v66; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v64 = *(_QWORD *)(v3 + 16);
  if ( a3 )
    return 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v63 = *(_QWORD *)(v3 + 24);
  while ( 1 )
  {
    v12 = MI_READ_PTE_LOCK_FREE(a2);
    v66 = v12;
    if ( (v12 & 1) != 0 )
      break;
    if ( (v12 & 0x400) != 0 )
      goto LABEL_124;
    if ( (v12 & 0x800) == 0 )
    {
      if ( (v12 & 2) == 0 )
        goto LABEL_124;
      v66 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
      v16 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow(v18, v17, v19, v20) )
        {
          v21 = 1;
          if ( !HIBYTE(word_140C4DE88) && (v12 & 1) != 0 )
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
    v13 = MiLockTransitionLeafPage(a2, 0LL);
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
            MiUnlinkPageFromList(v8, 0);
            *(_QWORD *)(v8 + 16) &= ~2uLL;
            MiInsertPageInList(v8, 8u);
          }
        }
      }
      goto LABEL_124;
    }
  }
  if ( (unsigned __int64)&v66 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v66 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v66, v9, v10, v11)
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v23 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v66 >> 3) & 0x1FF));
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
    if ( (unsigned int)MI_PFN_IS_PROTO(v25 - 0x58000000000LL) )
    {
      v28 = *(_QWORD **)(v3 + 8);
      if ( !v28 )
        goto LABEL_124;
LABEL_114:
      v56 = v28[2];
      if ( v56 < v28[1] )
      {
        v57 = (__int64 *)(*v28 + 16 * v56);
        v58 = (__int64)(a2 << 25) >> 16;
        if ( !v56 || (v59 = *(v57 - 1), v60 = v57 - 1, v59 + *(v57 - 2) != v58) )
        {
          v28[2] = v56 + 1;
          v60 = v57 + 1;
          *v57 = v58;
          v57[1] = 0LL;
          v59 = 0LL;
        }
        *v60 = v59 + 4096;
        ++v28[3];
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
    v65 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 - 0x57FFFFFFFE8LL), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v65);
        while ( *(__int64 *)(v25 - 0x57FFFFFFFE8LL) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 - 0x57FFFFFFFE8LL), 0x3FuLL) );
      v26 = 0xFFFFF6FB7DBED7F8uLL;
      v27 = 0xFFFFF6FB7DBED000uLL;
    }
    v29 = 0xFFFFFA8000000022uLL;
    if ( (*(_BYTE *)(v25 - 0x57FFFFFFFDELL) & 8) != 0 )
      goto LABEL_124;
    v30 = *(_QWORD *)(v25 - 0x57FFFFFFFF0LL);
    v31 = (unsigned __int64 *)(v25 - 0x57FFFFFFFF0LL);
    if ( (v30 & 2) != 0 )
    {
      v6 = *(_QWORD *)(v25 - 0x57FFFFFFFF0LL);
      v30 &= ~2uLL;
      *v31 = v30;
    }
    if ( !*(_DWORD *)(v3 + 144) )
    {
      if ( *(_WORD *)(v25 - 0x57FFFFFFFE0LL) != 1 )
        goto LABEL_124;
      if ( (*(_BYTE *)(v64 + 184) & 7) == 0 )
      {
        v32 = (__int64 *)(((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
        v33 = *v32;
        if ( (unsigned __int64)v32 >= v27
          && (unsigned __int64)v32 <= v26
          && (unsigned int)MiPteHasShadow(v30, v33, v32, 0xFFFFFA8000000022uLL)
          && (v33 & 1) != 0
          && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
        {
          v35 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v35 )
          {
            v36 = *((_QWORD *)&v35->Flink + ((v34 >> 3) & 0x1FF));
            v37 = HIBYTE(v33);
            if ( (v36 & 0x20) == 0 )
              v37 = HIBYTE(v33);
            HIBYTE(v33) = v37;
            if ( (v36 & 0x42) != 0 )
              HIBYTE(v33) = v37;
          }
        }
        if ( (HIBYTE(v33) & 0xF) == 8 )
          goto LABEL_124;
      }
    }
    v38 = *(_BYTE *)(v25 + v29);
    if ( (v66 & 0x42) == 0 && (v38 & 0x10) == 0 )
    {
      if ( (*(_DWORD *)v31 & 4) == 0 )
        goto LABEL_124;
      v7 = 3;
    }
    if ( (v38 & 0x10) == 0 )
    {
      v39 = *(_BYTE *)(v25 + v29);
      if ( (*(_DWORD *)v31 & 0x400LL) == 0 && (v38 & 8) == 0 )
      {
        v5 = MiCapturePageFileInfoInline(v25 - 0x57FFFFFFFF0LL, 1LL);
        v29 = 0xFFFFFA8000000022uLL;
        v39 = *(_BYTE *)(v25 - 0x57FFFFFFFDELL);
      }
      v40 = v39 | 0x10;
      *(_BYTE *)(v25 + v29) = v40;
      v38 = v40;
    }
    v41 = v38 >> 6;
    if ( v41 != 1 )
    {
      if ( v41 == 2 )
      {
        v7 |= 4u;
      }
      else if ( !v41 )
      {
        v7 |= 8u;
      }
    }
    v42 = v63;
    if ( *(_DWORD *)(v3 + 32) == -1 )
    {
      v43 = -9LL;
      v44 = -2049LL;
      v45 = *(_QWORD *)(v63 + 8LL * *(unsigned int *)(v63 + 1156) + 6944);
      v46 = *v31 & 0x400;
      if ( (*v31 & 0x400) != 0 )
        v43 = -2049LL;
      v47 = *v31 & v43;
      if ( !v46 )
        v47 &= 0xFFFFFFFFFFFFFFF9uLL;
      if ( v45 )
      {
        v44 = *(unsigned __int16 *)(v45 + 204);
        if ( v47 )
        {
          v46 = qword_140C4DDC0;
          if ( qword_140C4DDC0 )
          {
            if ( (v47 & 0x10) != 0 )
              LODWORD(v47) = v47 & 0xFFFFFFEF;
            else
              LODWORD(v47) = ~(_DWORD)qword_140C4DDC0 & v47;
          }
          v48 = v47 | 0xFFFFFFFF00000000uLL;
          if ( qword_140C4DDC0 )
          {
            if ( (v48 & qword_140C4DDC0) != 0 )
              v48 |= 0x10uLL;
            else
              v48 |= qword_140C4DDC0;
          }
        }
        else
        {
          v48 = MiSwizzleInvalidPte(0xFFFFFFFF00000000uLL);
        }
        v47 = (unsigned __int16)(v48 ^ ((_WORD)v44 << 12)) & 0xF000 ^ v48;
      }
      v66 = v47;
      if ( (unsigned __int64)v31 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v31 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_104;
      if ( (unsigned int)MiPteHasShadow(v46, v47, v45, v44) )
      {
        v49 = v47;
        if ( !HIBYTE(word_140C4DE88) && (v47 & 1) != 0 )
          v49 = v47 | 0x8000000000000000uLL;
        *v31 = v49;
        MiWritePteShadow(v25 - 0x57FFFFFFFF0LL, v49);
        v42 = v63;
        goto LABEL_105;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
LABEL_104:
        *v31 = v47;
        goto LABEL_105;
      }
      v50 = v47 | 0x8000000000000000uLL;
      if ( (v47 & 1) == 0 )
        v50 = v47;
      *v31 = v50;
    }
LABEL_105:
    _InterlockedAnd64((volatile signed __int64 *)(v25 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    v51 = *(_DWORD *)(v3 + 32);
    v7 &= ~1u;
    v28 = *(_QWORD **)v3;
    if ( v51 != -1 )
    {
      v52 = v3 + 16LL * v51;
      if ( v51 >= 5 || !*(_DWORD *)(v52 + 48) )
        goto LABEL_124;
      MiReservePageFileSpaceForPage(v42, a2, 128LL, v52 + 40);
      v53 = *(_QWORD *)(v52 + 40);
      if ( qword_140C4DDC0 && (v53 & 0x10) == 0 )
        v53 &= ~qword_140C4DDC0;
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v52 + 40), HIDWORD(v53) + 1);
      v55 = (*(_DWORD *)(v52 + 48))-- == 1;
      *(_QWORD *)(v52 + 40) = updated;
      if ( v55 )
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
    v61 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v6 & 4) == 0 )
      v61 = v6;
    MiReleasePageFileInfo(v63, v61, 0LL);
  }
  if ( v5 )
    MiReleasePageFileInfo(v63, v5, 0LL);
  return 0LL;
}

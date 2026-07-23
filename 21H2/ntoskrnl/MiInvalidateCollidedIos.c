/*
 * XREFs of MiInvalidateCollidedIos @ 0x140248AEC
 * Callers:
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiPurgeImageSection @ 0x1403A5514 (MiPurgeImageSection.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleaseInPageRefs @ 0x140248D4C (MiReleaseInPageRefs.c)
 *     MiUpdateTransitionPteFrame @ 0x14025B980 (MiUpdateTransitionPteFrame.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiInvalidateCollidedIos(__int64 a1)
{
  unsigned int v1; // r12d
  _QWORD *v3; // r14
  __int64 v4; // r13
  _QWORD *v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rdx
  _QWORD *v18; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 updated; // rdi
  unsigned __int64 v27; // rbx
  bool v28; // zf

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 192) & 0x10) == 0 )
  {
    v3 = 0LL;
    v4 = a1;
    goto LABEL_3;
  }
  v12 = a1 + 16;
  v13 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v13 + 8) != v12 || (v14 = *(_QWORD **)(v12 + 8), *v14 != v12) )
LABEL_35:
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  v15 = *(_QWORD *)(a1 + 320);
  v16 = 6 * v15;
  v4 = *(_QWORD *)(a1 + 328);
  v3 = (_QWORD *)(*(_QWORD *)(48 * v15 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
  v17 = v4 + 272;
  if ( *(_QWORD *)(v4 + 256) )
    v17 = *(_QWORD *)(v4 + 256);
  v18 = (_QWORD *)(v17 + 48);
  v19 = (((*(_DWORD *)(v17 + 32) + *(_DWORD *)(v17 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v17 + 40)
                                                                   + 4095) >> 12;
  v20 = 6LL * *(_QWORD *)(v17 + 48);
  v21 = v17 + 40 + 8 * v19;
  v1 = 0;
  v22 = *(_QWORD *)(8 * v20 - 0x58000000000LL + 8) | 0x8000000000000000uLL;
  if ( (unsigned __int64)v3 < v22
    || (v23 = (__int64)((__int64)v3 - v22) >> 3, v23 >= v19)
    || (v24 = 48LL * v18[v23] - 0x58000000000LL, v3 != (_QWORD *)(*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL)) )
  {
    while ( (unsigned __int64)v18 <= v21 )
    {
      v24 = 48LL * *v18 - 0x58000000000LL;
      if ( (_QWORD *)(*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL) == v3 )
        goto LABEL_19;
      ++v18;
    }
    v24 = 48 * v15 - 0x58000000000LL;
    *(_DWORD *)(v4 + 180) = 1;
    goto LABEL_23;
  }
LABEL_19:
  v25 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(48 * v15 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
  updated = MiUpdateTransitionPteFrame(v25, v15);
  v27 = updated;
  if ( (unsigned int)MiPteInShadowRange(v3) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v1 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_20;
      v28 = (updated & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_20;
      v28 = (updated & 1) == 0;
    }
    if ( !v28 )
      v27 = updated | 0x8000000000000000uLL;
  }
LABEL_20:
  *v3 = v27;
  if ( v1 )
    MiWritePteShadow((__int64)v3, v27);
  *(_QWORD *)(a1 + 168) = updated;
  v1 = 1;
  *(_QWORD *)(8 * v16 - 0x58000000000LL + 16) ^= (*(_DWORD *)(8 * v16 - 0x58000000000LL + 16) ^ *(_DWORD *)(v24 + 16)) & 0x3E0;
LABEL_23:
  MiReleaseInPageRefs(v24);
LABEL_3:
  v5 = *(_QWORD **)(v4 + 16);
  while ( v5 != (_QWORD *)(v4 + 16) )
  {
    v6 = v5[38];
    v7 = v5;
    v5 = (_QWORD *)*v5;
    v8 = 48 * v6 - 0x58000000000LL;
    if ( (*(_DWORD *)(a1 + 192) & 0x10) == 0 || (_QWORD *)(*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) == v3 )
    {
      MiReleaseInPageRefs(v8);
      v9 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_35;
      v10 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v10 != v7 )
        goto LABEL_35;
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v7[1] = v7;
      *v7 = v7;
    }
  }
  return v1;
}

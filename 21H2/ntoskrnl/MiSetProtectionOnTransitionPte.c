/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x140224A84
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x1402E53E0 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiSanitizePfnProtection @ 0x14033EFE0 (MiSanitizePfnProtection.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned int v9; // edi
  __int64 v10; // rbp
  __int64 v11; // rbx
  char v12; // al
  int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v20; // r13
  unsigned int v21; // edx
  __int64 v22; // r15
  __int64 v23; // rbp
  unsigned __int64 v24; // r15
  int v25; // r9d
  int v26; // ecx
  __int64 v27; // r10
  __int64 v28; // r11
  __int64 ValidPte; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // [rsp+24h] [rbp-44h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v5 = a1;
  v6 = *(unsigned int *)(a1 + 48);
  if ( (v6 & 0x500000) == 0x500000 )
  {
    v20 = 16LL;
    v34 = MiVadPageSizes[(v6 >> 18) & 3];
    if ( v34 != 16 )
      v20 = 1LL;
    if ( a3 == 24 )
      return 0LL;
    v21 = 0;
    v22 = 0LL;
    v33 = 0;
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 )
      {
        ++v22;
      }
      else
      {
        v24 = MI_READ_PTE_LOCK_FREE(a2);
        if ( qword_140C4DF80 )
        {
          if ( (v24 & 0x10) != 0 )
            v24 &= ~0x10uLL;
          else
            v24 &= ~qword_140C4DF80;
        }
        v22 = (v24 >> 12) & 0xFFFFFFFFFLL;
        v25 = MiSanitizePfnProtection(v5, (*(_QWORD *)(48 * v22 - 0x58000000000LL + 16) >> 5) & 0x1FLL, a3);
        v26 = v25 | 0x4000000;
        *(_QWORD *)(v28 + 16) = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)(32 * v25)) & 0x3E0;
        if ( v34 < 0x200 )
          v26 = v25;
        v21 = v26 | 0x80000000;
        if ( (*(_DWORD *)(v5 + 48) & 0x300000) == 0x300000 )
          v21 = v26;
        v33 = v21;
      }
      ValidPte = MiMakeValidPte(a2, v22, v21);
      if ( (unsigned int)MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow(v31, v30) )
        {
          v32 = 1;
          if ( !HIBYTE(word_140C4E048) )
            goto LABEL_26;
        }
        else
        {
          v32 = 0;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_26:
            if ( (ValidPte & 1) != 0 )
              ValidPte |= 0x8000000000000000uLL;
          }
        }
      }
      else
      {
        v32 = 0;
      }
      *a2 = ValidPte;
      if ( v32 )
        MiWritePteShadow(a2);
      v5 = a1;
      ++a2;
      v21 = v33;
      if ( ++v23 >= v20 )
        return 0LL;
    }
  }
  v9 = 0;
  v10 = MiLockTransitionLeafPage((ULONG_PTR)a2);
  if ( v10 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(a2);
    if ( !a4 && *(_WORD *)(v10 + 32) )
    {
      v9 = 1;
LABEL_7:
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v9;
    }
    v12 = MiSanitizePfnProtection(a1, (*(_QWORD *)(v10 + 16) >> 5) & 0x1FLL, a3);
    v13 = 0;
    v14 = 32LL * (v12 & 0x1F);
    v16 = v14 | v11 & 0xFFFFFFFFFFFFFC1FuLL;
    *(_QWORD *)(v10 + 16) = v14 | v15 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( !(unsigned int)MiPteInShadowRange(a2) )
    {
LABEL_5:
      *a2 = v16;
      if ( v13 )
        MiWritePteShadow(a2);
      goto LABEL_7;
    }
    if ( (unsigned int)MiPteHasShadow(v18, v17) )
    {
      v13 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_5;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_5;
    }
    if ( (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
    goto LABEL_5;
  }
  return 2LL;
}

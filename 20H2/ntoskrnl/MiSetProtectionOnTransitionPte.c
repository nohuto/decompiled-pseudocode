/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x14023672C
 * Callers:
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiSanitizePfnProtection @ 0x1402B74E0 (MiSanitizePfnProtection.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
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
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v22; // r13
  unsigned int v23; // edx
  __int64 v24; // r15
  __int64 v25; // rbp
  unsigned __int64 v26; // r15
  int v27; // r9d
  int v28; // ecx
  __int64 v29; // r10
  __int64 v30; // r11
  __int64 ValidPte; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  unsigned int v37; // [rsp+24h] [rbp-44h]
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v5 = a1;
  v6 = *(unsigned int *)(a1 + 48);
  if ( (v6 & 0x500000) == 0x500000 )
  {
    v22 = 16LL;
    v38 = MiVadPageSizes[(v6 >> 18) & 3];
    if ( v38 != 16 )
      v22 = 1LL;
    if ( a3 == 24 )
      return 0LL;
    v23 = 0;
    v24 = 0LL;
    v37 = 0;
    v25 = 0LL;
    while ( 1 )
    {
      if ( v25 )
      {
        ++v24;
      }
      else
      {
        v26 = MI_READ_PTE_LOCK_FREE(a2);
        if ( qword_140C4DDC0 )
        {
          if ( (v26 & 0x10) != 0 )
            v26 &= ~0x10uLL;
          else
            v26 &= ~qword_140C4DDC0;
        }
        v24 = (v26 >> 12) & 0xFFFFFFFFFLL;
        v27 = MiSanitizePfnProtection(v5, (*(_QWORD *)(48 * v24 - 0x58000000000LL + 16) >> 5) & 0x1FLL, a3);
        v28 = v27 | 0x4000000;
        *(_QWORD *)(v30 + 16) = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)(32 * v27)) & 0x3E0;
        if ( v38 < 0x200 )
          v28 = v27;
        v23 = v28 | 0x80000000;
        if ( (*(_DWORD *)(v5 + 48) & 0x300000) == 0x300000 )
          v23 = v28;
        v37 = v23;
      }
      ValidPte = MiMakeValidPte(a2, v24, v23);
      if ( MiPteInShadowRange((unsigned __int64)a2) )
      {
        if ( (unsigned int)MiPteHasShadow(v33, v32, v34, v35) )
        {
          v36 = 1;
          if ( !HIBYTE(word_140C4DE88) )
            goto LABEL_26;
        }
        else
        {
          v36 = 0;
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
        v36 = 0;
      }
      *a2 = ValidPte;
      if ( v36 )
        MiWritePteShadow(a2, ValidPte);
      v5 = a1;
      ++a2;
      v23 = v37;
      if ( ++v25 >= v22 )
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
    if ( !MiPteInShadowRange((unsigned __int64)a2) )
    {
LABEL_5:
      *a2 = v16;
      if ( v13 )
        MiWritePteShadow(a2, v16);
      goto LABEL_7;
    }
    if ( (unsigned int)MiPteHasShadow(v18, v17, v19, v20) )
    {
      v13 = 1;
      if ( HIBYTE(word_140C4DE88) )
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

/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x14032E970
 * Callers:
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x14033A030 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiSanitizePfnProtection @ 0x14032E680 (MiSanitizePfnProtection.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, ULONG_PTR a2, unsigned int a3, int a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // rdi
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbx
  __int64 v18; // r12
  unsigned int v19; // edx
  __int64 v20; // rbp
  unsigned __int64 v21; // r12
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // r10
  int v25; // ecx
  unsigned __int64 ValidPte; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // [rsp+20h] [rbp-38h]
  unsigned int v31; // [rsp+60h] [rbp+8h]

  v6 = *(unsigned int *)(a1 + 48);
  v8 = a2;
  if ( (v6 & 0xA00000) == 0xA00000 )
  {
    v16 = 16LL;
    v17 = MiVadPageSizes[(v6 >> 19) & 3];
    v30 = v17;
    if ( v17 != 16 )
      v16 = 1LL;
    if ( a3 == 24 )
      return 0LL;
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
    v31 = 0;
    while ( 1 )
    {
      if ( v20 )
      {
        ++v18;
      }
      else
      {
        v21 = MI_READ_PTE_LOCK_FREE(v8);
        if ( qword_140C50780 )
        {
          if ( (v21 & 0x10) != 0 )
            v21 &= ~0x10uLL;
          else
            v21 &= ~qword_140C50780;
        }
        v18 = (v21 >> 12) & 0xFFFFFFFFFFLL;
        v22 = MiSanitizePfnProtection(a1, (*(_QWORD *)(48 * v18 - 0x220000000000LL + 16) >> 5) & 0x1F, a3);
        *(_QWORD *)(v24 + 16) = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)(32 * v22)) & 0x3E0;
        v25 = v22 | 0x4000000;
        if ( v17 < 0x200 )
          v25 = v22;
        v19 = v25 | 0x80000000;
        if ( (*(_DWORD *)(a1 + 48) & 0x600000) == 0x600000 )
          v19 = v25;
        v31 = v19;
      }
      ValidPte = MiMakeValidPte(v8, v18, v19);
      if ( MiPteInShadowRange(v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *(_QWORD *)v8 = ValidPte;
          MiWritePteShadow(v8, ValidPte);
          goto LABEL_33;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v8 = ValidPte;
LABEL_33:
      v19 = v31;
      v8 += 8LL;
      v17 = v30;
      if ( ++v20 >= v16 )
        return 0LL;
    }
  }
  v9 = 0;
  v10 = MiLockTransitionLeafPageEx(a2, 0LL, 0);
  if ( v10 )
  {
    v11 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v28 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
        v29 = v11 | 0x20;
        if ( (v28 & 0x20) == 0 )
          v29 = *(_QWORD *)v8;
        v11 = v29;
        if ( (v28 & 0x42) != 0 )
          v11 = v29 | 0x42;
      }
    }
    if ( a4 || !*(_WORD *)(v10 + 32) )
    {
      v13 = 32 * (MiSanitizePfnProtection(a1, (*(_QWORD *)(v10 + 16) >> 5) & 0x1F, a3) & 0x1F);
      v14 = v13 | v11 & 0xFFFFFFFFFFFFFC1FuLL;
      *(_QWORD *)(v10 + 16) = v13 | v12 & 0xFFFFFFFFFFFFFC1FuLL;
      if ( MiPteInShadowRange(v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C51864) && (v14 & 1) != 0 )
            v14 |= 0x8000000000000000uLL;
          *(_QWORD *)v8 = v14;
          MiWritePteShadow(v8, v14);
          goto LABEL_7;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v14 & 1) != 0 )
        {
          v14 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v8 = v14;
    }
    else
    {
      v9 = 1;
    }
LABEL_7:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v9;
  }
  return 2LL;
}

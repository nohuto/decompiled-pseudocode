/*
 * XREFs of MiInitializeTransitionPfn @ 0x14025C1CC
 * Callers:
 *     MiInitializeImageProtos @ 0x14025BF1C (MiInitializeImageProtos.c)
 *     MiSectionCreated @ 0x140299C1C (MiSectionCreated.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FFB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540374 (MiCopyImageExtentContents.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 ContainingPageTable; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // al
  char v12; // al
  unsigned __int64 v13; // rbp
  unsigned int v14; // eax
  char v15; // di
  int v16; // ebp
  __int64 v17; // rbx
  bool v18; // zf
  __int64 v19; // rbx
  __int64 result; // rax
  __int64 TransitionPte; // [rsp+50h] [rbp+8h] BYREF

  v6 = 48 * a1 - 0x58000000000LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  *(_QWORD *)v6 = 0LL;
  v8 = ContainingPageTable;
  v9 = MI_READ_PTE_LOCK_FREE(a2);
  TransitionPte = v9;
  if ( (v9 & 0x400) == 0 && (v9 & 0x800) != 0 )
  {
    v9 = *(_QWORD *)(48 * a3 - 0x57FFFFFFFF0LL);
    TransitionPte = v9;
  }
  v10 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 16) = v9;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 24) &= ~0x4000000000000000uLL;
  v11 = *(_BYTE *)(v6 + 34);
  *(_QWORD *)(v6 + 40) = v8 & 0xFFFFFFFFFLL | v10 & 0xFFFFFFF000000000uLL | 0x8000000000000000uLL;
  if ( (v11 & 0x10) != 0 )
    v12 = v11 & 0xF8 | 3;
  else
    v12 = v11 & 0xF8 | 2;
  *(_BYTE *)(v6 + 34) = v12;
  TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
  v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPte) >> 5) & 0x1F;
  v14 = MiProtectionToCacheAttribute(v13);
  MiFinalizePageAttribute(v6, v14, 1LL);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  if ( a3 == -1 )
  {
    TransitionPte = MiMakeTransitionPte(a1, (unsigned int)v13);
    v15 = TransitionPte;
    v16 = 0;
    v17 = TransitionPte;
    if ( (unsigned int)MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v16 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v18 = (v15 & 1) == 0;
          goto LABEL_14;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v18 = (v15 & 1) == 0;
LABEL_14:
        if ( !v18 )
          v17 |= 0x8000000000000000uLL;
      }
    }
    *a2 = v17;
    if ( v16 )
      MiWritePteShadow((__int64)a2, v17);
  }
  v19 = 48 * v8 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v19);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

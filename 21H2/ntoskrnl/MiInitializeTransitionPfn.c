/*
 * XREFs of MiInitializeTransitionPfn @ 0x14026E22C
 * Callers:
 *     MiInitializeImageProtos @ 0x14026DF7C (MiInitializeImageProtos.c)
 *     MiSectionCreated @ 0x1402E88CC (MiSectionCreated.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FD78 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540134 (MiCopyImageExtentContents.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     MiProtectionToCacheAttribute @ 0x140241E40 (MiProtectionToCacheAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     MiFinalizePageAttribute @ 0x14026E434 (MiFinalizePageAttribute.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
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
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // di
  int v20; // ebp
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rbx
  __int64 result; // rax
  __int64 TransitionPte; // [rsp+50h] [rbp+8h] BYREF

  v6 = 48 * a1 - 0x58000000000LL;
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
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
  v13 = MI_READ_PTE_LOCK_FREE(&TransitionPte);
  v14 = (v13 >> 5) & 0x1F;
  v15 = MiProtectionToCacheAttribute((v13 >> 5) & 0x1F);
  MiFinalizePageAttribute(v6, v15, 1LL);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  if ( a3 == -1 )
  {
    TransitionPte = MiMakeTransitionPte(a1, (unsigned int)v14);
    v19 = TransitionPte;
    v20 = 0;
    v21 = TransitionPte;
    if ( (unsigned int)MiPteInShadowRange(a2, v22) )
    {
      if ( (unsigned int)MiPteHasShadow(v23, v16, v17, v18) )
      {
        v20 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v24 = (v19 & 1) == 0;
          goto LABEL_14;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v24 = (v19 & 1) == 0;
LABEL_14:
        if ( !v24 )
          v21 |= 0x8000000000000000uLL;
      }
    }
    *a2 = v21;
    if ( v20 )
      MiWritePteShadow(a2, v21);
  }
  v25 = 48 * v8 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v25, v16, v17, v18);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v25 + 24) ^= (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

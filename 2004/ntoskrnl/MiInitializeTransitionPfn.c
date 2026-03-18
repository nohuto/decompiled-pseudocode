/*
 * XREFs of MiInitializeTransitionPfn @ 0x14031CA0C
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiSectionCreated @ 0x140267074 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x14031C75C (MiInitializeImageProtos.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A8A8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053AC64 (MiCopyImageExtentContents.c)
 * Callees:
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiFinalizePageAttribute @ 0x14031CC14 (MiFinalizePageAttribute.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
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
  char v16; // di
  int v17; // ebp
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  __int64 v24; // rbx
  __int64 result; // rax
  __int64 TransitionPte; // [rsp+50h] [rbp+8h] BYREF

  v6 = 48 * a1 - 0x58000000000LL;
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
  *(_QWORD *)v6 = 0LL;
  v8 = ContainingPageTable;
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
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
  TransitionPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte);
  v14 = (v13 >> 5) & 0x1F;
  v15 = MiProtectionToCacheAttribute((v13 >> 5) & 0x1F);
  MiFinalizePageAttribute(v6, v15, 1LL);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  if ( a3 == -1 )
  {
    TransitionPte = MiMakeTransitionPte(a1, v14);
    v16 = TransitionPte;
    v17 = 0;
    v18 = TransitionPte;
    if ( MiPteInShadowRange((unsigned __int64)a2) )
    {
      if ( (unsigned int)MiPteHasShadow(v20, v19, v21, v22) )
      {
        v17 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v23 = (v16 & 1) == 0;
          goto LABEL_14;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v23 = (v16 & 1) == 0;
LABEL_14:
        if ( !v23 )
          v18 |= 0x8000000000000000uLL;
      }
    }
    *a2 = v18;
    if ( v17 )
      MiWritePteShadow(a2, v18);
  }
  v24 = 48 * v8 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v24);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

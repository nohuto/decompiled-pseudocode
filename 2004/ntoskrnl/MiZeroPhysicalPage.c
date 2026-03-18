/*
 * XREFs of MiZeroPhysicalPage @ 0x1402F50E4
 * Callers:
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiGetLargePage @ 0x140319D60 (MiGetLargePage.c)
 *     MiZeroAndConvertPage @ 0x14031A554 (MiZeroAndConvertPage.c)
 *     MiZeroLargePage @ 0x140349124 (MiZeroLargePage.c)
 *     MiZeroWithSystemPtes @ 0x1403EF588 (MiZeroWithSystemPtes.c)
 *     MiPerformFinalZeroing @ 0x140549E78 (MiPerformFinalZeroing.c)
 *     MiComputeOptimalZeroPath @ 0x140A52C20 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A52E84 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiFillPhysicalPages @ 0x1402F51CC (MiFillPhysicalPages.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KeZeroPages @ 0x1403FB000 (KeZeroPages.c)
 */

char __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // r12d
  __int64 v7; // r14
  __int64 v8; // rsi
  unsigned int v9; // ebp
  ULONG_PTR v10; // rdi
  char v11; // cl
  char result; // al
  int ProtectionPfnCompatible; // eax
  __int64 v14; // r9
  unsigned __int64 ValidPte; // rbx
  int v16; // r15d
  BOOL v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r11
  bool v23; // zf

  v4 = a3;
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v8 = *(unsigned __int8 *)(v7 + 34) >> 6;
  v9 = *(unsigned __int8 *)(v7 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v9 = dword_140C4DD98[4 * v8 + (int)a3];
    if ( v9 != (_DWORD)v8 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v9, 0);
  }
  v10 = 0LL;
  v11 = -2;
  if ( !KeGetCurrentPrcb()->HyperPte )
    v11 = a2;
  if ( (v11 & 1) != 0 )
  {
    v10 = MiReservePtes((__int64)&qword_140C4ED40, 1u, a3, a4);
    if ( v10 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v7);
      ValidPte = MiMakeValidPte(v10, BugCheckParameter2, ProtectionPfnCompatible | 0xA0000000, v14);
      v16 = 0;
      v17 = MiPteInShadowRange(v10);
      v22 = 4096LL;
      if ( v17 )
      {
        if ( (unsigned int)MiPteHasShadow(v19, v18, v20, v21) )
        {
          v16 = 1;
          if ( !HIBYTE(word_140C4DE08) )
          {
            v23 = (ValidPte & 1) == 0;
            goto LABEL_21;
          }
        }
        else if ( ((unsigned int)v22 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink)) != 0 )
        {
          v23 = (ValidPte & 1) == 0;
LABEL_21:
          if ( !v23 )
            ValidPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v10 = ValidPte;
      if ( v16 )
        MiWritePteShadow(v10, ValidPte);
      KeZeroPages((__int64)(v10 << 25) >> 16, v22, v20);
      result = MiReleasePtes((__int64)&qword_140C4ED40, (_QWORD *)v10, 1u);
      goto LABEL_10;
    }
  }
  if ( KeGetCurrentPrcb()->HyperPte )
    v10 = 1LL;
  result = MiFillPhysicalPages(BugCheckParameter2);
LABEL_10:
  if ( v9 != (_DWORD)v8 && v9 != v4 )
  {
    if ( v10 )
      return MiChangePageAttribute(v7, v8, 0);
  }
  return result;
}

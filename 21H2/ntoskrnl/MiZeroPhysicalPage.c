/*
 * XREFs of MiZeroPhysicalPage @ 0x1402976D0
 * Callers:
 *     MiZeroAndConvertPage @ 0x1402352B0 (MiZeroAndConvertPage.c)
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiPerformFinalZeroing @ 0x14054F588 (MiPerformFinalZeroing.c)
 *     MiComputeOptimalZeroPath @ 0x140A558A8 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A55B0C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x1402977C0 (MiFillPhysicalPages.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, int a3)
{
  ULONG_PTR v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // r14
  char v10; // cl
  __int64 result; // rax
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx

  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = *(unsigned __int8 *)(v6 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v8 = dword_140C4DFD8[4 * v7 + a3];
    if ( v8 != (_DWORD)v7 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v8, 0LL);
  }
  v9 = 0LL;
  v10 = -2;
  if ( !KeGetCurrentPrcb()->HyperPte )
    v10 = a2;
  if ( (v10 & 1) != 0 )
  {
    v9 = MiReservePtes(&qword_140C4EF80, 1LL);
    if ( v9 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v6);
      ValidPte = MiMakeValidPte(v9, BugCheckParameter2, ProtectionPfnCompatible | 0xA0000000);
      if ( (unsigned int)MiPteInShadowRange(v9) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *(_QWORD *)v9 = ValidPte;
          MiWritePteShadow(v9, ValidPte);
          goto LABEL_25;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v9 = ValidPte;
LABEL_25:
      KeZeroPages(v9 << 25 >> 16, 4096LL);
      result = MiReleasePtes(&qword_140C4EF80, v9, 1LL);
      goto LABEL_10;
    }
  }
  if ( KeGetCurrentPrcb()->HyperPte )
    v9 = 1LL;
  result = MiFillPhysicalPages(BugCheckParameter2);
LABEL_10:
  if ( v8 != (_DWORD)v7 && v8 != a3 )
  {
    if ( v9 )
      return MiChangePageAttribute(v6, (unsigned int)v7, 0LL);
  }
  return result;
}

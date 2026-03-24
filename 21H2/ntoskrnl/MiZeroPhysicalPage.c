/*
 * XREFs of MiZeroPhysicalPage @ 0x1402E6380
 * Callers:
 *     MiGetPageChain @ 0x140212D10 (MiGetPageChain.c)
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiZeroAndConvertPage @ 0x1402B70D0 (MiZeroAndConvertPage.c)
 *     MiZeroLargePage @ 0x1402B71F8 (MiZeroLargePage.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiGetLargePage @ 0x140303A34 (MiGetLargePage.c)
 *     MiIssueHardFault @ 0x14030E9B0 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiPerformFinalZeroing @ 0x14054F348 (MiPerformFinalZeroing.c)
 *     MiComputeOptimalZeroPath @ 0x140A548A8 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x14023B9BC (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x1402E6470 (MiFillPhysicalPages.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeZeroPages @ 0x140402DB0 (KeZeroPages.c)
 */

unsigned __int64 __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // r12d
  __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned int v9; // esi
  ULONG_PTR v10; // r14
  char v11; // cl
  unsigned __int64 result; // rax
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8

  v4 = a3;
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v8 = *(unsigned __int8 *)(v7 + 34) >> 6;
  v9 = *(unsigned __int8 *)(v7 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v9 = dword_140C4DF98[4 * v8 + (int)a3];
    if ( v9 != (_DWORD)v8 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v9, 0LL);
  }
  v10 = 0LL;
  v11 = -2;
  if ( !KeGetCurrentPrcb()->HyperPte )
    v11 = a2;
  if ( (v11 & 1) != 0 )
  {
    v10 = MiReservePtes((__int64)&qword_140C4EF40, 1u, a3, a4);
    if ( v10 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v7);
      ValidPte = MiMakeValidPte(v10, BugCheckParameter2, ProtectionPfnCompatible | 0xA0000000);
      if ( (unsigned int)MiPteInShadowRange(v10, v15) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *(_QWORD *)v10 = ValidPte;
          MiWritePteShadow(v10, ValidPte, v16);
          goto LABEL_25;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v10 = ValidPte;
LABEL_25:
      KeZeroPages((__int64)(v10 << 25) >> 16, 4096LL, v16);
      result = MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v10, 1u);
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
      return MiChangePageAttribute(v7, (unsigned int)v8, 0LL);
  }
  return result;
}

/*
 * XREFs of MiZeroPhysicalPage @ 0x1403510C0
 * Callers:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiZeroLargePage @ 0x14030B58C (MiZeroLargePage.c)
 *     MiGetLargePage @ 0x1403490A0 (MiGetLargePage.c)
 *     MiZeroAndConvertPage @ 0x140349894 (MiZeroAndConvertPage.c)
 *     MiZeroWithSystemPtes @ 0x1403EE228 (MiZeroWithSystemPtes.c)
 *     MiPerformFinalZeroing @ 0x140549828 (MiPerformFinalZeroing.c)
 *     MiComputeOptimalZeroPath @ 0x140A4CF20 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A4D184 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiFillPhysicalPages @ 0x1403511A8 (MiFillPhysicalPages.c)
 *     KeZeroPages @ 0x1403F9D70 (KeZeroPages.c)
 */

char __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, int a3, _DWORD *a4)
{
  __int64 v7; // r14
  __int64 v8; // rsi
  unsigned int v9; // ebp
  ULONG_PTR v10; // rdi
  char v11; // cl
  char result; // al
  _DWORD *v13; // r9
  int ProtectionPfnCompatible; // eax
  __int64 v15; // r9
  unsigned __int64 ValidPte; // rbx
  int v17; // r15d
  BOOL v18; // eax
  __int64 v19; // r11
  bool v20; // zf

  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v8 = *(unsigned __int8 *)(v7 + 34) >> 6;
  v9 = *(unsigned __int8 *)(v7 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v9 = dword_140C4DED8[4 * v8 + a3];
    if ( v9 != (_DWORD)v8 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v9, 0LL, a4);
  }
  v10 = 0LL;
  v11 = -2;
  if ( !KeGetCurrentPrcb()->HyperPte )
    v11 = a2;
  if ( (v11 & 1) != 0 )
  {
    v10 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
    if ( v10 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v7);
      ValidPte = MiMakeValidPte(v10, BugCheckParameter2, ProtectionPfnCompatible | 0xA0000000, v15);
      v17 = 0;
      v18 = MiPteInShadowRange(v10);
      v19 = 4096LL;
      if ( v18 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v17 = 1;
          if ( !HIBYTE(word_140C4DF48) )
          {
            v20 = (ValidPte & 1) == 0;
            goto LABEL_21;
          }
        }
        else if ( ((unsigned int)v19 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink)) != 0 )
        {
          v20 = (ValidPte & 1) == 0;
LABEL_21:
          if ( !v20 )
            ValidPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v10 = ValidPte;
      if ( v17 )
        MiWritePteShadow(v10, ValidPte);
      KeZeroPages((__int64)(v10 << 25) >> 16, v19);
      result = MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v10, 1u);
      goto LABEL_10;
    }
  }
  if ( KeGetCurrentPrcb()->HyperPte )
    v10 = 1LL;
  result = MiFillPhysicalPages(BugCheckParameter2);
LABEL_10:
  if ( v9 != (_DWORD)v8 && v9 != a3 )
  {
    if ( v10 )
      return MiChangePageAttribute(v7, (unsigned int)v8, 0LL, v13);
  }
  return result;
}

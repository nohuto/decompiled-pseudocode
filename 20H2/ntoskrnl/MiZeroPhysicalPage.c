/*
 * XREFs of MiZeroPhysicalPage @ 0x1403332D4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     MiZeroLargePage @ 0x140319D50 (MiZeroLargePage.c)
 *     MiGetLargePage @ 0x14034D8FC (MiGetLargePage.c)
 *     MiZeroAndConvertPage @ 0x140351374 (MiZeroAndConvertPage.c)
 *     MiZeroWithSystemPtes @ 0x1403F39F8 (MiZeroWithSystemPtes.c)
 *     MiPerformFinalZeroing @ 0x14054D848 (MiPerformFinalZeroing.c)
 *     MiComputeOptimalZeroPath @ 0x140A532A0 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A53504 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x1403333BC (MiFillPhysicalPages.c)
 *     KeZeroPages @ 0x140400950 (KeZeroPages.c)
 */

char __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // ebp
  ULONG_PTR v9; // rdi
  char v10; // cl
  char result; // al
  int ProtectionPfnCompatible; // eax
  __int64 v13; // r9
  unsigned __int64 ValidPte; // rbx
  int v15; // r15d
  BOOL v16; // eax
  __int64 v17; // r8
  __int64 v18; // r11
  bool v19; // zf

  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = *(unsigned __int8 *)(v6 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v8 = dword_140C4DE18[4 * v7 + a3];
    if ( v8 != (_DWORD)v7 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v8, 0);
  }
  v9 = 0LL;
  v10 = -2;
  if ( !KeGetCurrentPrcb()->HyperPte )
    v10 = a2;
  if ( (v10 & 1) != 0 )
  {
    v9 = MiReservePtes((__int64)&qword_140C4EDC0, 1u);
    if ( v9 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v6);
      ValidPte = MiMakeValidPte(v9, BugCheckParameter2, ProtectionPfnCompatible | 0xA0000000, v13);
      v15 = 0;
      v16 = MiPteInShadowRange(v9);
      v18 = 4096LL;
      if ( v16 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v15 = 1;
          if ( !HIBYTE(word_140C4DE88) )
          {
            v19 = (ValidPte & 1) == 0;
            goto LABEL_21;
          }
        }
        else if ( ((unsigned int)v18 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink)) != 0 )
        {
          v19 = (ValidPte & 1) == 0;
LABEL_21:
          if ( !v19 )
            ValidPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v9 = ValidPte;
      if ( v15 )
        MiWritePteShadow(v9, ValidPte, v17);
      KeZeroPages((__int64)(v9 << 25) >> 16, v18);
      result = MiReleasePtes((__int64)&qword_140C4EDC0, (_QWORD *)v9, 1u);
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
      return MiChangePageAttribute(v6, v7, 0);
  }
  return result;
}

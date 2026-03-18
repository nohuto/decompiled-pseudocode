/*
 * XREFs of MiZeroPhysicalPage @ 0x1402359C4
 * Callers:
 *     MiGetLargePage @ 0x140267060 (MiGetLargePage.c)
 *     MiZeroLargePage @ 0x14026A28C (MiZeroLargePage.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiGetPageTablePages @ 0x14027D03C (MiGetPageTablePages.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiPerformFinalZeroing @ 0x1405ADCD4 (MiPerformFinalZeroing.c)
 *     MiZeroAndConvertPage @ 0x1405B05D0 (MiZeroAndConvertPage.c)
 *     MiZeroWithSystemPtes @ 0x1405B2A90 (MiZeroWithSystemPtes.c)
 *     MiComputeOptimalZeroPath @ 0x140B088E4 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140B08B40 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x140235AAC (MiFillPhysicalPages.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeZeroPages @ 0x140424F50 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, int a3)
{
  ULONG_PTR v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rdi
  char v10; // cl
  __int64 result; // rax
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx
  int v14; // r15d
  int v15; // eax
  __int64 v16; // r11
  bool v17; // zf

  v6 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = *(unsigned __int8 *)(v6 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v8 = dword_140C507D8[4 * v7 + a3];
    if ( v8 != (_DWORD)v7 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x220000000000LL, v8, 0LL);
  }
  v9 = 0LL;
  v10 = -2;
  if ( !KeGetCurrentPrcb()->HyperPte )
    v10 = a2;
  if ( (v10 & 1) != 0 )
  {
    v9 = MiReservePtes(&qword_140C534C0, 1LL);
    if ( v9 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v6);
      ValidPte = MiMakeValidPte(v9, BugCheckParameter2, ProtectionPfnCompatible | 0xA0000000);
      v14 = 0;
      v15 = MiPteInShadowRange(v9);
      v16 = 4096LL;
      if ( v15 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v14 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v17 = (ValidPte & 1) == 0;
            goto LABEL_21;
          }
        }
        else if ( ((unsigned int)v16 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink)) != 0 )
        {
          v17 = (ValidPte & 1) == 0;
LABEL_21:
          if ( !v17 )
            ValidPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v9 = ValidPte;
      if ( v14 )
        MiWritePteShadow(v9, ValidPte);
      KeZeroPages(v9 << 25 >> 16, v16);
      result = MiReleasePtes(&qword_140C534C0, v9, 1LL);
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

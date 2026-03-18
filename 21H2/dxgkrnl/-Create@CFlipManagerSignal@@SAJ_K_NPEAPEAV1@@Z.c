/*
 * XREFs of ?Create@CFlipManagerSignal@@SAJ_K_NPEAPEAV1@@Z @ 0x1C007BED4
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C007CF24 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipManagerSignal::Create(__int64 a1, char a2, struct CFlipManagerSignal **a3, __int64 a4)
{
  unsigned int v7; // ebx
  __int64 Pool2; // rax

  v7 = 0;
  Pool2 = ExAllocatePool2(257LL, 64LL, 1769161542LL, a4);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)Pool2 = &CFlipManagerSignal::`vftable';
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 48) = a1;
    *(_BYTE *)(Pool2 + 56) = a2;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
    *a3 = (struct CFlipManagerSignal *)Pool2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}

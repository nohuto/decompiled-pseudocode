/*
 * XREFs of KeGetNextKernelStackSegment @ 0x140298AF8
 * Callers:
 *     RtlpWalkFrameChain @ 0x140296110 (RtlpWalkFrameChain.c)
 *     RtlpIsFrameInBoundsEx @ 0x140297A70 (RtlpIsFrameInBoundsEx.c)
 *     KeEnumerateKernelStackSegments @ 0x140298A3C (KeEnumerateKernelStackSegments.c)
 *     KiInSwapKernelStacks @ 0x14029A6E0 (KiInSwapKernelStacks.c)
 *     IopMarkPagesForProcessorData @ 0x14055DD48 (IopMarkPagesForProcessorData.c)
 * Callees:
 *     <none>
 */

char __fastcall KeGetNextKernelStackSegment(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax

  if ( a3 )
  {
    *a2 = a1[7];
    a2[1] = a1[6];
    a2[2] = a1[11];
    a2[3] = a1[5];
    a2[4] = a1[131];
    a2[5] = a1[132];
    a2[6] = a1[129];
    a2[7] = a1[130];
  }
  else
  {
    v3 = a2[3];
    if ( !*(_QWORD *)(v3 + 16) )
      return 0;
    *(_OWORD *)a2 = *(_OWORD *)(v3 + 16);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v3 + 32);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(v3 + 48);
    *((_OWORD *)a2 + 3) = *(_OWORD *)(v3 + 64);
  }
  return 1;
}

/*
 * XREFs of KeGetNextKernelStackSegment @ 0x1402E4B28
 * Callers:
 *     RtlpWalkFrameChain @ 0x14021D250 (RtlpWalkFrameChain.c)
 *     RtlpIsFrameInBoundsEx @ 0x140277828 (RtlpIsFrameInBoundsEx.c)
 *     KiInSwapKernelStacks @ 0x1402E46BC (KiInSwapKernelStacks.c)
 *     KeEnumerateKernelStackSegments @ 0x1402E4A8C (KeEnumerateKernelStackSegments.c)
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
  }
  else
  {
    v3 = a2[3];
    if ( !*(_QWORD *)(v3 + 16) )
      return 0;
    *(_OWORD *)a2 = *(_OWORD *)(v3 + 16);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v3 + 32);
  }
  return 1;
}

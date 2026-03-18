/*
 * XREFs of KeGetNextKernelStackSegment @ 0x14032A6C8
 * Callers:
 *     KiInSwapKernelStacks @ 0x140329928 (KiInSwapKernelStacks.c)
 *     KeEnumerateKernelStackSegments @ 0x14032A62C (KeEnumerateKernelStackSegments.c)
 *     RtlpWalkFrameChain @ 0x14032CAD0 (RtlpWalkFrameChain.c)
 *     RtlpIsFrameInBoundsEx @ 0x14032E574 (RtlpIsFrameInBoundsEx.c)
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

/*
 * XREFs of KeGetNextKernelStackSegment @ 0x140295E78
 * Callers:
 *     RtlpIsFrameInBoundsEx @ 0x1402657C8 (RtlpIsFrameInBoundsEx.c)
 *     KiInSwapKernelStacks @ 0x140295A0C (KiInSwapKernelStacks.c)
 *     KeEnumerateKernelStackSegments @ 0x140295DDC (KeEnumerateKernelStackSegments.c)
 *     RtlpWalkFrameChain @ 0x1402C1B50 (RtlpWalkFrameChain.c)
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

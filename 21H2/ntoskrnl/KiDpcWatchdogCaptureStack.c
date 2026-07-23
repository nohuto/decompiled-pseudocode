/*
 * XREFs of KiDpcWatchdogCaptureStack @ 0x140512260
 * Callers:
 *     KeAccumulateTicks @ 0x1402C8D10 (KeAccumulateTicks.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402C17B0 (RtlWalkFrameChain.c)
 */

int __fastcall KiDpcWatchdogCaptureStack(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 33960);
  v3 = *(_QWORD *)(a1 + 33968);
  if ( v3 + 416 > v2 + 8 * ((unsigned __int64)(unsigned int)KiDpcWatchdogProfileArrayLength - 2) )
  {
    *(_QWORD *)(a1 + 33968) = v2;
    v3 = v2;
  }
  LODWORD(v4) = RtlWalkFrameChain((PVOID *)(v3 + 8), 0x32u, 0x200u);
  if ( (unsigned int)(v4 - 3) <= 0x31 )
  {
    *(_WORD *)v3 = v4 - 2;
    *(_QWORD *)(a1 + 33968) += 8LL * (unsigned int)(v4 - 2) + 16;
    *(_OWORD *)*(_QWORD *)(a1 + 33968) = 0LL;
    v4 = *(_QWORD *)(a1 + 33968);
    *(_QWORD *)(v4 - 8) = 0LL;
  }
  return v4;
}

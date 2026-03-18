/*
 * XREFs of RtlFindLongestRunClearEx @ 0x14039AD94
 * Callers:
 *     RtlpHpFixedVsAllocate @ 0x14032FDC0 (RtlpHpFixedVsAllocate.c)
 *     MiGetSystemPteStatistics @ 0x1408DA274 (MiGetSystemPteStatistics.c)
 * Callees:
 *     RtlFindClearRunsEx @ 0x14039ADCC (RtlFindClearRunsEx.c)
 */

__int64 __fastcall RtlFindLongestRunClearEx(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+44h] [rbp+1Ch]

  if ( (unsigned int)RtlFindClearRunsEx(a1, &v4) == 1 )
  {
    *a2 = v4;
    return v5;
  }
  else
  {
    *a2 = 0LL;
    return 0LL;
  }
}

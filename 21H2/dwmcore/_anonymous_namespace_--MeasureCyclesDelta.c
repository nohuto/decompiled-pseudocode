/*
 * XREFs of _anonymous_namespace_::MeasureCyclesDelta @ 0x18007A7D0
 * Callers:
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18007A584 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800A24D0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x1800B93B4 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall anonymous_namespace_::MeasureCyclesDelta(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  HANDLE CurrentThread; // rax
  BOOL v6; // eax
  unsigned __int64 CycleTime; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  CycleTime = 0LL;
  if ( *a1 )
  {
    CurrentThread = GetCurrentThread();
    v6 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v2 = CycleTime;
    if ( v6 )
      *a2 += CycleTime - *a1;
  }
  return v2;
}

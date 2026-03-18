/*
 * XREFs of ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x18009E048
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x1800A0330 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A0B40 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x18009E0BC (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::BeginWalk(__int64 a1, void **a2)
{
  void *v2; // rsi
  void *v5; // rbp
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 result; // rax

  v2 = *a2;
  v5 = 0LL;
  v6 = CThreadContext::RegisterGraphWalkRoot(*a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x40u, 0LL);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v5 = v2;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 8) = v2;
  }
  result = v8;
  *a2 = v5;
  return result;
}

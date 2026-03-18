/*
 * XREFs of ?CleanTree@CDesktopTree@@UEAAJXZ @ 0x18007B3F0
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800347DC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?PreRender@CLegacyRenderTarget@@UEAAJXZ @ 0x18007B37C (-PreRender@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?PreRender@CRemoteRenderTarget@@UEAAJXZ @ 0x1800E10A4 (-PreRender@CRemoteRenderTarget@@UEAAJXZ.c)
 *     ?PreRender@CDDisplayRenderTarget@@UEAAJXZ @ 0x18018D954 (-PreRender@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CleanTree@CVisualTree@@UEAAJXZ @ 0x18007B490 (-CleanTree@CVisualTree@@UEAAJXZ.c)
 */

__int64 __fastcall CDesktopTree::CleanTree(CDesktopTree *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned int v7; // edi
  HANDLE CurrentThread; // rax
  BOOL v9; // eax
  unsigned __int64 CycleTime; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( GetCurrentThreadId() == *(_DWORD *)(v1 + 528) )
  {
    v4 = CVisualTree::CleanTree(this);
    v6 = 0LL;
    v7 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xABu, 0LL);
    CycleTime = 0LL;
    if ( ::CycleTime )
    {
      CurrentThread = GetCurrentThread();
      v9 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v6 = CycleTime;
      if ( v9 )
        qword_1803452E8 += CycleTime - ::CycleTime;
    }
    ::CycleTime = v6;
  }
  else
  {
    v7 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003304315, 0xB1u, 0LL);
  }
  return v7;
}

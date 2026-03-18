/*
 * XREFs of ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18018C3C8
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E723C (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800CC60C (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18018B7D0 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCaptureRenderTarget::TryTargetNextBuffer(CCaptureRenderTarget *this)
{
  const HANDLE *v1; // rdx
  unsigned int v2; // edi
  __int64 v4; // rax
  DWORD v5; // eax
  int RenderTargetForFrameBuffer; // eax
  __int64 v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (const HANDLE *)*((_QWORD *)this + 257);
  v2 = 0;
  v4 = (__int64)(*((_QWORD *)this + 258) - (_QWORD)v1) >> 3;
  if ( v4 )
  {
    v5 = WaitForMultipleObjects(v4, v1, 0, 0);
    if ( v5 == 258 )
    {
      ScheduleCompositionPass(0, 0x2000u);
    }
    else
    {
      if ( v5 >= (unsigned __int64)((__int64)(*((_QWORD *)this + 252) - *((_QWORD *)this + 251)) >> 3) )
        ModuleFailFastForHRESULT(2147500037LL, retaddr);
      *((_DWORD *)this + 486) = v5;
      RenderTargetForFrameBuffer = CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(this);
      v2 = RenderTargetForFrameBuffer;
      if ( RenderTargetForFrameBuffer < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, RenderTargetForFrameBuffer, 0x290u, 0LL);
    }
  }
  return v2;
}

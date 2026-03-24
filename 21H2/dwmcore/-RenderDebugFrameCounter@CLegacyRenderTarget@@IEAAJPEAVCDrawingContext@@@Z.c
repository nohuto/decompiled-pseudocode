/*
 * XREFs of ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180184F98
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECE84 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058390 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18016200C (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x180162D28 (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x180162DAC (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180184B78 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x1801853DC (McTemplateU0qx_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderDebugFrameCounter(CLegacyRenderTarget *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  CDebugFrameCounter *v5; // rdi
  int v6; // eax
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  unsigned int FrameRate; // r14d
  unsigned int CPUTimePerFrame; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r15d
  CDisplayDebugFrameCounter *v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  __int128 v23; // [rsp+48h] [rbp-29h] BYREF
  __int128 v24; // [rsp+58h] [rbp-19h] BYREF

  v2 = 0;
  v5 = (CDebugFrameCounter *)*((_QWORD *)g_pComposition + 59);
  if ( v5 )
  {
    v6 = *((_DWORD *)this + 20);
    *(_QWORD *)&v24 = 0LL;
    v7 = 0.0;
    v8 = (float)v6;
    v9 = (float)*((int *)this + 21);
    *((float *)&v24 + 2) = (float)v6;
    v23 = 0LL;
    *((float *)&v24 + 3) = v9;
    FrameRate = CDebugFrameCounter::GetFrameRate(v5);
    CPUTimePerFrame = CDebugFrameCounter::GetCPUTimePerFrame(v5);
    v14 = CPUTimePerFrame;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qx_EventWriteTransfer(v13, v12, FrameRate, CPUTimePerFrame);
    v15 = (CDebugFrameCounter *)((char *)v5 + 4656);
    if ( v15 )
    {
      v16 = CDisplayDebugFrameCounter::Display(
              v15,
              FrameRate,
              v14,
              a2,
              (__int64)this + 264,
              &v24,
              CCommonRegistryData::m_fDebugFrameCounterIsVertical != 0,
              &v23);
      v2 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x575u, 0LL);
        return v2;
      }
      v18 = *(float *)&v23;
      v9 = *((float *)&v24 + 3);
      v8 = *((float *)&v24 + 2);
      v7 = *((float *)&v24 + 1);
      if ( *(float *)&v24 > *(float *)&v23 )
      {
        LODWORD(v23) = v24;
        v18 = *(float *)&v24;
      }
    }
    else
    {
      v18 = *(float *)&v23;
    }
    v19 = *((float *)&v23 + 1);
    if ( v7 > *((float *)&v23 + 1) )
    {
      *((float *)&v23 + 1) = v7;
      v19 = v7;
    }
    v20 = *((float *)&v23 + 2);
    if ( *((float *)&v23 + 2) > v8 )
    {
      *((float *)&v23 + 2) = v8;
      v20 = v8;
    }
    v21 = *((float *)&v23 + 3);
    if ( *((float *)&v23 + 3) > v9 )
    {
      *((float *)&v23 + 3) = v9;
      v21 = v9;
    }
    if ( v20 <= v18 || v21 <= v19 )
      v23 = 0uLL;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v23) )
      CLegacyRenderTarget::NotifyRenderedRect((__int64)this, (float *)&v23, 1);
  }
  return v2;
}

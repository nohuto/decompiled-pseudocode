/*
 * XREFs of ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801C0B5C
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801C091C (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x1801C0E80 (McTemplateU0qx_EventWriteTransfer.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801D6A58 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x1801D79F0 (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x1801D7A74 (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderDebugFrameCounter(CLegacyRenderTarget *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  CDebugFrameCounter *v4; // rdi
  int v5; // eax
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  unsigned int FrameRate; // r14d
  unsigned int CPUTimePerFrame; // eax
  __int64 v11; // rcx
  CDisplayDebugFrameCounter *v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  __int64 v19; // r9
  __int128 v21; // [rsp+48h] [rbp-29h] BYREF
  float v22; // [rsp+58h] [rbp-19h] BYREF
  float v23; // [rsp+5Ch] [rbp-15h]
  float v24; // [rsp+60h] [rbp-11h]
  float v25; // [rsp+64h] [rbp-Dh]

  v2 = 0;
  v4 = (CDebugFrameCounter *)*((_QWORD *)g_pComposition + 78);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 26);
    v22 = 0.0;
    v6 = 0.0;
    v23 = 0.0;
    v7 = (float)v5;
    v8 = (float)*((int *)this + 27);
    v24 = (float)v5;
    v21 = 0LL;
    v25 = v8;
    FrameRate = CDebugFrameCounter::GetFrameRate(v4);
    CPUTimePerFrame = CDebugFrameCounter::GetCPUTimePerFrame(v4);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qx_EventWriteTransfer(v11, &EVTDESC_DEBUG_FRAME_COUNTER_EVENT, FrameRate, CPUTimePerFrame);
    v12 = (CDebugFrameCounter *)((char *)v4 + 4640);
    if ( v12 )
    {
      v13 = CDisplayDebugFrameCounter::Display(
              v12,
              FrameRate,
              (__int64)this + 18208,
              (__int64)&v22,
              (void *)(CCommonRegistryData::m_fDebugFrameCounterIsVertical != 0),
              (__int64)&v21);
      v2 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x5E6u);
        return v2;
      }
      v15 = *(float *)&v21;
      v8 = v25;
      v7 = v24;
      v6 = v23;
      if ( v22 > *(float *)&v21 )
      {
        *(float *)&v21 = v22;
        v15 = v22;
      }
    }
    else
    {
      v15 = *(float *)&v21;
    }
    v16 = *((float *)&v21 + 1);
    if ( v6 > *((float *)&v21 + 1) )
    {
      *((float *)&v21 + 1) = v6;
      v16 = v6;
    }
    v17 = *((float *)&v21 + 2);
    if ( *((float *)&v21 + 2) > v7 )
    {
      *((float *)&v21 + 2) = v7;
      v17 = v7;
    }
    v18 = *((float *)&v21 + 3);
    if ( *((float *)&v21 + 3) > v8 )
    {
      *((float *)&v21 + 3) = v8;
      v18 = v8;
    }
    if ( v17 <= v15 || v18 <= v16 )
      v21 = 0uLL;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v21) )
      CLegacyRenderTarget::NotifyRenderedRect((__int64)this, &v21, 1, v19);
  }
  return v2;
}

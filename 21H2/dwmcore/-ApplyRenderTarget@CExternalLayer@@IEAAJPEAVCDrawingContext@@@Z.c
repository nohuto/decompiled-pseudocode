/*
 * XREFs of ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800412C4
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180019260 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180041100 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18003F0A8 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAX_N@Z @ 0x180041554 (-PopGpuClipFromScope@CScopedClipStack@@QEAAX_N@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180041590 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180076494 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18007A71C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExternalLayer::ApplyRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  struct IDeviceTarget *v4; // rax
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  void (__fastcall ***v9)(_QWORD, _DWORD *); // rcx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // edx
  float v15; // xmm1_4
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v19; // r8
  _DWORD v20[2]; // [rsp+30h] [rbp-20h] BYREF
  int v21; // [rsp+38h] [rbp-18h] BYREF
  int v22; // [rsp+3Ch] [rbp-14h]
  float v23; // [rsp+40h] [rbp-10h]
  float v24; // [rsp+44h] [rbp-Ch]

  v4 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
  v5 = CDrawingContext::PushRenderTarget(a2, v4);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x64u, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 33) = 1;
    v9 = (void (__fastcall ***)(_QWORD, _DWORD *))(v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 16LL));
    (**v9)(v9, v20);
    v21 = 0;
    v22 = 0;
    v23 = (float)v20[0];
    v24 = (float)v20[1];
    v10 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v21, 1, 1);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x77u, 0LL);
    }
    else
    {
      v12 = CDrawingContext::Clear((struct CDrawingContext *)((char *)a2 + 16), &stru_1802ACF00);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x7Au, 0LL);
        CDrawingContext::PopGpuClipRectInternal(a2, 0, v19);
      }
      else
      {
        CScopedClipStack::PopGpuClipFromScope((struct CDrawingContext *)((char *)a2 + 936), 0);
        v21 &= v14;
        v22 &= v14;
        *((_BYTE *)a2 + 5954) = 1;
        v15 = (float)*((int *)this + 7);
        v23 = (float)*((int *)this + 6);
        v24 = v15;
        v16 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, v14, (unsigned int)&v21, v14 + 1, 1);
        v7 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x87u, 0LL);
        else
          *((_BYTE *)this + 34) = 1;
      }
    }
  }
  return v7;
}

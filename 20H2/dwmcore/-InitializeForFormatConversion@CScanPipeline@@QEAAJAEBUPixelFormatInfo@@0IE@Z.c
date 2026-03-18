/*
 * XREFs of ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x180216F20
 * Callers:
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x180216CD8 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004EEC0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x180216ED0 (-ResetPipeline@CScanPipeline@@MEAAXXZ.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x180217320 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x180217464 (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 *     ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x1802178C4 (-ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ.c)
 */

__int64 __fastcall CScanPipeline::InitializeForFormatConversion(
        void **this,
        const struct PixelFormatInfo *a2,
        const struct PixelFormatInfo *a3,
        unsigned int a4)
{
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rsi
  __int64 *v13; // rdx
  __int64 *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  int appended; // eax
  int v19; // eax
  void (__fastcall *v20)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  int v21; // r9d
  int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-78h]
  _QWORD v25[2]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v26; // [rsp+40h] [rbp-58h]
  char v27; // [rsp+42h] [rbp-56h]
  int v28; // [rsp+44h] [rbp-54h]
  __m128i si128; // [rsp+48h] [rbp-50h]

  CScanPipeline::ResetPipeline((CScanPipeline *)this);
  operator delete(this[80]);
  this[80] = 0LL;
  v8 = a4;
  v9 = HrMalloc(0x30uLL, a4, this + 80);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x33u, 0LL);
  }
  else
  {
    v12 = 16 * v8;
    v13 = (__int64 *)(this + 81);
    v14 = (__int64 *)(this + 80);
    v15 = 2LL;
    do
    {
      v16 = *v14++;
      v17 = v12 + v16;
      *v13++ = v17;
      --v15;
    }
    while ( v15 );
  }
  if ( v11 < 0 )
  {
    v24 = 66;
    goto LABEL_28;
  }
  v28 = 0;
  v26 = 257;
  v27 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v25[0] = this;
  v25[1] = this + 80;
  appended = ScanPipelineBuilder::Append_Convert(v25, a2, a3);
  v11 = appended;
  if ( appended < 0 )
  {
    v24 = 81;
    goto LABEL_21;
  }
  if ( !*(_DWORD *)(v25[0] + 32LL) )
  {
    v19 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 2 )
    {
      v20 = Copy_128;
    }
    else
    {
      if ( v19 > 9 )
      {
        if ( v19 <= 11 )
        {
          v20 = Copy_64;
          goto LABEL_19;
        }
        if ( v19 == 24 || v19 == 28 || (unsigned int)(v19 - 87) <= 1 )
        {
          v20 = Copy_32;
          goto LABEL_19;
        }
      }
      v20 = 0LL;
    }
LABEL_19:
    appended = ScanPipelineBuilder::AddOp_Binary(v25, v20);
    v11 = appended;
    if ( appended < 0 )
    {
      v24 = 93;
LABEL_21:
      v21 = appended;
LABEL_29:
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v21, v24, 0LL);
      return (unsigned int)v11;
    }
  }
  v22 = ScanPipelineBuilder::ConvertDestBufferReferences((ScanPipelineBuilder *)v25);
  v11 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v22, 0x95u, 0LL);
  if ( v11 < 0 )
  {
    v24 = 96;
LABEL_28:
    v21 = v11;
    goto LABEL_29;
  }
  return (unsigned int)v11;
}

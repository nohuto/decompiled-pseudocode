/*
 * XREFs of ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802AFC90
 * Callers:
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802AF9F8 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x1802AFC40 (-ResetPipeline@CScanPipeline@@MEAAXXZ.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1802B008C (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1802B01CC (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 *     ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x1802B062C (-ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ.c)
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
  unsigned int v11; // ebx
  __int64 v12; // rsi
  _QWORD *v13; // rdx
  __int64 *v14; // r9
  __int64 v15; // r10
  __int64 v16; // rcx
  int appended; // eax
  __int64 v18; // rcx
  int v19; // eax
  void (__fastcall *v20)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  int v21; // r9d
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-78h]
  _QWORD v26[2]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v27; // [rsp+40h] [rbp-58h]
  char v28; // [rsp+42h] [rbp-56h]
  int v29; // [rsp+44h] [rbp-54h]
  __m128i si128; // [rsp+48h] [rbp-50h]

  CScanPipeline::ResetPipeline((CScanPipeline *)this);
  DefaultHeap::Free(this[80]);
  this[80] = 0LL;
  v8 = a4;
  v9 = HrMalloc(0x30uLL, a4, this + 80);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x33u);
    v25 = 66;
    goto LABEL_23;
  }
  v12 = 16 * v8;
  v13 = this + 81;
  v14 = (__int64 *)(this + 80);
  v15 = 2LL;
  do
  {
    v16 = *v14++;
    *v13++ = v12 + v16;
    --v15;
  }
  while ( v15 );
  v29 = 0;
  v27 = 257;
  v28 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v26[0] = this;
  v26[1] = this + 80;
  appended = ScanPipelineBuilder::Append_Convert(v26, a2, a3, v14);
  v11 = appended;
  if ( appended < 0 )
  {
    v25 = 81;
    goto LABEL_18;
  }
  if ( !*(_DWORD *)(v26[0] + 32LL) )
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
          goto LABEL_16;
        }
        if ( v19 == 24 || v19 == 28 || (unsigned int)(v19 - 87) <= 1 )
        {
          v20 = Copy_32;
          goto LABEL_16;
        }
      }
      v20 = 0LL;
    }
LABEL_16:
    appended = ScanPipelineBuilder::AddOp_Binary(v26, v20);
    v11 = appended;
    if ( appended < 0 )
    {
      v25 = 93;
LABEL_18:
      v21 = appended;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v21, v25);
      return v11;
    }
  }
  v22 = ScanPipelineBuilder::ConvertDestBufferReferences((ScanPipelineBuilder *)v26);
  v11 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x95u);
    v25 = 96;
LABEL_23:
    v21 = v11;
    goto LABEL_24;
  }
  return v11;
}

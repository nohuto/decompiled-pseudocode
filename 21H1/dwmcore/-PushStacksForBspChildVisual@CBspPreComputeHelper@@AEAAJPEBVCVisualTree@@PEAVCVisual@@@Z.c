/*
 * XREFs of ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18019DCC4
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18004C758 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180095E7C (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800B6434 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800C14A0 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18017BFA8 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x18019DA5C (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18019E110 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspChildVisual(
        CBspPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  float OpacityInternal; // xmm0_4
  unsigned int *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v24; // [rsp+50h] [rbp+20h] BYREF

  CBspPreComputeHelper::PushTransformForChildVisual(this, a2, a3);
  if ( (*((_BYTE *)a3 + 96) & 0x40) != 0
    && (v24 = *((int *)a3 + 50),
        v5 = CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((unsigned int *)this + 32, &v24),
        v7 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x9Du, 0LL);
  }
  else
  {
    v8 = *((_DWORD *)a3 + 24);
    if ( (v8 & 2) != 0
      && (v24 = v8 << 18 >> 28,
          v9 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v24),
          v7 = v9,
          v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA3u, 0LL);
    }
    else if ( (*((_BYTE *)a3 + 96) & 8) != 0
           && (v24 = *((int *)a3 + 47),
               v11 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(
                       (unsigned int *)this + 48,
                       &v24),
               v7 = v11,
               v11 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA9u, 0LL);
    }
    else if ( (*((_BYTE *)a3 + 96) & 0x10) != 0
           && (v24 = *((int *)a3 + 48),
               v13 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v24),
               v7 = v13,
               v13 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xAFu, 0LL);
    }
    else
    {
      OpacityInternal = CVisual::GetOpacityInternal(a3);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(OpacityInternal - 1.0) & _xmm) < 0.0000011920929
        || (*(float *)&v24 = fminf(1.0, fmaxf(OpacityInternal, 0.0))
                           * *(float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256),
            v17 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(v16, &v24),
            v7 = v17,
            v17 >= 0) )
      {
        if ( *((char *)a3 + 93) >= 0
          || (LOBYTE(v24) = 1,
              v19 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 36, &v24),
              v7 = v19,
              v19 >= 0) )
        {
          v21 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push(
                  (unsigned int *)this + 80,
                  (_DWORD *)this + 88);
          v7 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xC2u, 0LL);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xBEu, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xB8u, 0LL);
      }
    }
  }
  return v7;
}

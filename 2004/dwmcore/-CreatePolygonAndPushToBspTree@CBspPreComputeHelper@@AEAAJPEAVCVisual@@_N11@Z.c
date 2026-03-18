/*
 * XREFs of ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18019AACC
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18019A9B4 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180080058 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18009E02C (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1800D5164 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x18016DE08 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x18019A984 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z @ 0x18019AD10 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18019AFE0 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801AF16C (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801FB904 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::CreatePolygonAndPushToBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        bool a3,
        char a4,
        bool a5)
{
  const struct CMILMatrix *TopByReference; // rax
  int v10; // ecx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  char *v14; // rax
  char v15; // bl
  unsigned int *v16; // r8
  int v17; // r9d
  int v18; // r10d
  int v19; // r11d
  int PolygonNoRef; // eax
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // rcx
  CBspNode *v24; // rbx
  volatile signed __int32 *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  CBspNode *v32; // [rsp+68h] [rbp-21h] BYREF
  _OWORD v33[4]; // [rsp+78h] [rbp-11h] BYREF
  int v34; // [rsp+B8h] [rbp+2Fh]
  struct CPolygon *v35; // [rsp+E8h] [rbp+5Fh] BYREF

  TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
  v35 = 0LL;
  v10 = *((_DWORD *)this + 72);
  v11 = *((_OWORD *)TopByReference + 1);
  v33[0] = *(_OWORD *)TopByReference;
  v12 = *((_OWORD *)TopByReference + 2);
  v33[1] = v11;
  v13 = *((_OWORD *)TopByReference + 3);
  v34 = *((_DWORD *)TopByReference + 16);
  v14 = 0LL;
  v33[2] = v12;
  v33[3] = v13;
  if ( v10 )
    v14 = (char *)(*((_QWORD *)this + 38) + (unsigned int)(v10 - 1));
  v15 = *v14;
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256);
  PolygonNoRef = CVisual::GetPolygonNoRef(a2, v33, v16, *v16, v17, v18, v19, a4, v15, a5, &v35);
  v22 = PolygonNoRef;
  if ( PolygonNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, PolygonNoRef, 0x1BCu, 0LL);
    goto LABEL_15;
  }
  v24 = *(CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((__int64)this);
  v32 = v24;
  if ( !v24 )
  {
    CWatermarkStack<CBspNode *,64,2,10>::Pop(v23, 0LL);
    v25 = (volatile signed __int32 *)CBspNode::operator new();
    v24 = (CBspNode *)v25;
    if ( v25 )
    {
      *((_QWORD *)v25 + 4) = 0LL;
      *((_QWORD *)v25 + 5) = 0LL;
      *((_QWORD *)v25 + 6) = 0LL;
      *((_DWORD *)v25 + 2) = 0;
      *(_QWORD *)v25 = &CBspNode::`vftable';
      *((_BYTE *)v25 + 56) = a3;
      _InterlockedIncrement(v25 + 2);
    }
    else
    {
      v24 = 0LL;
    }
    v32 = v24;
    if ( !v24 )
    {
      v22 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0x1C7u, 0LL);
      goto LABEL_15;
    }
    v27 = CWatermarkStack<CBspNode *,64,2,10>::Push(this, &v32);
    v22 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x1C9u, 0LL);
      goto LABEL_15;
    }
  }
  v29 = CBspNode::PushPolygon(v24, v35, a3);
  v22 = v29;
  if ( v29 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x1CCu, 0LL);
LABEL_15:
  ReleaseInterface<CPolygon>((__int64 *)&v35);
  return v22;
}

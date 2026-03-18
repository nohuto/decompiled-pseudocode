/*
 * XREFs of ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1801B4E34
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x1801B4D10 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x18019E294 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x1801B4CD4 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@M$0EA@$01$09@@QEBAPEBMXZ @ 0x1801B5050 (-GetTopByReference@-$CWatermarkStack@M$0EA@$01$09@@QEBAPEBMXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1801B506C (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z @ 0x1801B5088 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x1801B5270 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801F742C (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ??0CBspNode@@QEAA@_N@Z @ 0x180246C7C (--0CBspNode@@QEAA@_N@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180246EBC (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::CreatePolygonAndPushToBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        bool a3,
        char a4,
        bool a5)
{
  const struct CMILMatrix *TopByReference; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  char *v15; // rax
  char v16; // bl
  unsigned int *v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  unsigned int *v21; // r8
  int v22; // r9d
  int v23; // r10d
  int v24; // r11d
  int PolygonNoRef; // eax
  __int64 v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // rcx
  CBspNode *v29; // rsi
  CBspNode *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  CBspNode *v37; // [rsp+68h] [rbp-21h] BYREF
  _OWORD v38[4]; // [rsp+78h] [rbp-11h] BYREF
  int v39; // [rsp+B8h] [rbp+2Fh]
  struct CPolygon *v40; // [rsp+E8h] [rbp+5Fh] BYREF

  TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
  v40 = 0LL;
  v11 = *((_DWORD *)this + 72);
  v12 = *((_OWORD *)TopByReference + 1);
  v38[0] = *(_OWORD *)TopByReference;
  v13 = *((_OWORD *)TopByReference + 2);
  v38[1] = v12;
  v14 = *((_OWORD *)TopByReference + 3);
  v39 = *((_DWORD *)TopByReference + 16);
  v15 = 0LL;
  v38[2] = v13;
  v38[3] = v14;
  if ( v11 )
    v15 = (char *)(*((_QWORD *)this + 38) + (unsigned int)(v11 - 1));
  v16 = *v15;
  v17 = 0LL;
  v18 = *((_DWORD *)this + 48);
  if ( v18 )
    v17 = (unsigned int *)(*((_QWORD *)this + 26) + 4LL * (unsigned int)(v18 - 1));
  v19 = *((_DWORD *)this + 80);
  v20 = 0LL;
  if ( v19 )
    v20 = *((_QWORD *)this + 42) + 4LL * (unsigned int)(v19 - 1);
  CWatermarkStack<float,64,2,10>::GetTopByReference((char *)this + 256, v10, v20, *v17);
  PolygonNoRef = CVisual::GetPolygonNoRef(a2, v38, v21, *v21, v22, v23, v24, a4, v16, a5, &v40);
  v27 = PolygonNoRef;
  if ( PolygonNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, PolygonNoRef, 0x1BCu);
    goto LABEL_17;
  }
  v29 = *(CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(this);
  if ( v29 )
    goto LABEL_14;
  CWatermarkStack<CBspNode *,64,2,10>::Pop(v28, 0LL);
  v30 = (CBspNode *)CBspNode::operator new();
  if ( !v30 || (v37 = CBspNode::CBspNode(v30, a3), (v29 = v37) == 0LL) )
  {
    v27 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, -2147024882, 0x1C7u);
    goto LABEL_17;
  }
  v32 = CWatermarkStack<CBspNode *,64,2,10>::Push(this, &v37);
  v27 = v32;
  if ( v32 >= 0 )
  {
LABEL_14:
    v34 = CBspNode::PushPolygon(v29, v40, a3);
    v27 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0LL, v34, 0x1CCu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0x1C9u);
  }
LABEL_17:
  ReleaseInterface<CPolygon>((__int64 *)&v40);
  return v27;
}

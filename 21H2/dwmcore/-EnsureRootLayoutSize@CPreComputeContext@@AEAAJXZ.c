/*
 * XREFs of ?EnsureRootLayoutSize@CPreComputeContext@@AEAAJXZ @ 0x18008F194
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z @ 0x18008E370 (-PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x18004300C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x1800D22AC (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1800D98E4 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800D9F2C (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CPreComputeContext::EnsureRootLayoutSize(CPreComputeContext *this)
{
  unsigned int v1; // edi
  CVisual *v2; // rbx
  int v4; // eax
  __int64 v5; // rcx
  bool i; // al
  unsigned int v7[4]; // [rsp+30h] [rbp-20h] BYREF
  void *lpMem; // [rsp+40h] [rbp-10h]
  int v9; // [rsp+48h] [rbp-8h]
  CVisual *v10; // [rsp+60h] [rbp+10h] BYREF

  v1 = 0;
  v2 = *(CVisual **)(*(_QWORD *)(*(_QWORD *)this + 56LL) + 80LL);
  if ( v2 )
  {
    v7[0] = 0;
    v7[1] = 0;
    lpMem = 0LL;
    v7[2] = 0;
    v9 = 0;
    v10 = v2;
    do
    {
      v4 = CWatermarkStack<CVisual *,64,2,10>::Push(v7, &v10);
      v1 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x4D0u, 0LL);
        goto LABEL_11;
      }
      v2 = (CVisual *)*((_QWORD *)v2 + 10);
      v10 = v2;
    }
    while ( v2 );
    for ( i = 0;
          v7[0] && (i || *(_BYTE *)(*(_QWORD *)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(v7) + 88LL));
          i = CVisual::ComputeLayoutSize(v10) )
    {
      CWatermarkStack<CVisual *,64,2,10>::Pop(v7, &v10);
    }
LABEL_11:
    operator delete(lpMem);
  }
  return v1;
}

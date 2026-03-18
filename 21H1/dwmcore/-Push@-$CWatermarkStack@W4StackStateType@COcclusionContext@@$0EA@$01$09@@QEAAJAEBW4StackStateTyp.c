/*
 * XREFs of ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800B6434
 * Callers:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x180035438 (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1800B63C8 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18019DCC4 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18019DEB4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18002C9E8 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push(unsigned int *a1, _DWORD *a2)
{
  void *v2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  void *v13; // rbx
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v14 = 0LL;
  v5 = *a1;
  if ( *a1 != a1[1] )
    goto LABEL_2;
  v9 = 2LL * a1[1];
  if ( v9 > 0xFFFFFFFF )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    goto LABEL_5;
  }
  if ( (unsigned int)v9 <= 0x40 )
    LODWORD(v9) = 64;
  v10 = HrMalloc(4uLL, (unsigned int)v9, &v14);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x53u, 0LL);
    goto LABEL_14;
  }
  v12 = 4LL * *a1;
  if ( v12 > 0xFFFFFFFF )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0x55u, 0LL);
LABEL_14:
    v2 = v14;
    goto LABEL_5;
  }
  v13 = v14;
  memcpy_0(v14, *((const void **)a1 + 2), (unsigned int)v12);
  operator delete(*((void **)a1 + 2));
  v5 = *a1;
  *((_QWORD *)a1 + 2) = v13;
  a1[1] = v9;
LABEL_2:
  *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v5) = *a2;
  ++*a1;
  v6 = a1[6];
  if ( v6 <= *a1 )
    v6 = *a1;
  v7 = 0;
  a1[6] = v6;
LABEL_5:
  operator delete(v2);
  return v7;
}

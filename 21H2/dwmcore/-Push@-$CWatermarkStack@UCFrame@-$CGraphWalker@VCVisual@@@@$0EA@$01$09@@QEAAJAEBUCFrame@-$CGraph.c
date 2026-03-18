/*
 * XREFs of ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVisual@@@@@Z @ 0x18004C19C
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18004B070 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800E63D8 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Push(unsigned int *a1, _OWORD *a2)
{
  unsigned int v2; // eax
  void *v3; // rbx
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  void *v13; // rbx
  HANDLE ProcessHeap; // rax
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v15 = 0LL;
  if ( v2 != a1[1] )
    goto LABEL_2;
  v9 = 2LL * a1[1];
  if ( v9 > 0xFFFFFFFF )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024362, 0x64u, 0LL);
    return v7;
  }
  if ( (unsigned int)v9 <= 0x40 )
    LODWORD(v9) = 64;
  v10 = HrMalloc(0x10uLL, (unsigned int)v9, &v15);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x6Bu, 0LL);
  }
  else
  {
    v12 = 16LL * *a1;
    if ( v12 <= 0xFFFFFFFF )
    {
      v13 = v15;
      memcpy_0(v15, *((const void **)a1 + 2), (unsigned int)v12);
      DefaultHeap::Free(*((void **)a1 + 2));
      v2 = *a1;
      *((_QWORD *)a1 + 2) = v13;
      v3 = 0LL;
      a1[1] = v9;
LABEL_2:
      *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * v2) = *a2;
      ++*a1;
      v6 = a1[6];
      if ( v6 <= *a1 )
        v6 = *a1;
      v7 = 0;
      a1[6] = v6;
      goto LABEL_5;
    }
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0x6Du, 0LL);
  }
  v3 = v15;
LABEL_5:
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  return v7;
}

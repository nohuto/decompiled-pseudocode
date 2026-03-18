/*
 * XREFs of ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180016EE0
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18006563C (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext.c)
 * Callees:
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180016FA4 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVisual@@@@@Z @ 0x180016FD0 (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$CGraph.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD378 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoFirstChild(__int64 a1, struct CVisual **a2, _QWORD *a3)
{
  int Count; // ebp
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // r8
  struct CVisual *ChildAt; // rax
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+38h] [rbp-10h]

  *a2 = 0LL;
  Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(*(_QWORD *)(a1 + 8) + 72LL));
  if ( Count )
  {
    v14 = *(_QWORD *)(a1 + 16);
    v15 = *(_DWORD *)(a1 + 24);
    v7 = CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Push(a1 + 32, &v14);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x8Bu, 0LL);
    }
    else
    {
      v10 = 0;
      if ( *(_DWORD *)(a1 + 28) != 1 )
        v10 = Count - 1;
      *(_DWORD *)(a1 + 24) = v10;
      v11 = *(_QWORD *)(a1 + 8);
      if ( a3 )
        ChildAt = *(struct CVisual **)(*a3 + 8LL * v10);
      else
        ChildAt = CVisual::GetChildAt(*(CVisual **)(a1 + 8), v10);
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v11;
      *(_QWORD *)(a1 + 8) = ChildAt;
      *a2 = ChildAt;
    }
  }
  else
  {
    return 1;
  }
  return v9;
}

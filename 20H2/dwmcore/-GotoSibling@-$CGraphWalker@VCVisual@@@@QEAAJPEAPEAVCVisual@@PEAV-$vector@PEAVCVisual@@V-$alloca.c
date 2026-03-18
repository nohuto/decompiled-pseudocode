/*
 * XREFs of ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180065790
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18006563C (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext.c)
 * Callees:
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180016FA4 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD378 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoSibling(__int64 a1, struct CVisual **a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r9d
  __int64 v7; // r11
  int *v9; // r10
  int v10; // r8d
  unsigned int v11; // eax
  __int64 v12; // r8
  struct CVisual *ChildAt; // rax
  unsigned int Count; // eax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  *a2 = 0LL;
  v7 = a1;
  if ( !v3 )
    return 1;
  v9 = (int *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 28) != 1 )
    goto LABEL_6;
  if ( *v9 == -1 )
    return 1;
  Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 72));
  if ( v10 + 1 >= Count )
  {
LABEL_6:
    if ( *(_DWORD *)(v7 + 28) == v4 )
    {
      v10 = *v9;
      if ( *v9 )
        goto LABEL_7;
    }
    return 1;
  }
LABEL_7:
  v11 = v10 - 1;
  v12 = (unsigned int)(v10 + 1);
  if ( *(_DWORD *)(v7 + 28) != 1 )
    v12 = v11;
  if ( a3 )
    ChildAt = *(struct CVisual **)(*a3 + 8 * v12);
  else
    ChildAt = CVisual::GetChildAt((CVisual *)v3);
  *(_QWORD *)(v7 + 8) = ChildAt;
  *v9 = v12;
  *a2 = ChildAt;
  return v4;
}

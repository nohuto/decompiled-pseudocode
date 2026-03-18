/*
 * XREFs of ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180046384
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x180046190 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?GetChildAt@CVisual@@QEBAPEAV1@I@Z @ 0x1800E649C (-GetChildAt@CVisual@@QEBAPEAV1@I@Z.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoSibling(__int64 a1, struct CVisual **a2, _QWORD *a3)
{
  __int64 v3; // r9
  unsigned int v4; // r10d
  int *v8; // r11
  int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // rdi
  struct CVisual *ChildAt; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  *a2 = 0LL;
  if ( !v3 )
    return 1;
  v8 = (int *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 28) != 1 )
    goto LABEL_6;
  v9 = *v8;
  if ( *v8 == -1 )
    return 1;
  if ( v9 + 1 >= (unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 80)) )
  {
LABEL_6:
    if ( *(_DWORD *)(a1 + 28) == v4 )
    {
      v9 = *v8;
      if ( *v8 )
        goto LABEL_7;
    }
    return 1;
  }
LABEL_7:
  v10 = v9 - 1;
  v11 = (unsigned int)(v9 + 1);
  if ( *(_DWORD *)(a1 + 28) != 1 )
    v11 = v10;
  if ( a3 )
    ChildAt = *(struct CVisual **)(*a3 + 8 * v11);
  else
    ChildAt = CVisual::GetChildAt((CVisual *)v3, v11);
  *(_QWORD *)(a1 + 8) = ChildAt;
  *v8 = v11;
  *a2 = ChildAt;
  return v4;
}

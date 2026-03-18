/*
 * XREFs of ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1801FAFC8
 * Callers:
 *     ??$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@PEAV2@@Z @ 0x180088180 (--$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18008AF48 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008F210 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800D5AC8 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x180181A78 (--$_Emplace_reallocate@AEBQEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 */

__int64 __fastcall CVisualTree::EnsureVisualTransform(CVisualTree *this, struct CVisual *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rcx
  _BYTE *v6; // rdi
  struct CComposition *CurrentFrameId; // rax
  CVisual *v8; // rsi
  struct CComposition *v9; // r14
  _BYTE *v10; // rbx
  void *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r14
  CVisual **v14; // r13
  CVisual *v15; // rbx
  struct CTreeData *v16; // rax
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  _BYTE *v19; // [rsp+40h] [rbp-10h]
  CVisual *i; // [rsp+90h] [rbp+40h] BYREF

  v4 = 0;
  if ( CVisualTree::_IsInTree((__int64)this, (__int64)a2, 0) )
  {
    v6 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    CurrentFrameId = GetCurrentFrameId();
    v8 = (CVisual *)*((_QWORD *)a2 + 11);
    v9 = CurrentFrameId;
    v10 = 0LL;
    for ( i = v8; i; v8 = i )
    {
      if ( *((_QWORD *)CVisual::EnsureTreeData(v8, this) + 34) >= (unsigned __int64)v9 )
        break;
      if ( v10 == v6 )
      {
        std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>(&v18, v10, &i);
        v6 = v19;
        v10 = (_BYTE *)*((_QWORD *)&v18 + 1);
        v8 = i;
      }
      else
      {
        *(_QWORD *)v10 = v8;
        v10 += 8;
        *((_QWORD *)&v18 + 1) = v10;
      }
      if ( v8 == *((CVisual **)this + 8) )
        break;
      i = (CVisual *)*((_QWORD *)v8 + 11);
    }
    v11 = (void *)v18;
    v12 = (__int64)&v10[-v18] >> 3;
    v13 = (int)v12;
    if ( (int)v12 > 0 )
    {
      v14 = (CVisual **)(v18 - 8 + 8LL * (int)v12);
      do
      {
        v15 = *v14;
        v16 = CVisual::EnsureTreeData(*v14, this);
        CVisual::EnsureWorldTransform(v15, (CVisual **)this, v16);
        --v13;
        --v14;
      }
      while ( v13 > 0 );
    }
    if ( v11 )
      std::_Deallocate<16,0>(v11, (v6 - (_BYTE *)v11) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2147024809, 0x7Cu);
  }
  return v4;
}

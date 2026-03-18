/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800C94D4
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800341CC (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x18008E810 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delet.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::_Emplace_reallocate<std::unique_ptr<CCachedVisualImage::CCachedTarget>>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  SIZE_T v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  __int64 v17; // rdi
  unsigned __int64 v18; // r15
  _QWORD **v19; // rcx
  _QWORD *v20; // r8
  _QWORD *v21; // rdx
  unsigned __int64 result; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // r8
  _QWORD *v26; // rdx
  _QWORD *v27; // rax

  v4 = (unsigned __int64)a2 - *(_QWORD *)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v5 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v5 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v5 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = 8 * v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = *a3;
  v16 = v4 & 0xFFFFFFFFFFFFFFF8uLL;
  *a3 = 0LL;
  v17 = v14;
  v18 = v14 + v16;
  *(_QWORD *)(v14 + v16) = v15;
  v19 = (_QWORD **)v14;
  v20 = *(_QWORD **)(a1 + 8);
  v21 = *(_QWORD **)a1;
  if ( a2 == v20 )
  {
    while ( v21 != v20 )
    {
      v23 = (_QWORD *)*v21;
      *v21 = 0LL;
      *v19++ = v23;
      ++v21;
    }
  }
  else
  {
    while ( v21 != a2 )
    {
      v24 = (_QWORD *)*v21;
      *v21 = 0LL;
      *v19++ = v24;
      ++v21;
    }
    std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(v19, v19);
    v25 = *(_QWORD **)(a1 + 8);
    v19 = (_QWORD **)(v18 + 8);
    if ( a2 != v25 )
    {
      v26 = (_QWORD *)((char *)a2 + v18 - v16 - v17);
      do
      {
        v27 = (_QWORD *)*v26;
        *v26++ = 0LL;
        *v19++ = v27;
      }
      while ( v26 != v25 );
    }
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(v19, v19);
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(
      *(_QWORD ***)a1,
      *(_QWORD ***)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  result = v18;
  *(_QWORD *)(a1 + 8) = v17 + 8 * v8;
  *(_QWORD *)a1 = v17;
  *(_QWORD *)(a1 + 16) = v12 + v17;
  return result;
}

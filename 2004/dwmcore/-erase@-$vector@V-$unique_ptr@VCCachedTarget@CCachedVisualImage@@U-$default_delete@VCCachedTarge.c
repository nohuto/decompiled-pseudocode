/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801AD4F4
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x180033DFC (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1800472E0 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ @ 0x1800D0108 (-MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ.c)
 * Callees:
 *     ??_GCCachedTarget@CCachedVisualImage@@QEAAPEAXI@Z @ 0x1800D38D0 (--_GCCachedTarget@CCachedVisualImage@@QEAAPEAXI@Z.c)
 */

CCachedVisualImage::CCachedTarget ***__fastcall std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
        __int64 a1,
        CCachedVisualImage::CCachedTarget ***a2,
        CCachedVisualImage::CCachedTarget **a3)
{
  CCachedVisualImage::CCachedTarget **v3; // rbp
  CCachedVisualImage::CCachedTarget **v4; // rdi
  CCachedVisualImage::CCachedTarget **v8; // rax
  CCachedVisualImage::CCachedTarget **v9; // rsi
  CCachedVisualImage::CCachedTarget *v10; // rax
  CCachedVisualImage::CCachedTarget *v11; // rcx
  CCachedVisualImage::CCachedTarget *v12; // rcx
  CCachedVisualImage::CCachedTarget ***result; // rax

  v3 = *(CCachedVisualImage::CCachedTarget ***)(a1 + 8);
  v4 = a3 + 1;
  v8 = v3;
  if ( a3 + 1 != v3 )
  {
    v9 = a3;
    do
    {
      if ( v9 != v4 )
      {
        v10 = *v4;
        *v4 = 0LL;
        v11 = *v9;
        *v9 = v10;
        if ( v11 )
          CCachedVisualImage::CCachedTarget::`scalar deleting destructor'(v11);
      }
      ++v4;
      ++v9;
    }
    while ( v4 != v3 );
    v3 = *(CCachedVisualImage::CCachedTarget ***)(a1 + 8);
    v8 = v3;
  }
  v12 = *(v3 - 1);
  if ( v12 )
  {
    CCachedVisualImage::CCachedTarget::`scalar deleting destructor'(v12);
    v8 = *(CCachedVisualImage::CCachedTarget ***)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 1;
  result = a2;
  *a2 = a3;
  return result;
}

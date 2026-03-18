/*
 * XREFs of ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1800472E0
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x180033DFC (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180046F8C (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x18004738C (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801AD4F4 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 */

char __fastcall CCachedVisualImage::RemoveInvalidTargets(CCachedVisualImage *this, struct D2D_SIZE_U a2)
{
  char *v2; // r15
  UINT32 width; // edi
  CCachedVisualImage::CCachedTarget **v4; // rbx
  char v6; // bp
  CCachedVisualImage::CCachedTarget *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, char *); // rcx
  char v12; // [rsp+50h] [rbp+8h] BYREF
  struct D2D_SIZE_U v13; // [rsp+58h] [rbp+10h]
  char v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = a2;
  v2 = (char *)this + 184;
  width = a2.width;
  v4 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 23);
  v6 = 0;
  while ( v4 != *((CCachedVisualImage::CCachedTarget ***)this + 24) )
  {
    v8 = *v4;
    if ( !CCachedVisualImage::CCachedTarget::IsValid(*v4) )
      goto LABEL_9;
    v9 = *((_QWORD *)v8 + 1);
    v10 = 0LL;
    if ( v9 )
    {
      v11 = (__int64 (__fastcall ***)(_QWORD, char *))(v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 16LL));
      v10 = *(_QWORD *)(**v11)(v11, &v12);
    }
    if ( v10 == __PAIR64__(v13.height, width) )
    {
      ++v4;
    }
    else
    {
LABEL_9:
      v6 = 1;
      v4 = *(CCachedVisualImage::CCachedTarget ***)std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
                                                     v2,
                                                     &v14,
                                                     v4);
    }
  }
  return v6;
}

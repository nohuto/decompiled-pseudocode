/*
 * XREFs of ?IsProtected@CRenderData@@UEBA_NXZ @ 0x1800EA8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LivePreviewProtected@@@details@wil@@QEAA_NXZ @ 0x1800E67A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LivePreviewProtected@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?IsProtected@CCachedVisualImage@@UEBA_NXZ @ 0x18016F750 (-IsProtected@CCachedVisualImage@@UEBA_NXZ.c)
 */

char __fastcall CRenderData::IsProtected(CRenderData *this)
{
  char v2; // di
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx

  v2 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LivePreviewProtected>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LivePreviewProtected>::GetImpl'::`2'::impl) )
  {
    v3 = *((_DWORD *)this + 38);
    if ( v3 )
    {
      v4 = 0LL;
      v5 = v3;
      do
      {
        v6 = *(_QWORD *)(v4 + *((_QWORD *)this + 16));
        if ( v6
          && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 15LL)
          && CCachedVisualImage::IsProtected((CCachedVisualImage *)(*(_QWORD *)(v4 + *((_QWORD *)this + 16)) + 64LL)) )
        {
          v2 = 1;
        }
        v4 += 8LL;
        --v5;
      }
      while ( v5 );
    }
  }
  return v2;
}

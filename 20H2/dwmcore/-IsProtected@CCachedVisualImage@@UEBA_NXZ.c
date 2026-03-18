/*
 * XREFs of ?IsProtected@CCachedVisualImage@@UEBA_NXZ @ 0x18016F750
 * Callers:
 *     ?IsProtected@CRenderData@@UEBA_NXZ @ 0x1800EA8E0 (-IsProtected@CRenderData@@UEBA_NXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LivePreviewProtected@@@details@wil@@QEAA_NXZ @ 0x1800E67A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LivePreviewProtected@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCachedVisualImage::IsProtected(CCachedVisualImage *this)
{
  char v2; // bl
  __int64 v3; // rsi
  __int64 i; // rdi
  __int64 v5; // rcx

  v2 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LivePreviewProtected>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LivePreviewProtected>::GetImpl'::`2'::impl) )
  {
    v3 = *((_QWORD *)this + 16);
    for ( i = *((_QWORD *)this + 15); i != v3; i += 8LL )
    {
      v5 = *(_QWORD *)(*(_QWORD *)i + 8LL) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 8LL) + 16LL);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5) )
        v2 = 1;
    }
  }
  return v2;
}

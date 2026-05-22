/*
 * XREFs of ?Create@AnimationDataProvider@@SA?AV?$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ @ 0x18002C2A4
 * Callers:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C25C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VAnimationDataProvider@@UIAnimationDataProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAnimationDataProvider@@@Z @ 0x18002C2E0 (--$MakeAndInitialize@VAnimationDataProvider@@UIAnimationDataProvider@@$$V@Details@WRL@Microsoft@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall AnimationDataProvider::Create(_QWORD *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<AnimationDataProvider,IAnimationDataProvider,>();
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x38,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v2,
      1);
    __debugbreak();
  }
  return a1;
}

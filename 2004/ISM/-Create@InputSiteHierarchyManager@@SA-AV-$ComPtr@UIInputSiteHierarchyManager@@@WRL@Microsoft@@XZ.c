/*
 * XREFs of ?Create@InputSiteHierarchyManager@@SA?AV?$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ @ 0x18001EF9C
 * Callers:
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18001EF54 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VInputSiteHierarchyManager@@UIInputSiteHierarchyManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInputSiteHierarchyManager@@@Z @ 0x18001EFD8 (--$MakeAndInitialize@VInputSiteHierarchyManager@@UIInputSiteHierarchyManager@@$$V@Details@WRL@Mi.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall InputSiteHierarchyManager::Create(_QWORD *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<InputSiteHierarchyManager,IInputSiteHierarchyManager,>(a1);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsitehierarchymanager.cpp",
      (const char *)(unsigned int)v2,
      1);
    __debugbreak();
  }
  return a1;
}

/*
 * XREFs of ?GetSwitchItemElementIndex@CSwitchItemGrid@@UEAAJPEAUISwitchItem@@PEA_K@Z @ 0x180386150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$FindEx@VCompareToItemData@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareToItemData@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180385460 (--$FindEx@VCompareToItemData@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElement@@@WRL@Mi.c)
 */

__int64 __fastcall CSwitchItemGrid::GetSwitchItemElementIndex(
        CSwitchItemGrid *this,
        struct ISwitchItem *a2,
        unsigned __int64 *a3)
{
  __int64 v5; // r8
  int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ISwitchItem *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v6 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<CompareToItemData>(
         (__int64 *)this - 27,
         &v9,
         v5,
         a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x268,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}

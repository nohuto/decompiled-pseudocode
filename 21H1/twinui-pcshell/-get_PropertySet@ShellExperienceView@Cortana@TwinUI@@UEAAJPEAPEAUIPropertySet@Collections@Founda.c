/*
 * XREFs of ?get_PropertySet@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180087620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_PropertySet(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  struct Windows::Foundation::Collections::IPropertySet **v2; // rbx

  v2 = (struct Windows::Foundation::Collections::IPropertySet **)((char *)this + 80);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 10);
  *a2 = *v2;
  return 0LL;
}

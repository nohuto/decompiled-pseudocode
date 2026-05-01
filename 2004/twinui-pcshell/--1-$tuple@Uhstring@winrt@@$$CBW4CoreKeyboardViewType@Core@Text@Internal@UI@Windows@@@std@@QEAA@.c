/*
 * XREFs of ??1?$tuple@Uhstring@winrt@@$$CBW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@std@@QEAA@XZ @ 0x180347EC0
 * Callers:
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$2 @ 0x18034B8E1 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$2.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$4 @ 0x18034B8ED (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$4.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$6 @ 0x18034B8F9 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$6.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$8 @ 0x18034B905 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$8.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$10 @ 0x18034B911 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$10.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$12 @ 0x18034B91D (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$12.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$14 @ 0x18034B929 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$14.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$16 @ 0x18034B935 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$16.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$18 @ 0x18034B941 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$18.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$20 @ 0x18034B94D (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$20.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$22 @ 0x18034B959 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$22.c)
 * Callees:
 *     <none>
 */

void __fastcall std::tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>::~tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>(
        HSTRING *a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 1);
}

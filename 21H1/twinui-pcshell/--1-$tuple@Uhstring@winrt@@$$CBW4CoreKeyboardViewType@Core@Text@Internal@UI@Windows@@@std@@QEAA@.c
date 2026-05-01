/*
 * XREFs of ??1?$tuple@Uhstring@winrt@@$$CBW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@std@@QEAA@XZ @ 0x180326370
 * Callers:
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$2 @ 0x180329D91 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$2.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$4 @ 0x180329D9D (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$4.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$6 @ 0x180329DA9 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$6.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$8 @ 0x180329DB5 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$8.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$10 @ 0x180329DC1 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$10.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$12 @ 0x180329DCD (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$12.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$14 @ 0x180329DD9 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$14.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$16 @ 0x180329DE5 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$16.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$18 @ 0x180329DF1 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$18.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$20 @ 0x180329DFD (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$20.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$22 @ 0x180329E09 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$22.c)
 * Callees:
 *     <none>
 */

void __fastcall std::tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>::~tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>(
        HSTRING *a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 1);
}

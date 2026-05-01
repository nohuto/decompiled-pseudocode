/*
 * XREFs of ??1?$tuple@Uhstring@winrt@@$$CBW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@std@@QEAA@XZ @ 0x180347460
 * Callers:
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$2 @ 0x18034AE81 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$2.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$4 @ 0x18034AE8D (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$4.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$6 @ 0x18034AE99 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$6.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$8 @ 0x18034AEA5 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$8.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$10 @ 0x18034AEB1 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$10.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$12 @ 0x18034AEBD (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$12.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$14 @ 0x18034AEC9 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$14.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$16 @ 0x18034AED5 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$16.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$18 @ 0x18034AEE1 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$18.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$20 @ 0x18034AEED (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$20.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$22 @ 0x18034AEF9 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$22.c)
 * Callees:
 *     <none>
 */

void __fastcall std::tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>::~tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>(
        HSTRING *a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 1);
}

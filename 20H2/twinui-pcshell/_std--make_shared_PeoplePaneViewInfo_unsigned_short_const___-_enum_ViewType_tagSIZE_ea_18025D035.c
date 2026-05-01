/*
 * XREFs of _std::make_shared_PeoplePaneViewInfo_unsigned_short_const___&_enum_ViewType_tagSIZE_const_&__::_1_::dtor$2 @ 0x18025D035
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::make_shared_PeoplePaneViewInfo_unsigned_short_const_____enum_ViewType_tagSIZE_const____::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 88),
    (struct IServiceProvider *)a2,
    a3);
}

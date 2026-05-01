/*
 * XREFs of ??1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180461D84
 * Callers:
 *     _winrt::details::module_count_wrapper_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::module_count_wrapper_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent__::_1_::dtor$0 @ 0x180461995 (_winrt--details--module_count_wrapper_winrt--Windows--Internal--Shell--DragDropSimu_ea_180461995.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::~DragDropSimulatorComponent(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 12);
  winrt::immersive_shell_component::~immersive_shell_component(this);
}

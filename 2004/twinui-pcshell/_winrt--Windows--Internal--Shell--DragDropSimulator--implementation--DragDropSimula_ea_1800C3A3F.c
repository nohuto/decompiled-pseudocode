/*
 * XREFs of _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2_::_1_::dtor$5 @ 0x1800C3A3F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__ResumeCoro_2_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 2416) = *(_QWORD *)(a2 + 2464) + 440LL;
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(*(__int64 **)(a2 + 2416));
}

/*
 * XREFs of ??$tie@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@YA?AV?$tuple@AEAV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@AEAPEAUHWND__@@@0@AEAV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@3@AEAPEAUHWND__@@@Z @ 0x1804617A4
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800C3150 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C3150.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::tie<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,HWND__ *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *result; // rax

  *a1 = a4;
  result = a1;
  a1[1] = a3;
  a1[2] = a2;
  return result;
}

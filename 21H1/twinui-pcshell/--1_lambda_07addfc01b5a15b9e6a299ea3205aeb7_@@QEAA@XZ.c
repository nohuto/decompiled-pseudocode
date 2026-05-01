/*
 * XREFs of ??1_lambda_07addfc01b5a15b9e6a299ea3205aeb7_@@QEAA@XZ @ 0x18043E49C
 * Callers:
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnWin32EndPoint_::_1_::dtor$0 @ 0x18043F30F (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_18043F30F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::~_lambda_07addfc01b5a15b9e6a299ea3205aeb7_(
        _lambda_07addfc01b5a15b9e6a299ea3205aeb7_ *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this);
}

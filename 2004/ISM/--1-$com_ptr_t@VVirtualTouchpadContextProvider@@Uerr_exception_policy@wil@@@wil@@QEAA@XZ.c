/*
 * XREFs of ??1?$com_ptr_t@VVirtualTouchpadContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18003B4BC
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180043670 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     _VirtualTouchpadContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180051970 (_VirtualTouchpadContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     _DisplayOcclusionContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180051980 (_DisplayOcclusionContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance_.c)
 *     _VirtualTouchpadControllerProxy::OnIsActiveChanged_::_1_::dtor$0 @ 0x1800F0637 (_VirtualTouchpadControllerProxy--OnIsActiveChanged_--_1_--dtor$0.c)
 *     _VirtualTouchpadControllerProxy::OnTouchpadRectChanged_::_1_::dtor$0 @ 0x1800F07A4 (_VirtualTouchpadControllerProxy--OnTouchpadRectChanged_--_1_--dtor$0.c)
 *     _KeyboardDockServer::OnKeyboardDockInput_::_1_::dtor$1 @ 0x180126DDE (_KeyboardDockServer--OnKeyboardDockInput_--_1_--dtor$1.c)
 *     _KeyboardDockServer::OnKeyboardDockInput_::_1_::dtor$2 @ 0x180126DEA (_KeyboardDockServer--OnKeyboardDockInput_--_1_--dtor$2.c)
 *     _KeyboardDockServer::OnKeyboardDockInput_::_1_::dtor$3 @ 0x180126DF6 (_KeyboardDockServer--OnKeyboardDockInput_--_1_--dtor$3.c)
 *     _VirtualTouchpadContextProvider::Create_::_1_::dtor$0 @ 0x1801458A4 (_VirtualTouchpadContextProvider--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037590 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<VirtualTouchpadContextProvider,wil::err_exception_policy>::~com_ptr_t<VirtualTouchpadContextProvider,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return RefCountedObject::Release((RefCountedObject *)(v1 + 8));
  return result;
}

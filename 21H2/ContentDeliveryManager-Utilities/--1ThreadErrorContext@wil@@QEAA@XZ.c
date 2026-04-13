/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x180006DAC
 * Callers:
 *     _CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger_::_1_::dtor$1 @ 0x1800D11A7 (_CreativeFramework--CommonHelper--RegisterBackgroundTaskWithWnfTrigger_--_1_--dtor$1.c)
 *     _ContentManagement::AppManager::StartProductInstall_::_1_::dtor$0 @ 0x1800D465C (_ContentManagement--AppManager--StartProductInstall_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}

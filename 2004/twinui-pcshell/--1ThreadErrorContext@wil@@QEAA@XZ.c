/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x180094D00
 * Callers:
 *     _CDesktopPositioner::_GetRestorePosition_::_1_::dtor$6 @ 0x180102996 (_CDesktopPositioner--_GetRestorePosition_--_1_--dtor$6.c)
 *     _TaskFlowImmersiveShellBroker::ReinitializeObjects_::_1_::dtor$3 @ 0x180234F38 (_TaskFlowImmersiveShellBroker--ReinitializeObjects_--_1_--dtor$3.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Start_::_1_::dtor$1 @ 0x18023A185 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--Start_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}

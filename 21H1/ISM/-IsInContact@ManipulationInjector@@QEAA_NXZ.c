/*
 * XREFs of ?IsInContact@ManipulationInjector@@QEAA_NXZ @ 0x18006BCB4
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007B2E4 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     <none>
 */

bool __fastcall ManipulationInjector::IsInContact(ManipulationInjector *this)
{
  return (*((_DWORD *)this + 22) & 0xFFFFFF7F) != 0;
}

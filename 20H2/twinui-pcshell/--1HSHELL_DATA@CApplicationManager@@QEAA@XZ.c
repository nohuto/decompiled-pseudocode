/*
 * XREFs of ??1HSHELL_DATA@CApplicationManager@@QEAA@XZ @ 0x180147924
 * Callers:
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$1 @ 0x1801032F0 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::HSHELL_DATA::~HSHELL_DATA(LPVOID *this)
{
  CoTaskMemFree(this[4]);
}

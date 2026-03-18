/*
 * XREFs of ??1CDisplayManager@@QEAA@XZ @ 0x1800E21E0
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DisplayManager__ @ 0x1800F3EF0 (_dynamic_atexit_destructor_for__g_DisplayManager__.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDisplayManager::~CDisplayManager(CDisplayManager *this)
{
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&qword_180349558);
  DeleteCriticalSection(&g_DisplayManager);
}

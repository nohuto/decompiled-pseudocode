/*
 * XREFs of wistd::__function::__func__lambda_fa4b3ee05bc46f8629bf882075405124__void___cdecl(int_const_&)_::operator() @ 0x180052820
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18002A6AC (-UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 */

void __fastcall wistd::__function::__func__lambda_fa4b3ee05bc46f8629bf882075405124__void___cdecl_int_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rbx
  char v3; // di
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *a2 != 0;
  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *(_BYTE *)(v2 + 601) != v3 )
  {
    *(_BYTE *)(v2 + 601) = v3;
    CWindowList::UpdateAccentState(v2, 0LL, 5u);
    CWindowList::UpdateAccentState(v2, 0LL, 4u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
}

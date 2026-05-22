/*
 * XREFs of ??_GMPCCursorManager@@QEAAPEAXI@Z @ 0x1800754C0
 * Callers:
 *     ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x1800751EC (--1-$unique_ptr@VMPCCursorManager@@U-$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x180075BB0 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x180078B30 (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180067DE0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x18007C580 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 */

// Hidden C++ exception states: #wind=1
MPCCursorManager *__fastcall MPCCursorManager::`scalar deleting destructor'(MPCCursorManager *this)
{
  const char *v2; // r9
  HMODULE v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 66) )
  {
    if ( !(unsigned int)NtMITDisableMouseIntercept() )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x41,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
        v2);
    *((_BYTE *)this + 66) = 0;
    MPCCursorManager::UpdateCursorVisibility(this, 1, 1, 1);
  }
  v3 = (HMODULE)*((_QWORD *)this + 5);
  if ( v3 )
    FreeLibrary(v3);
  operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}

/*
 * XREFs of ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x180075B10
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800770E0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028070 (-IsEdition@@YA_N_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800400D0 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??_GMPCCursorManager@@QEAAPEAXI@Z @ 0x180075420 (--_GMPCCursorManager@@QEAAPEAXI@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800791E8 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x18007BE90 (--0MPCCursorManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::Initialize3DComponents(MPCHolographicInputManager *this)
{
  MPCCursorManager *v2; // rax
  const char *v3; // r9
  MPCCursorManager *v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  MPCCursorManager **v9; // rsi
  MPCCursorManager **v10; // rbp
  MPCCursorManager *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  MPCCursorManager *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 2364) )
  {
    v13 = (MPCCursorManager *)operator new(0x48uLL);
    v2 = MPCCursorManager::MPCCursorManager(v13);
    v4 = (MPCCursorManager *)*((_QWORD *)this + 298);
    *((_QWORD *)this + 298) = v2;
    if ( v4 )
    {
      MPCCursorManager::`scalar deleting destructor'(v4);
      v2 = (MPCCursorManager *)*((_QWORD *)this + 298);
    }
    if ( !v2 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x60,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v3);
      __debugbreak();
    }
    if ( IsEdition(10LL) )
    {
      LODWORD(v13) = 0;
      v5 = RtlQueryWnfStateData(
             &v13,
             WNF_HOLO_USER_DISPLAY_CONTEXT,
             MPCHolographicInputManager::DisplayContextChangeCallback,
             this,
             0LL);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x6C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v5);
        __debugbreak();
      }
      v6 = RtlSubscribeWnfStateChangeNotification(
             (char *)this + 2608,
             WNF_HOLO_USER_DISPLAY_CONTEXT,
             (unsigned int)v13,
             MPCHolographicInputManager::DisplayContextChangeCallback,
             this,
             0LL,
             0,
             1);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x77,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v6);
        __debugbreak();
      }
      LODWORD(v13) = 0;
      v7 = RtlQueryWnfStateData(
             &v13,
             WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
             MPCHolographicInputManager::Input3DSwitchDisableCallback,
             this,
             0LL);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x80,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v7);
        __debugbreak();
      }
      v8 = RtlSubscribeWnfStateChangeNotification(
             (char *)this + 2616,
             WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
             (unsigned int)v13,
             MPCHolographicInputManager::Input3DSwitchDisableCallback,
             this,
             0LL,
             0,
             1);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x8B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
    }
    v9 = (MPCCursorManager **)*((_QWORD *)this + 289);
    v10 = (MPCCursorManager **)*((_QWORD *)this + 290);
    while ( v9 != v10 )
    {
      v13 = *v9;
      v11 = v13;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v13);
      (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v11 + 288LL))(v11);
      (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v11 + 16LL))(v11);
      ++v9;
    }
    *((_BYTE *)this + 2364) = 1;
  }
}

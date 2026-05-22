/*
 * XREFs of ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800771DC
 * Callers:
 *     ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x18010408C (-SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInputDeviceInfoStore@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputDeviceInfoStore@@@WRL@Microsoft@@@Details@12@@Z @ 0x180074844 (--$As@UIInputDeviceInfoStore@@@-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800789C0 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::OnKeyboardKeyPress(MPCHolographicInputManager *this, unsigned int a2)
{
  int v4; // eax
  LARGE_INTEGER v5; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 2364) )
  {
    v7 = 0LL;
    v4 = Microsoft::WRL::ComPtr<ISystemInputRouter>::As<IInputDeviceInfoStore>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 286,
           &v7);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1541LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 24LL))(v7, a2, &v9) >= 0
      && !*(_BYTE *)(v9 + 12) )
    {
      QueryPerformanceCounter(&PerformanceCount);
      MPCHandProcessor::m_lastKeyboardKeyPressTimeInTicks = PerformanceCount.QuadPart;
      if ( (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)this + 322) + 48LL))(**((_QWORD **)this + 322)) == 512 )
      {
        PerformanceCount = *(LARGE_INTEGER *)((char *)this + 2344);
        v5 = PerformanceCount;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&PerformanceCount);
        MPCHolographicInputManager::TrySetProviderAsPrimary(this);
        if ( v5.QuadPart )
          (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)v5.QuadPart + 16LL))(v5);
      }
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v7);
  }
}

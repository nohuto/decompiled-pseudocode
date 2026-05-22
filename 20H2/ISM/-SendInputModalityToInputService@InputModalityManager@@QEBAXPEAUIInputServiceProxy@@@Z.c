/*
 * XREFs of ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x180103FFC
 * Callers:
 *     ?SetLastUserInputModality@NonBamoInputDeliveryServer@@UEAAXW4InputType@@HH@Z @ 0x180103550 (-SetLastUserInputModality@NonBamoInputDeliveryServer@@UEAAXW4InputType@@HH@Z.c)
 *     ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180181910 (-OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z.c)
 *     ?s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180181BE0 (-s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011CD0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18003D12C (IsGetMPCInputPostProcessorPresent.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x18007713C (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 */

void __fastcall InputModalityManager::SendInputModalityToInputService(
        InputModalityManager *this,
        struct IInputServiceProxy *a2)
{
  unsigned int v4; // esi
  MPCHolographicInputManager *Instance; // rax
  __int64 v6; // rax
  __int64 v7; // xmm0_8
  int v8; // eax
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)this == 4 )
  {
    v4 = *((_DWORD *)this + 3);
    if ( IsGetMPCInputPostProcessorPresent() )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      MPCHolographicInputManager::OnKeyboardKeyPress(Instance, v4);
    }
  }
  if ( a2 )
  {
    v6 = *(_QWORD *)a2;
    v7 = *(_QWORD *)this;
    v10 = *((_DWORD *)this + 2);
    *(_QWORD *)v9 = v7;
    v8 = (*(__int64 (__fastcall **)(struct IInputServiceProxy *, int *))(v6 + 32))(a2, v9);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        47LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputmodalitymanager.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
  }
}

/*
 * XREFs of ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18006CD70 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x18006CFA0 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180077ACC (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800839A0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180084EE8 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180085470 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x1800899E4 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?Copy@GameControllerInputInfo@@QEBAPEAU1@XZ @ 0x1800C449C (-Copy@GameControllerInputInfo@@QEBAPEAU1@XZ.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x18019218C (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x180192464 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193B80 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x180193EA8 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGamepadProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  struct InputInfo *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  struct GameControllerInputInfo *v8; // rax
  void *v9; // rcx
  MPCGamepadInputHelper *Instance; // rax
  char ShouldHandleMPCInput; // al
  char v12; // si
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  MPCHolographicInputManager *v19; // rbx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  struct IMPCTarget *v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v24[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  int v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  int v28; // [rsp+80h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+858h] [rbp+758h]

  v2 = a2;
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 656) != 1 )
      return MPCGamepadProcessor::Process2DInput((MPCGamepadProcessor *)this, v2);
    v8 = GameControllerInputInfo::Copy(v2, v4, v5, v6);
    v9 = *(void **)(this + 4624);
    *(_QWORD *)(this + 4624) = v8;
    if ( v9 )
    {
      operator delete(v9, (const struct std::nothrow_t *)0x58);
      v8 = *(struct GameControllerInputInfo **)(this + 4624);
    }
    *(_OWORD *)(this + 4636) = *((_OWORD *)v8 + 3);
    *(_QWORD *)(this + 4652) = *((_QWORD *)v8 + 8);
    *(_DWORD *)(this + 4660) = *((_DWORD *)v8 + 18);
    Instance = MPCGamepadInputHelper::GetInstance((__int64)v9);
    ShouldHandleMPCInput = MPCGamepadInputHelper::ShouldHandleMPCInput(Instance);
    v12 = ShouldHandleMPCInput;
    if ( *(_BYTE *)(this + 5029) && !ShouldHandleMPCInput )
      MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)(this - 32), v2, *((_QWORD *)v2 + 4));
    *(_BYTE *)(this + 5029) = v12;
    MPCButtonHoldHelper::UpdateState(
      *(MPCButtonHoldHelper **)(this + 5120),
      *(_BYTE *)(this + 4636) & 1,
      *((_QWORD *)v2 + 2));
    if ( v12 )
    {
      memset_0(v24, 0, 0x7F0uLL);
      v26 = 2032;
      v13 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 0, 0, *((_DWORD *)v2 + 1), (__int64)v24);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x98,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
          (const char *)(unsigned int)v13);
        return v14;
      }
      v24[2] = *((_DWORD *)v2 + 2);
      v25 = *((_QWORD *)v2 + 2);
      v26 = 2032;
      v27 = *((_QWORD *)v2 + 4);
      if ( (*(_BYTE *)(this + 4636) & 4) != 0 )
      {
        v15 = v28;
        if ( (*(_DWORD *)(this + 4632) & 4) == 0 )
          v15 = 2;
        v28 = v15;
      }
      if ( !MPCInputProviderBase::IsPrimary(this) )
      {
        if ( MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)(this - 32), v16, v17, v18) )
          MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
      }
      v23[0] = 0LL;
      v19 = MPCHolographicInputManager::GetInstance();
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v23);
      v20 = MPCHolographicInputManager::Process3DInput(
              v19,
              (struct InputInfo *)v24,
              (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
              v23);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
          (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v23);
        return v21;
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v23);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 4608) + 48LL))(
        *(_QWORD *)(this + 4608),
        *(_QWORD *)(this + 4624));
    }
    *(_DWORD *)(this + 4632) = *(_DWORD *)(this + 4636);
  }
  else
  {
    if ( *(char *)a2 >= 0 )
    {
      if ( (*(_BYTE *)a2 & 4) == 0 )
        return 0LL;
      MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32), a2);
      if ( *((_WORD *)v2 + 18) == 7 )
        return 0LL;
      v22 = *(_QWORD *)(this + 4608);
      a2 = v2;
    }
    else
    {
      v22 = *(_QWORD *)(this + 4608);
    }
    (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v22 + 48LL))(v22, a2);
  }
  return 0LL;
}

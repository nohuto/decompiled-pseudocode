/*
 * XREFs of ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x180193968
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801936A0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011CD0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EF4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800298C0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x18003F66C (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x18007648C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ?MPCGamepadProcessor_KeyboardInputEvent_@ISMTracing@@QEAAXKK@Z @ 0x180192470 (-MPCGamepadProcessor_KeyboardInputEvent_@ISMTracing@@QEAAXKK@Z.c)
 */

void __fastcall MPCGamepadProcessor::ProcessInteractionMode(MPCGamepadProcessor *this, struct KeyboardInputInfo *a2)
{
  MPCHolographicInputManager *Instance; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8; // rcx
  ISMTracing *v9; // rcx

  if ( *((_BYTE *)this + 5069)
    || (Instance = MPCHolographicInputManager::GetInstance(),
        (unsigned __int8)MPCHolographicInputManager::IsExclusiveAppFocused(Instance, v5, v6, v7)) )
  {
    if ( ISMTracing::IsEnabled((__int64)this) )
    {
      wil::details::static_lazy<ISMTracing>::get(v8, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCGamepadProcessor_KeyboardInputEvent_(
        v9,
        *((unsigned __int16 *)a2 + 18),
        *((unsigned __int16 *)a2 + 35));
    }
    if ( *((_WORD *)a2 + 18) == 7 && (*((_BYTE *)a2 + 70) & 1) != 0 && !*((_BYTE *)this + 385) )
      MPCManager::SendHomeGesture(
        MPCManager::s_instance,
        **((_DWORD **)this + 7),
        *(_DWORD *)(*((_QWORD *)this + 7) + 4LL),
        *((_QWORD *)a2 + 2),
        0,
        2u);
  }
}

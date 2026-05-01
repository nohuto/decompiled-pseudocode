/*
 * XREFs of _wil::MakeOrThrow_ViewGroupManager_ITitleBarController___&_ITabViewManager___&__::_1_::dtor$0 @ 0x1802696BA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCControlCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18018F9C8 (--1-$ComPtr@VCControlCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_ViewGroupManager_ITitleBarController_____ITabViewManager______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CControlCenterExperienceManager>::~ComPtr<CControlCenterExperienceManager>(*(__int64 **)(a2 + 64));
  }
  return result;
}

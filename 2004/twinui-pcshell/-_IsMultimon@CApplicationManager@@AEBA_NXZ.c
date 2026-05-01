/*
 * XREFs of ?_IsMultimon@CApplicationManager@@AEBA_NXZ @ 0x180086F64
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180040280 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x180082CFC (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CApplicationManager::_IsMultimon(CApplicationManager *this)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 70) + 32LL))(*((_QWORD *)this + 70), &v2);
  return v2 > 1;
}

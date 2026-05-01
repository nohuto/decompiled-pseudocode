/*
 * XREFs of ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x180136C98
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x1800803F0 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x1801239AC (_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_--operator().c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x180130484 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?SwitchToLastActiveApp@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18013ADC0 (-SwitchToLastActiveApp@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x1800804F8 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 */

__int64 __fastcall CApplicationManagerUtility::SetForegroundWindow(CApplicationManagerUtility *this, HWND a2)
{
  CApplicationManagerUtility *LastActiveVisiblePopupOrSelf; // rax

  LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(this, a2);
  return !SetForegroundWindow((HWND)LastActiveVisiblePopupOrSelf) ? 0x80070005 : 0;
}

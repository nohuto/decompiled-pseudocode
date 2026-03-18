/*
 * XREFs of ?OnTimerNotification@InteractiveControlDevice@@QAEJXZ @ 0x1B22CF
 * Callers:
 *     _lambda_46e7683cae22722f297e69793ac65061_::_lambda_invoker_stdcall_ @ 0x1B167F (_lambda_46e7683cae22722f297e69793ac65061_--_lambda_invoker_stdcall_.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?FlushBufferedInput@InteractiveControlDevice@@QAEXI@Z @ 0x1B1E80 (-FlushBufferedInput@InteractiveControlDevice@@QAEXI@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1B269C (-SendHapticFeedbackOutput@InteractiveControlDevice@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

int __thiscall InteractiveControlDevice::OnTimerNotification(InteractiveControlDevice *this)
{
  _WORD v3[2]; // [esp+Ch] [ebp-14h] BYREF
  int v4; // [esp+10h] [ebp-10h]
  int v5; // [esp+14h] [ebp-Ch]
  int v6; // [esp+18h] [ebp-8h]

  if ( !*((_DWORD *)this + 46) )
    *((_DWORD *)this + 74) = 1;
  *((_DWORD *)this + 75) = 1;
  *((_DWORD *)this + 70) = 0;
  InteractiveControlDevice::FlushBufferedInput(this, 0x80u);
  v4 = 0;
  v3[1] = 0;
  v3[0] = *((_WORD *)this + 154);
  v5 = 1;
  v6 = 0;
  InteractiveControlDevice::SendHapticFeedbackOutput(this, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v3);
  return 0;
}

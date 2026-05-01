/*
 * XREFs of _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x180148078
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___::operator() @ 0x180148340 (CDelayIAMOperations--CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___--operator().c)
 *     ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x180151550 (-SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?CanChangeForeground@@YAJXZ @ 0x18004DA0C (-CanChangeForeground@@YAJXZ.c)
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x18015B228 (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 */

__int64 __fastcall lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator()(CApplicationManagerUtility **a1)
{
  __int64 result; // rax
  HWND v3; // rdx

  result = CanChangeForeground();
  if ( (int)result >= 0 )
    return CApplicationManagerUtility::SetForegroundWindow(*a1, v3);
  return result;
}

/*
 * XREFs of Microsoft::WRL::ComPtr_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____::_ComPtr_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____ @ 0x18040CE74
 * Callers:
 *     _CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc_::_1_::dtor$0 @ 0x1804121B0 (_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--s_TimerWndProc_--_1_-.c)
 *     _CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___::s_TimerWndProc_::_1_::dtor$0 @ 0x1804122D0 (_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2___--s_TimerWndProc_--_1_-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____::_ComPtr_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}

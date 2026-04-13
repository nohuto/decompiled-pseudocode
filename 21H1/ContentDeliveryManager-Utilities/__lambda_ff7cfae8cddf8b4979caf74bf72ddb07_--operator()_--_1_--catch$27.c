/*
 * XREFs of __lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator()_::_1_::catch$27 @ 0x1800CF294
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180047D8C (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator()_::_1_::catch_27(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+18h] [rbp-30h]

  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 712),
    (void *)0x93,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    "Failed to handle an Activity Toast Notification",
    v3);
  return &loc_18004A7F5;
}

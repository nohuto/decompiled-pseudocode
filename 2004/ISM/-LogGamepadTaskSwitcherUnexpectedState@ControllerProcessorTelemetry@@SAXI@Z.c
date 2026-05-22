/*
 * XREFs of ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x180124948
 * Callers:
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x1801242F0 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x180124BD0 (-get@-$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelem.c)
 */

void __fastcall ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // r10
  int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v1 = a1;
  v2 = wil::details::static_lazy<ControllerProcessorTelemetry>::get(
         a1,
         _lambda_eeadc07ead9c453f2bc1ae732b24d90f_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v2 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v2 + 8), 0x400000000000LL) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = v1;
    v7 = 4;
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1801CE145, 0LL, 0LL, 3u, &v5);
  }
}

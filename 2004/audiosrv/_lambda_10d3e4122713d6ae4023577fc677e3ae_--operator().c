/*
 * XREFs of _lambda_10d3e4122713d6ae4023577fc677e3ae_::operator() @ 0x180111BDC
 * Callers:
 *     wil::details::lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___::_lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___ @ 0x180111B50 (wil--details--lambda_call__lambda_10d3e4122713d6ae4023577fc677e3ae___--_lambda_call__lambda_10d3.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x180111E2C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_10d3e4122713d6ae4023577fc677e3ae_::operator()(_QWORD **a1)
{
  char v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD, char *, char *))(*(_QWORD *)**a1 + 80LL))(**a1, *a1[1], &v4, &v3);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)**a1 + 96LL))(**a1, *a1[1], a1[2]);
}

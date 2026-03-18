/*
 * XREFs of _lambda_037b13f66b36a5642f7113becdf3aece_::operator() @ 0x1C0158F18
 * Callers:
 *     _lambda_037b13f66b36a5642f7113becdf3aece_::_lambda_invoker_cdecl_ @ 0x1C0158F00 (_lambda_037b13f66b36a5642f7113becdf3aece_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxClientEnableMMCSS @ 0x1C00C72BC (xxxClientEnableMMCSS.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D5148 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall lambda_037b13f66b36a5642f7113becdf3aece_::operator()(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) != gTermIO[2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(gTermIO[0], v1);
  if ( (unsigned int)dword_1C0330B30 > 4 && (qword_1C0330B40 & 2) != 0 && (qword_1C0330B48 & 2) == qword_1C0330B48 )
  {
    v3 = (__int64)"EnableMMCSS";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1C0330B30,
      (__int64)&v3);
  }
  return xxxClientEnableMMCSS((*gpsi >> 12) & 1);
}

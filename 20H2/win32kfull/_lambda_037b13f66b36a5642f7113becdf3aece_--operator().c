/*
 * XREFs of _lambda_037b13f66b36a5642f7113becdf3aece_::operator() @ 0x1C015BEC8
 * Callers:
 *     _lambda_037b13f66b36a5642f7113becdf3aece_::_lambda_invoker_cdecl_ @ 0x1C015BEB0 (_lambda_037b13f66b36a5642f7113becdf3aece_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     xxxClientEnableMMCSS @ 0x1C000AA0C (xxxClientEnableMMCSS.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D4488 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall lambda_037b13f66b36a5642f7113becdf3aece_::operator()(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) != gTermIO[2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(gTermIO[0], v1, v2, v3);
  if ( (unsigned int)dword_1C032FB30 > 4 && (qword_1C032FB40 & 2) != 0 && (qword_1C032FB48 & 2) == qword_1C032FB48 )
  {
    v5 = (__int64)"EnableMMCSS";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1C032FB30,
      (__int64)&v5);
  }
  return xxxClientEnableMMCSS((*gpsi >> 12) & 1);
}

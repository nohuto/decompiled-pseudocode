/*
 * XREFs of _lambda_3ef8aac84d3e2e990d213b9149cc4885_::operator() @ 0xF1856
 * Callers:
 *     _lambda_3ef8aac84d3e2e990d213b9149cc4885_::_lambda_invoker_stdcall_ @ 0xF1850 (_lambda_3ef8aac84d3e2e990d213b9149cc4885_--_lambda_invoker_stdcall_.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     _xxxClientEnableMMCSS@4 @ 0xC3818 (_xxxClientEnableMMCSS@4.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int lambda_3ef8aac84d3e2e990d213b9149cc4885_::operator()()
{
  PKTHREAD CurrentThread; // eax
  int v2; // [esp+4h] [ebp-4h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( W32GetThreadWin32Thread(CurrentThread) != _gTermIO[2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 2LL) )
  {
    v2 = (int)"EnableMMCSS";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_2689E8,
      (int)&unk_2552FA,
      0,
      0,
      (int)&v2);
  }
  return xxxClientEnableMMCSS((void *)((*_gpsi >> 12) & 1));
}

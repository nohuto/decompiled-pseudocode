/*
 * XREFs of ?RedirectForCapture@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@PAUHWND__@@@Z @ 0x14D915
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x14BA4D (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlg.c)
 */

void __fastcall InputTraceLogging::Mouse::RedirectForCapture(int *a1, int a2)
{
  int v4; // ecx
  int v5; // [esp+Ch] [ebp-14h] BYREF
  int v6; // [esp+10h] [ebp-10h] BYREF
  int v7; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v8[2]; // [esp+18h] [ebp-8h] BYREF

  if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 64LL) )
  {
    v8[0] = a1[24];
    v8[1] = a1[25];
    v6 = a1[3];
    v7 = (int)v8;
    v5 = a2;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      byte_2546FF,
      v4,
      v4,
      &v7,
      (int)&v6,
      (int)&v5);
  }
}

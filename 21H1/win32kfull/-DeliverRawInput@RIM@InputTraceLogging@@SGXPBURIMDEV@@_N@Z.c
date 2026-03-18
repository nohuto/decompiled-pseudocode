/*
 * XREFs of ?DeliverRawInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@_N@Z @ 0x143AF1
 * Callers:
 *     ?PostHidInput@@YGHPAUDEVICEINFO@@PAUtagQ@@PAUtagWND@@I@Z @ 0x143C5D (-PostHidInput@@YGHPAUDEVICEINFO@@PAUtagQ@@PAUtagWND@@I@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@3@Z @ 0x140661 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::RIM::DeliverRawInput(int a1, unsigned __int8 a2)
{
  int v4; // ecx
  int v5; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h] BYREF

  if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 256LL) )
  {
    v6 = a2;
    v5 = a1;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      byte_253FB3,
      v4,
      v4,
      (int)&v5,
      (int)&v6);
  }
}

/*
 * XREFs of ?TraceLoggingSPISetModernDPIOverrideEvent@@YGXHH@Z @ 0x186E0E
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x14BA4D (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlg.c)
 */

void __fastcall TraceLoggingSPISetModernDPIOverrideEvent(int a1, int a2)
{
  int v3; // ecx
  int v4; // [esp+Ch] [ebp-14h] BYREF
  int v5; // [esp+10h] [ebp-10h] BYREF
  int v6; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v7[2]; // [esp+18h] [ebp-8h] BYREF

  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000000LL) )
  {
    v7[1] = 0;
    v6 = (int)v7;
    v7[0] = 0x1000000;
    v4 = a2;
    v5 = 0xFFFF;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_266280,
      byte_25661B,
      v3,
      v3,
      &v6,
      (int)&v5,
      (int)&v4);
  }
}

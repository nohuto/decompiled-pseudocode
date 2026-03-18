/*
 * XREFs of ?TraceLoggingPTPKeyToAATimeDeltas@@YGX_J000W4tagPTP_ACTION@@1@Z @ 0x186B06
 * Callers:
 *     _TraceLoggingPTPAAPKeyPress@4 @ 0x187303 (_TraceLoggingPTPAAPKeyPress@4.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@44444@Z @ 0x1860F7 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall TraceLoggingPTPKeyToAATimeDeltas(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v12; // ecx
  _DWORD v13[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD *v14; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h] BYREF
  int v16; // [esp+1Ch] [ebp-4h] BYREF

  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000000LL) )
  {
    a10 = a9;
    a8 = a7;
    a6 = a5;
    a4 = a3;
    v14 = v13;
    v13[1] = 0;
    v13[0] = 0x1000000;
    v16 = a2;
    v15 = a1;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      byte_2561E5,
      v12,
      v12,
      (int *)&v14,
      (int)&a4,
      (int)&a6,
      (int)&a8,
      (int)&a10,
      (int)&v15,
      (int)&v16);
  }
}

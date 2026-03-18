/*
 * XREFs of ?RetrieveMessage@Pointer@InputTraceLogging@@SGXPBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x14DA70
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?DiscardPointerMessage@@YG?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PAUtagTHREADINFO@@PAUtagQMSG@@PAUtagWND@@PAUtagMSG@@@Z @ 0x15ACBC (-DiscardPointerMessage@@YG-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PAUtagTHREADINFO@@PAUtagQMSG@@PAU.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$01@@3ABU?$_tlgWrapperByVal@$03@@5ABU?$_tlgWrapSz@D@@5@Z @ 0x14B970 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@_ea_14B970.c)
 *     ?InputMessageRetrieveToString@InputTraceLogging@@CGPBDW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x14D347 (-InputMessageRetrieveToString@InputTraceLogging@@CGPBDW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::RetrieveMessage(int a1, unsigned __int8 a2, char *a3)
{
  int v5; // ecx
  _WORD v6[3]; // [esp+Eh] [ebp-2Ah] BYREF
  int v7; // [esp+14h] [ebp-24h] BYREF
  int v8; // [esp+18h] [ebp-20h] BYREF
  int v9; // [esp+1Ch] [ebp-1Ch] BYREF
  int v10; // [esp+20h] [ebp-18h] BYREF
  int v11; // [esp+24h] [ebp-14h] BYREF
  __int64 v12; // [esp+28h] [ebp-10h] BYREF
  _DWORD v13[2]; // [esp+30h] [ebp-8h] BYREF

  if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 32LL) )
  {
    v12 = *(int *)(a1 + 20);
    v13[0] = *(_DWORD *)(a1 + 96);
    v13[1] = *(_DWORD *)(a1 + 100);
    *(_DWORD *)&v6[1] = a2;
    v7 = (int)InputTraceLogging::InputMessageRetrieveToString(a3);
    v8 = *(_DWORD *)(a1 + 12);
    v9 = *(unsigned __int16 *)(a1 + 18);
    v10 = (int)&v12;
    v6[0] = *(_WORD *)(a1 + 16);
    v11 = (int)v13;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      byte_254684,
      v5,
      v5,
      &v11,
      (int)v6,
      &v10,
      (int)&v9,
      (int)&v8,
      (const char **)&v7,
      (int)&v6[1]);
  }
}

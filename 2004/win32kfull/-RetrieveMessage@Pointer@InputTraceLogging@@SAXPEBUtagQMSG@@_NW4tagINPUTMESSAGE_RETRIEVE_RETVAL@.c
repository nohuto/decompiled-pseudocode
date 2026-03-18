/*
 * XREFs of ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01E16B4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F14F4 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C01DFF40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$_ea_1C01DFF40.c)
 */

void __fastcall InputTraceLogging::Pointer::RetrieveMessage(__int64 a1, unsigned __int8 a2, int a3)
{
  __int64 v3; // r9
  int v4; // r10d
  __int16 v5; // r11
  __int64 v6; // rbx
  __int64 v7; // r8
  const char *v8; // rax
  int v9; // [rsp+60h] [rbp+27h] BYREF
  int v10; // [rsp+64h] [rbp+2Bh] BYREF
  __int64 v11; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+70h] [rbp+37h] BYREF
  __int64 v13; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v14; // [rsp+80h] [rbp+47h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C0330B30 > 4 && (qword_1C0330B40 & 0x20) != 0 && (qword_1C0330B48 & 0x20) == qword_1C0330B48 )
  {
    v3 = *(unsigned int *)(a1 + 24);
    v4 = *(unsigned __int16 *)(a1 + 34);
    v5 = *(_WORD *)(a1 + 32);
    v6 = *(_QWORD *)(a1 + 136);
    v9 = a2;
    v7 = (unsigned int)(a3 - 1);
    if ( (_DWORD)v7 )
    {
      v7 = (unsigned int)(v7 - 1);
      if ( (_DWORD)v7 )
      {
        v7 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v7 )
        {
          if ( (_DWORD)v7 == 1 )
            v8 = "ContinueScan";
          else
            v8 = "UNKNOWN";
        }
        else
        {
          v8 = "SkipMsg";
        }
      }
      else
      {
        v8 = "NoMsg";
      }
    }
    else
    {
      v8 = "ReturnMsg";
    }
    v12 = (__int64)v8;
    v13 = *(_QWORD *)(a1 + 40);
    v10 = v3;
    LODWORD(v11) = v4;
    LOWORD(v15) = v5;
    v14 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0330B30,
      byte_1C02F019C,
      v7,
      v3,
      (__int64)&v14,
      (__int64)&v15,
      (__int64)&v13,
      (__int64)&v11,
      (__int64)&v10,
      (void **)&v12,
      (__int64)&v9);
  }
}

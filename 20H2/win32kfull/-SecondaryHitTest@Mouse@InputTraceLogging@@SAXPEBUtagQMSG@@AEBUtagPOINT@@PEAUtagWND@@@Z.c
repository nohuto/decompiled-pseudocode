/*
 * XREFs of ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00D727C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00D73E8 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@4444@Z @ 0x1C01DF518 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U-.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01E00C0 (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Mouse::SecondaryHitTest(
        const struct tagQMSG *a1,
        const struct tagPOINT *a2,
        struct tagWND *a3)
{
  __int64 v6; // rbx
  __int64 WindowDetails; // rax
  __int128 v8; // xmm1
  LONG x; // ecx
  int v10; // edx
  int v11; // r8d
  LONG v12; // [rsp+90h] [rbp-80h] BYREF
  int v13; // [rsp+94h] [rbp-7Ch] BYREF
  int v14; // [rsp+98h] [rbp-78h] BYREF
  int v15; // [rsp+9Ch] [rbp-74h] BYREF
  int v16; // [rsp+A0h] [rbp-70h] BYREF
  int v17; // [rsp+A4h] [rbp-6Ch] BYREF
  int v18; // [rsp+A8h] [rbp-68h] BYREF
  int v19; // [rsp+ACh] [rbp-64h] BYREF
  __int128 v20; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-40h] BYREF
  __int128 v24; // [rsp+D8h] [rbp-38h]
  __int128 v25; // [rsp+E8h] [rbp-28h]
  __int64 v26; // [rsp+F8h] [rbp-18h]
  _BYTE v27[48]; // [rsp+100h] [rbp-10h] BYREF
  __int64 v28; // [rsp+168h] [rbp+58h] BYREF

  v6 = 0LL;
  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) )
  {
    WindowDetails = InputTraceLogging::GetWindowDetails(v27, a3);
    v8 = *(_OWORD *)(WindowDetails + 16);
    v24 = *(_OWORD *)WindowDetails;
    v26 = *(_QWORD *)(WindowDetails + 32);
    v25 = v8;
    if ( (unsigned int)dword_1C032FB30 > 4
      && (qword_1C032FB40 & 0x40) != 0
      && (qword_1C032FB48 & 0x40) == qword_1C032FB48 )
    {
      x = a2->x;
      v10 = *((_DWORD *)a1 + 21);
      v11 = *((_DWORD *)a1 + 20);
      if ( a3 )
        v6 = *(_QWORD *)a3;
      LODWORD(v28) = a2->y;
      v20 = v24;
      v15 = HIDWORD(v26);
      v16 = v26;
      v17 = HIDWORD(v25);
      v18 = DWORD2(v25);
      v21 = v25;
      v19 = *((_DWORD *)a1 + 6);
      v23 = *((_QWORD *)a1 + 17);
      v12 = x;
      v13 = v10;
      v14 = v11;
      v22 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C032FB30,
        (int)&dword_1C02EF871,
        (__int64)&v23,
        (__int64)&v19,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v20 + 8,
        (__int64)&v20,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v28);
    }
  }
}

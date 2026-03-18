/*
 * XREFs of ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C00363E4
 * Callers:
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     LockCaptureWindow @ 0x1C0036324 (LockCaptureWindow.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00B2E58 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01E0D80 (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@@Z @ 0x1C02267FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U_ea_1C02267FC.c)
 */

void __fastcall InputTraceLogging::Mouse::SetCapture(const struct tagQ *a1, struct tagWND *a2, unsigned __int8 a3)
{
  int v4; // esi
  __int64 v6; // rbx
  __int64 WindowDetails; // rax
  __int128 v8; // xmm1
  int v9; // [rsp+70h] [rbp-49h] BYREF
  int v10; // [rsp+74h] [rbp-45h] BYREF
  int v11; // [rsp+78h] [rbp-41h] BYREF
  int v12; // [rsp+7Ch] [rbp-3Dh] BYREF
  __int128 v13; // [rsp+80h] [rbp-39h] BYREF
  __int64 v14; // [rsp+90h] [rbp-29h] BYREF
  __int64 v15; // [rsp+98h] [rbp-21h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v17; // [rsp+A8h] [rbp-11h]
  __int128 v18; // [rsp+B8h] [rbp-1h]
  __int64 v19; // [rsp+C8h] [rbp+Fh]
  _BYTE v20[48]; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v21; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = a3;
  v6 = 0LL;
  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) )
  {
    WindowDetails = InputTraceLogging::GetWindowDetails(v20, a2);
    v8 = *(_OWORD *)(WindowDetails + 16);
    v17 = *(_OWORD *)WindowDetails;
    v19 = *(_QWORD *)(WindowDetails + 32);
    v18 = v8;
    if ( (unsigned int)dword_1C0330B30 > 4
      && (qword_1C0330B40 & 0x40) != 0
      && (qword_1C0330B48 & 0x40) == qword_1C0330B48 )
    {
      if ( a2 )
        v6 = *(_QWORD *)a2;
      v13 = v17;
      LODWORD(v21) = HIDWORD(v19);
      v9 = v19;
      v10 = HIDWORD(v18);
      v11 = DWORD2(v18);
      v14 = v18;
      v15 = v6;
      v12 = v4;
      v16 = (__int64)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (int)&dword_1C0330B30,
        (int)&dword_1C02F21CA,
        (__int64)&v16,
        (__int64)&v12,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v21,
        (__int64)&v13 + 8,
        (__int64)&v13);
    }
  }
}

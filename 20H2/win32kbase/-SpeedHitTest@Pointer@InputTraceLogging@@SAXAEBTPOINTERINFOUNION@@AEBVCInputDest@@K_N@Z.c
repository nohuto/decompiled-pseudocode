/*
 * XREFs of ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C0199CC0
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C019B340 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C003468C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@34AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@444465@Z @ 0x1C018453C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C0191FBC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C0196C74 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::SpeedHitTest(
        const union POINTERINFOUNION *a1,
        const struct CInputDest *a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // di
  int v6; // r14d
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 WindowDetails; // rax
  __int128 v12; // xmm1
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // [rsp+88h] [rbp-80h] BYREF
  int v18; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v19; // [rsp+90h] [rbp-78h] BYREF
  __int64 v20; // [rsp+98h] [rbp-70h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v26; // [rsp+D0h] [rbp-38h]
  __int128 v27; // [rsp+E0h] [rbp-28h]
  __int64 v28; // [rsp+F0h] [rbp-18h]
  _BYTE v29[48]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = a4;
  v6 = a3;
  if ( !InputTraceLogging::Enabled(0, (__int64)a2, a3, a4) )
    return;
  v8 = *((_DWORD *)a2 + 23);
  if ( v8 == 1 )
  {
    v9 = *((_QWORD *)a2 + 10);
LABEL_4:
    v10 = 0LL;
    goto LABEL_5;
  }
  v9 = 0LL;
  if ( v8 != 2 )
    goto LABEL_4;
  v10 = *((_QWORD *)a2 + 10);
LABEL_5:
  WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v29, v10, v9);
  v12 = *(_OWORD *)(WindowDetails + 16);
  v26 = *(_OWORD *)WindowDetails;
  v28 = *(_QWORD *)(WindowDetails + 32);
  v27 = v12;
  if ( v5 )
  {
    if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 32LL) )
    {
      CInputDest::GetWindowHandle(a2);
      v21 = v26;
      v17 = HIDWORD(v28);
      v18 = v28;
      v19 = __PAIR64__(DWORD2(v27), HIDWORD(v27));
      v22 = v27;
      v23 = (__int64)InputTraceLogging::RoutingModeToString(*((_DWORD *)a2 + 1));
      HIDWORD(v20) = *((_DWORD *)a1 + 1);
      v25 = *((_QWORD *)a1 + 10);
      LODWORD(v20) = v6;
      v24 = v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (__int64)&dword_1C0244A70,
        byte_1C0217D10,
        v14,
        v13,
        (__int64)&v25,
        (__int64)&v20 + 4,
        (__int64)&v24,
        (__int64)&v20,
        (void **)&v23,
        (const WCHAR **)&v22,
        (__int64)&v19 + 4,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (const WCHAR **)&v21 + 1,
        (void **)&v21);
    }
  }
  else if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 32LL) )
  {
    CInputDest::GetWindowHandle(a2);
    v24 = *((_QWORD *)&v26 + 1);
    v25 = v26;
    v20 = v28;
    v19 = *((_QWORD *)&v27 + 1);
    v23 = v27;
    v22 = (__int64)InputTraceLogging::RoutingModeToString(*((_DWORD *)a2 + 1));
    v17 = *((_DWORD *)a1 + 1);
    *(_QWORD *)&v21 = *((_QWORD *)a1 + 10);
    v18 = v6;
    *((_QWORD *)&v21 + 1) = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
      (__int64)&dword_1C0244A70,
      (unsigned __int8 *)dword_1C0217DD7,
      v16,
      v15,
      (__int64)&v21,
      (__int64)&v17,
      (__int64)&v21 + 8,
      (__int64)&v18,
      (void **)&v22,
      (const WCHAR **)&v23,
      (__int64)&v19,
      (__int64)&v19 + 4,
      (__int64)&v20,
      (__int64)&v20 + 4,
      (const WCHAR **)&v24,
      (void **)&v25);
  }
}

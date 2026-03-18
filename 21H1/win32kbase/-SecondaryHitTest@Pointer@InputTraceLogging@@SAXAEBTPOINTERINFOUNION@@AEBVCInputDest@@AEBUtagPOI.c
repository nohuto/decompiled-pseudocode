/*
 * XREFs of ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C019EF78
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0192974 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C006DF40 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@44@Z @ 0x1C018C958 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U-.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C019A1EC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::SecondaryHitTest(
        const union POINTERINFOUNION *a1,
        const struct CInputDest *a2,
        const struct tagPOINT *a3)
{
  __int64 v6; // rdx
  __int64 WindowDetails; // rax
  __int128 v8; // xmm1
  HWND WindowHandle; // rax
  LONG x; // ecx
  __int64 v11; // r8
  LONG v12; // [rsp+88h] [rbp-80h] BYREF
  int v13; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v14; // [rsp+90h] [rbp-78h] BYREF
  int v15; // [rsp+94h] [rbp-74h] BYREF
  int v16; // [rsp+98h] [rbp-70h] BYREF
  int v17; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int128 v18; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+C8h] [rbp-40h]
  __int128 v23; // [rsp+D8h] [rbp-30h]
  __int64 v24; // [rsp+E8h] [rbp-20h]
  _BYTE v25[40]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v26; // [rsp+140h] [rbp+38h] BYREF

  if ( InputTraceLogging::Enabled(0) )
  {
    if ( *((_DWORD *)a2 + 23) == 2 )
      v6 = *((_QWORD *)a2 + 10);
    else
      v6 = 0LL;
    WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v25, v6, 0LL);
    v8 = *(_OWORD *)(WindowDetails + 16);
    v22 = *(_OWORD *)WindowDetails;
    v24 = *(_QWORD *)(WindowDetails + 32);
    v23 = v8;
    if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 32LL) )
    {
      WindowHandle = CInputDest::GetWindowHandle(a2);
      LODWORD(v26) = a3->y;
      x = a3->x;
      v16 = DWORD2(v23);
      v19 = v23;
      v17 = *((_DWORD *)a1 + 1);
      v21 = *((_QWORD *)a1 + 10);
      v12 = x;
      v18 = v22;
      v13 = HIDWORD(v24);
      v14 = v24;
      v15 = HIDWORD(v23);
      v20 = (__int64)WindowHandle;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C024C960,
        (unsigned __int8 *)dword_1C021EA25,
        v11,
        (__int64)WindowHandle,
        (__int64)&v21,
        (__int64)&v17,
        (__int64)&v20,
        (const WCHAR **)&v19,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (const WCHAR **)&v18 + 1,
        (void **)&v18,
        (__int64)&v12,
        (__int64)&v26);
    }
  }
}

/*
 * XREFs of ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C0196D58
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018A754 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C003468C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@44@Z @ 0x1C0184718 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U-.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C0191FBC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::SecondaryHitTest(
        const union POINTERINFOUNION *a1,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 WindowDetails; // rax
  __int128 v9; // xmm1
  HWND WindowHandle; // rax
  LONG x; // ecx
  __int64 v12; // r8
  LONG v13; // [rsp+88h] [rbp-80h] BYREF
  int v14; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v15; // [rsp+90h] [rbp-78h] BYREF
  int v16; // [rsp+94h] [rbp-74h] BYREF
  int v17; // [rsp+98h] [rbp-70h] BYREF
  int v18; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int128 v19; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+C8h] [rbp-40h]
  __int128 v24; // [rsp+D8h] [rbp-30h]
  __int64 v25; // [rsp+E8h] [rbp-20h]
  _BYTE v26[40]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v27; // [rsp+140h] [rbp+38h] BYREF

  if ( InputTraceLogging::Enabled(0, (__int64)a2, (__int64)a3, a4) )
  {
    if ( *((_DWORD *)a2 + 23) == 2 )
      v7 = *((_QWORD *)a2 + 10);
    else
      v7 = 0LL;
    WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v26, v7, 0LL);
    v9 = *(_OWORD *)(WindowDetails + 16);
    v23 = *(_OWORD *)WindowDetails;
    v25 = *(_QWORD *)(WindowDetails + 32);
    v24 = v9;
    if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 32LL) )
    {
      WindowHandle = CInputDest::GetWindowHandle(a2);
      LODWORD(v27) = a3->y;
      x = a3->x;
      v17 = DWORD2(v24);
      v20 = v24;
      v18 = *((_DWORD *)a1 + 1);
      v22 = *((_QWORD *)a1 + 10);
      v13 = x;
      v19 = v23;
      v14 = HIDWORD(v25);
      v15 = v25;
      v16 = HIDWORD(v24);
      v21 = (__int64)WindowHandle;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0244A70,
        (unsigned __int8 *)dword_1C0217046,
        v12,
        (__int64)WindowHandle,
        (__int64)&v22,
        (__int64)&v18,
        (__int64)&v21,
        (const WCHAR **)&v20,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (const WCHAR **)&v19 + 1,
        (void **)&v19,
        (__int64)&v13,
        (__int64)&v27);
    }
  }
}

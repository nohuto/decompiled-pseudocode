/*
 * XREFs of ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x18002283C
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180021570 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180021FA0 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180037250 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018FE0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800752AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?OnDpiScaleChanged@DWMCursor@@AEAAJXZ @ 0x18019CF34 (-OnDpiScaleChanged@DWMCursor@@AEAAJXZ.c)
 */

__int64 __fastcall DWMCursor::CheckAndUpdateDpiScale(POINT *this, char a2)
{
  LONG x; // edi
  __int64 v4; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  __int64 v10; // rsi
  LPVOID v11; // rax
  int v12; // r10d
  int v13; // eax
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  POINT pt; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  x = this[11].x;
  v4 = (__int64)this[4];
  if ( v4 )
  {
    x = 100;
    v6 = *(_QWORD *)(v4 + 480);
    v7 = *(_QWORD *)(v4 + 488);
    pt = this[10];
    while ( v6 != v7 )
    {
      if ( PtInRect((const RECT *)v6, pt) )
      {
        v8 = MulDiv(*(unsigned __int16 *)(v6 + 20), 100, 96);
        if ( !v8 )
          v8 = 100;
        x = v8;
        break;
      }
      v6 += 200LL;
    }
  }
  if ( this[11].x != x )
  {
    v10 = (unsigned int)this[5].x;
    this[11].x = x;
    v11 = wil::details::static_lazy<InputTraceLogging>::get(
            v4,
            _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v11 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v11 + 1), 8LL) )
    {
      pt.x = x;
      v17 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v12,
        (unsigned int)&unk_1801D2E8A,
        0,
        0,
        (__int64)&v17,
        (__int64)&pt);
    }
    if ( a2 )
    {
      v13 = DWMCursor::OnDpiScaleChanged((DWMCursor *)this);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1A2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v13,
          v14);
    }
  }
  return 0LL;
}

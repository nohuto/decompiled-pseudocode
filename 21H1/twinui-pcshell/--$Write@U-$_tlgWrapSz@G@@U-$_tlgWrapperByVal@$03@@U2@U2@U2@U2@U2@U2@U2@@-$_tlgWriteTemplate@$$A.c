/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444444@Z @ 0x1803D2398
 * Callers:
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1803DEBBC (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1803DEDA4 (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1803DF000 (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  const WCHAR *v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-B1h] BYREF
  const WCHAR *v20; // [rsp+50h] [rbp-91h]
  int v21; // [rsp+58h] [rbp-89h]
  int v22; // [rsp+5Ch] [rbp-85h]
  __int64 v23; // [rsp+60h] [rbp-81h]
  __int64 v24; // [rsp+68h] [rbp-79h]
  __int64 v25; // [rsp+70h] [rbp-71h]
  __int64 v26; // [rsp+78h] [rbp-69h]
  __int64 v27; // [rsp+80h] [rbp-61h]
  __int64 v28; // [rsp+88h] [rbp-59h]
  __int64 v29; // [rsp+90h] [rbp-51h]
  __int64 v30; // [rsp+98h] [rbp-49h]
  __int64 v31; // [rsp+A0h] [rbp-41h]
  __int64 v32; // [rsp+A8h] [rbp-39h]
  __int64 v33; // [rsp+B0h] [rbp-31h]
  __int64 v34; // [rsp+B8h] [rbp-29h]
  __int64 v35; // [rsp+C0h] [rbp-21h]
  __int64 v36; // [rsp+C8h] [rbp-19h]
  __int64 v37; // [rsp+D0h] [rbp-11h]
  __int64 v38; // [rsp+D8h] [rbp-9h]

  v37 = a13;
  v35 = a12;
  v33 = a11;
  v31 = a10;
  v29 = a9;
  v27 = a8;
  v25 = a7;
  v23 = a6;
  v38 = 4LL;
  v36 = 4LL;
  v34 = 4LL;
  v15 = *a5;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 4LL;
  v26 = 4LL;
  v24 = 4LL;
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &word_1804BE2A8;
    v17 = 2;
  }
  v20 = v15;
  v21 = v17;
  v22 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0xBu, &v19);
}

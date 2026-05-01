/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x1801C3AF0
 * Callers:
 *     ??$PropertiesChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18000F47C (--$PropertiesChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ??$Created@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x180088AEC (--$Created@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C4890 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ??$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0@Z @ 0x18028E63C (--$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLoggin.c)
 *     ??$Destroyed@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18044F0C4 (--$Destroyed@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z.c)
 *     ??$VisibilityRevokedChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18044F308 (--$VisibilityRevokedChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEA.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6)
{
  __int64 v8; // rcx
  int v10; // r9d
  const WCHAR *v11; // rdx
  __int64 v12; // rax
  int v13; // r8d
  const WCHAR *v14; // rdx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-58h] BYREF
  const WCHAR *v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+58h] [rbp-30h]
  int v19; // [rsp+5Ch] [rbp-2Ch]
  const WCHAR *v20; // [rsp+60h] [rbp-28h]
  int v21; // [rsp+68h] [rbp-20h]
  int v22; // [rsp+6Ch] [rbp-1Ch]

  v8 = -1LL;
  v10 = 2;
  v11 = *a6;
  if ( *a6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &word_1804BE2A8;
    v13 = 2;
  }
  v20 = v11;
  v21 = v13;
  v22 = 0;
  v14 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v14[v8] );
    v10 = 2 * v8 + 2;
  }
  else
  {
    v14 = &word_1804BE2A8;
  }
  v17 = v14;
  v18 = v10;
  v19 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 4u, &v16);
}

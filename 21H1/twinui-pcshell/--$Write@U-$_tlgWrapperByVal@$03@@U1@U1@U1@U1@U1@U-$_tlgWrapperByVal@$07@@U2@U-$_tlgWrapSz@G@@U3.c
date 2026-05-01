/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@G@@5@Z @ 0x180244AA4
 * Callers:
 *     ?UnmetTabRequirementsChanged@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXW4DWM_TAB_WINDOW_REQUIREMENTS@@0AEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x18025DB60 (-UnmetTabRequirementsChanged@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLog.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        const WCHAR **a13,
        const WCHAR **a14)
{
  __int64 v16; // rcx
  int v18; // r9d
  const WCHAR *v19; // rdx
  __int64 v20; // rax
  int v21; // r8d
  const WCHAR *v22; // rdx
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v25; // [rsp+50h] [rbp-A9h]
  __int64 v26; // [rsp+58h] [rbp-A1h]
  __int64 v27; // [rsp+60h] [rbp-99h]
  __int64 v28; // [rsp+68h] [rbp-91h]
  __int64 v29; // [rsp+70h] [rbp-89h]
  __int64 v30; // [rsp+78h] [rbp-81h]
  __int64 v31; // [rsp+80h] [rbp-79h]
  __int64 v32; // [rsp+88h] [rbp-71h]
  __int64 v33; // [rsp+90h] [rbp-69h]
  __int64 v34; // [rsp+98h] [rbp-61h]
  __int64 v35; // [rsp+A0h] [rbp-59h]
  __int64 v36; // [rsp+A8h] [rbp-51h]
  __int64 v37; // [rsp+B0h] [rbp-49h]
  __int64 v38; // [rsp+B8h] [rbp-41h]
  __int64 v39; // [rsp+C0h] [rbp-39h]
  __int64 v40; // [rsp+C8h] [rbp-31h]
  const WCHAR *v41; // [rsp+D0h] [rbp-29h]
  int v42; // [rsp+D8h] [rbp-21h]
  int v43; // [rsp+DCh] [rbp-1Dh]
  const WCHAR *v44; // [rsp+E0h] [rbp-19h]
  int v45; // [rsp+E8h] [rbp-11h]
  int v46; // [rsp+ECh] [rbp-Dh]

  v16 = -1LL;
  v18 = 2;
  v19 = *a14;
  if ( *a14 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v19 = &word_1804BE2A8;
    v21 = 2;
  }
  v44 = v19;
  v45 = v21;
  v46 = 0;
  v22 = *a13;
  if ( *a13 )
  {
    do
      ++v16;
    while ( v22[v16] );
    v18 = 2 * v16 + 2;
  }
  else
  {
    v22 = &word_1804BE2A8;
  }
  v39 = a12;
  v37 = a11;
  v35 = a10;
  v33 = a9;
  v31 = a8;
  v29 = a7;
  v27 = a6;
  v25 = a5;
  v41 = v22;
  v42 = v18;
  v43 = 0;
  v40 = 8LL;
  v38 = 8LL;
  v36 = 4LL;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 4LL;
  v26 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0xCu, &v24);
}

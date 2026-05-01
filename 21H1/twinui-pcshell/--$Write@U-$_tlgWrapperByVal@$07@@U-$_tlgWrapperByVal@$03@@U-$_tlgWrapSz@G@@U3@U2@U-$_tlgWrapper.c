/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180245B00
 * Callers:
 *     ?StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@0PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x180256B14 (-StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIAppl.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rcx
  const WCHAR *v17; // rdx
  __int64 v18; // rax
  int v19; // r8d
  const WCHAR *v20; // rdx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-89h] BYREF
  __int64 v23; // [rsp+50h] [rbp-69h]
  __int64 v24; // [rsp+58h] [rbp-61h]
  __int64 v25; // [rsp+60h] [rbp-59h]
  __int64 v26; // [rsp+68h] [rbp-51h]
  const WCHAR *v27; // [rsp+70h] [rbp-49h]
  int v28; // [rsp+78h] [rbp-41h]
  int v29; // [rsp+7Ch] [rbp-3Dh]
  const WCHAR *v30; // [rsp+80h] [rbp-39h]
  int v31; // [rsp+88h] [rbp-31h]
  int v32; // [rsp+8Ch] [rbp-2Dh]
  __int64 v33; // [rsp+90h] [rbp-29h]
  __int64 v34; // [rsp+98h] [rbp-21h]
  __int64 v35; // [rsp+A0h] [rbp-19h]
  __int64 v36; // [rsp+A8h] [rbp-11h]

  v36 = 16LL;
  v34 = 4LL;
  v14 = *a10;
  v15 = 2;
  v33 = a9;
  v35 = v14;
  v16 = -1LL;
  v17 = *a8;
  if ( *a8 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &word_1804BE2A8;
    v19 = 2;
  }
  v30 = v17;
  v31 = v19;
  v32 = 0;
  v20 = *a7;
  if ( *a7 )
  {
    do
      ++v16;
    while ( v20[v16] );
    v15 = 2 * v16 + 2;
  }
  else
  {
    v20 = &word_1804BE2A8;
  }
  v25 = a6;
  v23 = a5;
  v27 = v20;
  v28 = v15;
  v24 = 8LL;
  v29 = 0;
  v26 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 8u, &v22);
}

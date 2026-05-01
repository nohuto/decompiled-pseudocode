/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@543@Z @ 0x18044FCC0
 * Callers:
 *     ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x18000F1E0 (-StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     ?StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x18000F2DC (-StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     ?StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1800842D0 (-StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // rcx
  int v15; // r9d
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  const WCHAR *v19; // rdx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-89h] BYREF
  __int64 v22; // [rsp+50h] [rbp-69h]
  __int64 v23; // [rsp+58h] [rbp-61h]
  __int64 v24; // [rsp+60h] [rbp-59h]
  __int64 v25; // [rsp+68h] [rbp-51h]
  const WCHAR *v26; // [rsp+70h] [rbp-49h]
  int v27; // [rsp+78h] [rbp-41h]
  int v28; // [rsp+7Ch] [rbp-3Dh]
  const WCHAR *v29; // [rsp+80h] [rbp-39h]
  int v30; // [rsp+88h] [rbp-31h]
  int v31; // [rsp+8Ch] [rbp-2Dh]
  __int64 v32; // [rsp+90h] [rbp-29h]
  __int64 v33; // [rsp+98h] [rbp-21h]
  __int64 v34; // [rsp+A0h] [rbp-19h]
  __int64 v35; // [rsp+A8h] [rbp-11h]

  v34 = a10;
  v32 = a9;
  v12 = -1LL;
  v35 = 8LL;
  v33 = 4LL;
  v15 = 2;
  v16 = *a8;
  if ( *a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &word_1804BE2A8;
    v18 = 2;
  }
  v29 = v16;
  v30 = v18;
  v31 = 0;
  v19 = *a7;
  if ( *a7 )
  {
    do
      ++v12;
    while ( v19[v12] );
    v15 = 2 * v12 + 2;
  }
  else
  {
    v19 = &word_1804BE2A8;
  }
  v24 = a6;
  v22 = a5;
  v26 = v19;
  v27 = v15;
  v28 = 0;
  v25 = 4LL;
  v23 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 8u, &v21);
}

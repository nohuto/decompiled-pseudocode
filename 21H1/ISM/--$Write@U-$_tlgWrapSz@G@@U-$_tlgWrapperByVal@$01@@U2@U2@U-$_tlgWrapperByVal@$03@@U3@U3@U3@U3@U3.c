/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1800A470C
 * Callers:
 *     ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800A49F0 (-LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  int v15; // edx
  const wchar_t *v16; // rcx
  __int64 v17; // rax
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-C9h] BYREF
  const wchar_t *v20; // [rsp+50h] [rbp-A9h]
  int v21; // [rsp+58h] [rbp-A1h]
  int v22; // [rsp+5Ch] [rbp-9Dh]
  __int64 v23; // [rsp+60h] [rbp-99h]
  __int64 v24; // [rsp+68h] [rbp-91h]
  __int64 v25; // [rsp+70h] [rbp-89h]
  __int64 v26; // [rsp+78h] [rbp-81h]
  __int64 v27; // [rsp+80h] [rbp-79h]
  __int64 v28; // [rsp+88h] [rbp-71h]
  __int64 v29; // [rsp+90h] [rbp-69h]
  __int64 v30; // [rsp+98h] [rbp-61h]
  __int64 v31; // [rsp+A0h] [rbp-59h]
  __int64 v32; // [rsp+A8h] [rbp-51h]
  __int64 v33; // [rsp+B0h] [rbp-49h]
  __int64 v34; // [rsp+B8h] [rbp-41h]
  __int64 v35; // [rsp+C0h] [rbp-39h]
  __int64 v36; // [rsp+C8h] [rbp-31h]
  __int64 v37; // [rsp+D0h] [rbp-29h]
  __int64 v38; // [rsp+D8h] [rbp-21h]
  __int64 v39; // [rsp+E0h] [rbp-19h]
  __int64 v40; // [rsp+E8h] [rbp-11h]

  v39 = a14;
  v37 = a13;
  v15 = 2;
  v35 = a12;
  v33 = a11;
  v31 = a10;
  v29 = a9;
  v27 = a8;
  v25 = a7;
  v23 = a6;
  v40 = 4LL;
  v38 = 4LL;
  v36 = 4LL;
  v16 = *a5;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 2LL;
  v26 = 2LL;
  v24 = 2LL;
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v15 = 2 * v17 + 2;
  }
  else
  {
    v16 = &word_1801C23BC;
  }
  v20 = v16;
  v21 = v15;
  v22 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1802063F0, a2, 0LL, 0LL, 0xCu, &v19);
}

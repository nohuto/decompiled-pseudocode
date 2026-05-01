/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@54@Z @ 0x180245940
 * Callers:
 *     ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180256FB0 (-Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShel.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 *a9,
        __int64 a10)
{
  __int64 v11; // rcx
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-69h] BYREF
  __int64 v14; // [rsp+50h] [rbp-49h]
  int v15; // [rsp+58h] [rbp-41h]
  int v16; // [rsp+5Ch] [rbp-3Dh]
  __int64 v17; // [rsp+60h] [rbp-39h]
  int v18; // [rsp+68h] [rbp-31h]
  int v19; // [rsp+6Ch] [rbp-2Dh]
  __int64 v20; // [rsp+70h] [rbp-29h]
  int v21; // [rsp+78h] [rbp-21h]
  int v22; // [rsp+7Ch] [rbp-1Dh]
  __int64 v23; // [rsp+80h] [rbp-19h]
  int v24; // [rsp+88h] [rbp-11h]
  int v25; // [rsp+8Ch] [rbp-Dh]
  __int64 v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+98h] [rbp-1h]
  int v28; // [rsp+9Ch] [rbp+3h]
  __int64 v29; // [rsp+A0h] [rbp+7h]
  int v30; // [rsp+A8h] [rbp+Fh]
  int v31; // [rsp+ACh] [rbp+13h]

  v31 = 0;
  v28 = 0;
  v25 = 0;
  v22 = 0;
  v19 = 0;
  v16 = 0;
  v29 = a10;
  v27 = 16;
  v24 = 16;
  v30 = 4;
  v26 = *a9;
  v21 = 4;
  v18 = 4;
  v11 = *a8;
  v20 = a7;
  v17 = a6;
  v23 = v11;
  v14 = a5;
  v15 = 8;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 8u, &v13);
}

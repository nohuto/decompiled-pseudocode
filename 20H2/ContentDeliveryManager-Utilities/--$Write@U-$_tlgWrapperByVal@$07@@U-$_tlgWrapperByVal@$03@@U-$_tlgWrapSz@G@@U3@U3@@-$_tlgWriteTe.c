/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@55@Z @ 0x180002C84
 * Callers:
 *     ?StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180051664 (-StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180051A24 (-StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ?StartActivity@ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180051DE4 (-StartActivity@ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     ?StartActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x1800521A4 (-StartActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ?StartActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180052564 (-StartActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliver.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        const WCHAR **a9)
{
  __int64 v11; // rcx
  int v14; // r9d
  const WCHAR *v15; // rdx
  __int64 v16; // rax
  int v17; // r8d
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  int v20; // r8d
  const WCHAR *v21; // rdx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-71h] BYREF
  __int64 v24; // [rsp+50h] [rbp-51h]
  __int64 v25; // [rsp+58h] [rbp-49h]
  __int64 v26; // [rsp+60h] [rbp-41h]
  __int64 v27; // [rsp+68h] [rbp-39h]
  const WCHAR *v28; // [rsp+70h] [rbp-31h]
  int v29; // [rsp+78h] [rbp-29h]
  int v30; // [rsp+7Ch] [rbp-25h]
  const WCHAR *v31; // [rsp+80h] [rbp-21h]
  int v32; // [rsp+88h] [rbp-19h]
  int v33; // [rsp+8Ch] [rbp-15h]
  const WCHAR *v34; // [rsp+90h] [rbp-11h]
  int v35; // [rsp+98h] [rbp-9h]
  int v36; // [rsp+9Ch] [rbp-5h]

  v11 = -1LL;
  v14 = 2;
  v15 = *a9;
  if ( *a9 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &Src;
    v17 = 2;
  }
  v34 = v15;
  v35 = v17;
  v36 = 0;
  v18 = *a8;
  if ( *a8 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &Src;
    v20 = 2;
  }
  v31 = v18;
  v32 = v20;
  v33 = 0;
  v21 = *a7;
  if ( *a7 )
  {
    do
      ++v11;
    while ( v21[v11] );
    v14 = 2 * v11 + 2;
  }
  else
  {
    v21 = &Src;
  }
  v26 = a6;
  v24 = a5;
  v28 = v21;
  v29 = v14;
  v30 = 0;
  v27 = 4LL;
  v25 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 7u, &v23);
}

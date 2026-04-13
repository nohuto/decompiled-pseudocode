/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapSz@D@@@Z @ 0x180002438
 * Callers:
 *     ??$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x18003AE30 (--$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ??$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x18003AF10 (--$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ??$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x18003B014 (--$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@C.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const WCHAR **a9,
        const WCHAR **a10,
        const unsigned __int16 **a11)
{
  __int64 v13; // rcx
  const unsigned __int16 *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r8d
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  int v20; // r9d
  const WCHAR *v21; // rdx
  __int64 v22; // rax
  int v23; // r9d
  const WCHAR *v24; // rdx
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-81h] BYREF
  const WCHAR *v27; // [rsp+50h] [rbp-61h]
  int v28; // [rsp+58h] [rbp-59h]
  int v29; // [rsp+5Ch] [rbp-55h]
  __int64 v30; // [rsp+60h] [rbp-51h]
  __int64 v31; // [rsp+68h] [rbp-49h]
  __int64 v32; // [rsp+70h] [rbp-41h]
  __int64 v33; // [rsp+78h] [rbp-39h]
  __int64 v34; // [rsp+80h] [rbp-31h]
  __int64 v35; // [rsp+88h] [rbp-29h]
  const WCHAR *v36; // [rsp+90h] [rbp-21h]
  int v37; // [rsp+98h] [rbp-19h]
  int v38; // [rsp+9Ch] [rbp-15h]
  const WCHAR *v39; // [rsp+A0h] [rbp-11h]
  int v40; // [rsp+A8h] [rbp-9h]
  int v41; // [rsp+ACh] [rbp-5h]
  const unsigned __int16 *v42; // [rsp+B0h] [rbp-1h]
  int v43; // [rsp+B8h] [rbp+7h]
  int v44; // [rsp+BCh] [rbp+Bh]

  v13 = -1LL;
  v14 = *a11;
  if ( *a11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_BYTE *)v14 + v15) );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &word_180103AD0;
    v16 = 1;
  }
  v43 = v16;
  v17 = 2;
  v42 = v14;
  v44 = 0;
  v18 = *a10;
  if ( *a10 )
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
  v39 = v18;
  v40 = v20;
  v41 = 0;
  v21 = *a9;
  if ( *a9 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = &Src;
    v23 = 2;
  }
  v34 = a8;
  v32 = a7;
  v30 = a6;
  v36 = v21;
  v37 = v23;
  v38 = 0;
  v24 = *a5;
  v35 = 1LL;
  v33 = 8LL;
  v31 = 2LL;
  if ( v24 )
  {
    do
      ++v13;
    while ( v24[v13] );
    v17 = 2 * v13 + 2;
  }
  else
  {
    v24 = &Src;
  }
  v27 = v24;
  v28 = v17;
  v29 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v26);
}

/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180357C74
 * Callers:
 *     ??$PreviousDeferredRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY08$$CBD@Z @ 0x1803577D4 (--$PreviousDeferredRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QE.c)
 *     ??$PreviousDeferredRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY0L@$$CBD@Z @ 0x180357878 (--$PreviousDeferredRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$Q.c)
 *     ??$PreviousPendingRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY08$$CBD@Z @ 0x18035791C (--$PreviousPendingRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ??$PreviousPendingRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY0L@$$CBD@Z @ 0x1803579C0 (--$PreviousPendingRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7,
        __int64 a8)
{
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+58h] [rbp-11h]
  __int64 v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  const wchar_t *v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]
  __int64 v21; // [rsp+80h] [rbp+17h]
  __int64 v22; // [rsp+88h] [rbp+1Fh]

  v21 = a8;
  v22 = 8LL;
  v9 = *a7;
  if ( *a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *((_BYTE *)v9 + v10) );
    v11 = v10 + 1;
  }
  else
  {
    v9 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v11 = 1;
  }
  v19 = v11;
  v16 = a6;
  v14 = a5;
  v18 = v9;
  v20 = 0;
  v17 = 4LL;
  v15 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 6u, &v13);
}

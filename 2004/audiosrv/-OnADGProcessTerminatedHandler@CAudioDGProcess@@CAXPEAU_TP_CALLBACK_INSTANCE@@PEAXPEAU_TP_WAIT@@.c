/*
 * XREFs of ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18012E640
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18010A1B4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x18012E534 (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 */

void __fastcall CAudioDGProcess::OnADGProcessTerminatedHandler(
        struct _TP_CALLBACK_INSTANCE *a1,
        CAudioDGProcess *a2,
        struct _TP_WAIT *a3,
        __int64 a4)
{
  unsigned int v4; // r10d
  int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+7h] BYREF
  __int64 v8; // [rsp+48h] [rbp+Fh] BYREF
  __int64 v9; // [rsp+50h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 *v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+80h] [rbp+47h]
  int v13; // [rsp+84h] [rbp+4Bh]

  v4 = dword_18019D4E8;
  v5 = a4;
  if ( (unsigned int)dword_18019D4E8 > 2 && tlgKeywordOn((__int64)&dword_18019D4E8, 0x400000000000LL) )
  {
    v13 = 0;
    v11 = &v8;
    v8 = 0x1000000LL;
    v12 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_18019D4E8,
      (unsigned __int8 *)dword_18016D481,
      0LL,
      0LL,
      3u,
      &v10);
    v4 = dword_18019D4E8;
  }
  if ( v5 )
  {
    if ( v4 > 2 )
    {
      LODWORD(v7) = v5;
      v9 = (__int64)"CAudioDGProcess::OnADGProcessTerminatedHandler";
      LODWORD(v8) = 606;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4E8,
        byte_18016D3ED,
        (__int64)a3,
        a4,
        (const CHAR **)&v9,
        (__int64)&v8,
        (__int64)&v7);
    }
  }
  else
  {
    CAudioDGProcess::OnADGProcessTerminated(a2);
  }
}

/*
 * XREFs of ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C024F3CC
 * Callers:
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C02202F8 (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C024E9B8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProviderBase@@01I@Z@Z @ 0x1C0253FF0 (-RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProv.c)
 */

__int64 __fastcall InkProcessor::ProcessInkFeedbackCommand(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  int v9; // [rsp+30h] [rbp-50h] BYREF
  const char *v10; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-40h] BYREF
  int *v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]

  v2 = InkFeedbackServer::RunForAllProviders(a1 + 96);
  v3 = v2;
  if ( v2 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1, 0LL);
    if ( *(_BYTE *)(a1 + 8) )
    {
      v7 = InkFeedbackServer::RunForAllProviders(a1 + 96);
      v3 = v7;
      if ( v7 < 0 && (unsigned int)dword_1C032A288 > 2 )
      {
        v14 = 0;
        v9 = v7;
        v13 = 4;
        v12 = &v9;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C032A288,
          (unsigned __int8 *)dword_1C02F0A0C,
          0LL,
          0LL,
          3u,
          &v11);
      }
    }
    else
    {
      v3 = -1073741823;
      if ( (unsigned int)dword_1C032A288 > 2 )
      {
        v9 = -1073741823;
        v10 = "Ink processor not enabled";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v4,
          byte_1C02F1A33,
          v5,
          v6,
          (__int64)&v9,
          (void **)&v10);
      }
    }
    if ( a1 )
    {
      ExReleasePushLockExclusiveEx(a1, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else if ( (unsigned int)dword_1C032A288 > 2 )
  {
    v14 = 0;
    v9 = v2;
    v13 = 4;
    v12 = &v9;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032A288, (unsigned __int8 *)dword_1C02F0A0C, 0LL, 0LL, 3u, &v11);
  }
  return v3;
}

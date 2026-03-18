/*
 * XREFs of ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00C0AF8
 * Callers:
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0082EA0 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B8C60 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00261D4 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlg.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1C002629C (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@@-$_.c)
 *     _tlgKeywordOn @ 0x1C00269B8 (_tlgKeywordOn.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00C13B8 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_DEVICE *a2,
        char a3)
{
  const char *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  GUID v13; // xmm0
  const char *v14; // [rsp+40h] [rbp-9h] BYREF
  __int64 v15; // [rsp+48h] [rbp-1h] BYREF
  __int64 ProcessImageFileName; // [rsp+50h] [rbp+7h] BYREF
  unsigned __int16 *v17; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+60h] [rbp+17h] BYREF
  __int64 v19; // [rsp+68h] [rbp+1Fh] BYREF
  unsigned __int16 *v20; // [rsp+70h] [rbp+27h] BYREF
  GUID ActivityId; // [rsp+78h] [rbp+2Fh] BYREF

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 268LL)) <= 6 )
  {
    ActivityId = 0LL;
    if ( a3 )
      EtwActivityIdControl(3u, &ActivityId);
    else
      ActivityId = *(GUID *)((char *)a2 + 276);
    if ( (unsigned int)dword_1C0051048 > 5 && tlgKeywordOn((__int64)&dword_1C0051048, 0x10000LL) )
    {
      v6 = "AddedToPenaltyBox";
      if ( !a3 )
        v6 = "RemovedFromPenaltyBox";
      v7 = (_QWORD *)*((_QWORD *)a2 + 1);
      v14 = v6;
      v15 = *v7;
      ProcessImageFileName = PsGetProcessImageFileName(*v7);
      v8 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      v17 = *(unsigned __int16 **)(v8 + 1520);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        v8,
        (int)&unk_1C00439FF,
        (int)&ActivityId,
        v9,
        &v17,
        (void **)&ProcessImageFileName,
        (__int64)&v15,
        (void **)&v14);
    }
    if ( a3 )
    {
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(this, *((struct VIDMM_PROCESS_ADAPTER_INFO **)a2 + 2), &ActivityId);
      if ( (unsigned int)dword_1C0051048 > 5 && tlgKeywordOn((__int64)&dword_1C0051048, 0x10000LL) )
      {
        v10 = *((_QWORD *)this + 1);
        v18 = **(_QWORD **)(v10 + 8);
        v19 = PsGetProcessImageFileName(**(_QWORD **)(v10 + 8));
        v11 = *(_QWORD *)(*(_QWORD *)this + 24LL);
        v20 = *(unsigned __int16 **)(v11 + 1520);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
          v11,
          (int)&unk_1C00439A6,
          (int)&ActivityId,
          v12,
          &v20,
          (void **)&v19,
          (__int64)&v18);
      }
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        this,
        *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
        &ActivityId);
      v13 = ActivityId;
    }
    else
    {
      v13 = GUID_NULL;
    }
    *(GUID *)((char *)a2 + 276) = v13;
  }
}

/*
 * XREFs of ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00E59A4
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014BA0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@33333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0030AA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U1@U-$_tlgWr.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00E5B50 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00E5F30 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v13; // [rsp+68h] [rbp-1h] BYREF
  __int64 v14; // [rsp+70h] [rbp+7h] BYREF
  __int64 v15; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+80h] [rbp+17h] BYREF
  __int64 v17; // [rsp+88h] [rbp+1Fh] BYREF
  unsigned __int16 *v18; // [rsp+90h] [rbp+27h] BYREF
  __int64 v19; // [rsp+98h] [rbp+2Fh] BYREF
  GUID ActivityId; // [rsp+A0h] [rbp+37h] BYREF

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 268LL)) <= 5 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
    {
      v6 = *((_QWORD *)a2 + 17);
      v7 = *((_QWORD *)a2 + 19);
      v12[0] = 2;
      v13 = v7 - v6;
      v8 = *((_QWORD *)a2 + 18);
      v9 = v7 - v8;
      v15 = v8 - v6;
      v10 = *((_QWORD *)this + 1);
      v14 = v9;
      v16 = **(_QWORD **)(v10 + 8);
      v17 = *((_QWORD *)a2 + 4);
      v11 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      v18 = *(unsigned __int16 **)(v11 + 1616);
      v19 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v11,
        byte_1C0051377,
        &ActivityId,
        v5,
        (__int64)&v19,
        &v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)v12);
    }
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
  }
}

/*
 * XREFs of ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00C12B0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008B6F0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x1C002698C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@-$_tlgWriteTemplate@.c)
 *     _tlgKeywordOn @ 0x1C0026C04 (_tlgKeywordOn.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C00C0D54 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00C1588 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00C1968 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogFullDefragPass(struct VIDMM_ALLOC **this, int a2)
{
  __int64 v4; // r9
  struct VIDMM_ALLOC *v5; // rax
  __int64 v6; // rcx
  int v7; // [rsp+40h] [rbp-30h] BYREF
  int v8; // [rsp+44h] [rbp-2Ch] BYREF
  unsigned __int16 *v9; // [rsp+48h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-20h] BYREF

  if ( *((_BYTE *)this + 24) && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this[1] + 66) <= 5 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C0051048 > 5 && tlgKeywordOn((__int64)&dword_1C0051048, 0x200000000000LL) )
    {
      v5 = *this;
      v7 = a2;
      v6 = *((_QWORD *)v5 + 3);
      v9 = *(unsigned __int16 **)(v6 + 1496);
      v8 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>>(
        v6,
        (int)&unk_1C0043A24,
        (int)&ActivityId,
        v4,
        (__int64)&v8,
        &v9,
        (__int64)&v7);
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation((VIDMM_COMMIT_TELEMETRY *)this, this[2], 0LL, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState((VIDMM_COMMIT_TELEMETRY *)this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      (VIDMM_COMMIT_TELEMETRY *)this,
      *((struct VIDMM_PROCESS_ADAPTER_INFO **)this[1] + 2),
      &ActivityId);
  }
}

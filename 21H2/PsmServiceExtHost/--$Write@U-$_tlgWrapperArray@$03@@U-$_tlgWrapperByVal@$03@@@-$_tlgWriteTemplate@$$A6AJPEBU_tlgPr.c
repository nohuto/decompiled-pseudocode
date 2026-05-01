/*
 * XREFs of ??$Write@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800752A0
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003DFB0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180076DC0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6)
{
  int v6; // eax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  __int64 v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]

  v14 = a6;
  v15 = 4LL;
  v10 = 2LL;
  v11 = *a5;
  v6 = 4 * *((unsigned __int16 *)a5 + 4);
  v9 = a5 + 1;
  v12 = v6;
  v13 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 5u, &v8);
}

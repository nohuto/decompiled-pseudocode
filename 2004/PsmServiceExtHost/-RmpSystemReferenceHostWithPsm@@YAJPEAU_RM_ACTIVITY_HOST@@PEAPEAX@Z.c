/*
 * XREFs of ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x18000C460
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C4E0 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180074A1C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

__int64 __fastcall RmpSystemReferenceHostWithPsm(struct _RM_ACTIVITY_HOST *a1, void **a2)
{
  unsigned int v3; // edi
  int v4; // r8d
  int v5; // r9d
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  struct _RM_ACTIVITY_HOST *v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v3 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, void **))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                                       + 120LL))(
         (char *)a1 + 552,
         *((unsigned int *)a1 + 155),
         (char *)a1 + 88,
         *((unsigned int *)a1 + 156),
         *((_QWORD *)a1 + 4),
         *((_DWORD *)a1 + 209) & 1,
         a2);
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
  {
    v9 = *((_QWORD *)a1 + 4);
    v8 = a1;
    v7 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009EDB2,
      v4,
      v5,
      (__int64)&v7,
      (__int64)&v9,
      (__int64)&v8);
  }
  return v3;
}

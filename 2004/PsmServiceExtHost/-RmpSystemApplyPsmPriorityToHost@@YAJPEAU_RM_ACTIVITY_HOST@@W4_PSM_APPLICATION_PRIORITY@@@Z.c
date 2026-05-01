/*
 * XREFs of ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180025934
 * Callers:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18002333C (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180062780 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

__int64 __fastcall RmpSystemApplyPsmPriorityToHost(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64, __int64, __int64, _QWORD *); // rax
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r9d
  __int64 v10; // rcx
  int v11; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v14[3]; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]

  v2 = *(_QWORD *)(a1 + 48);
  memset(v14, 0, sizeof(v14));
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)(v2 + 40) + 8LL);
  v15 = a2;
  v16 = 16;
  v6 = v5(a1 + 552, *(unsigned int *)(a1 + 620), a1 + 88, 6LL, -1LL, v14);
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 )
  {
    v10 = qword_1800B31F8 & 1;
    if ( v10 == qword_1800B31F8 )
    {
      v13 = *(_QWORD *)(a1 + 32);
      v11 = a2;
      v12 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v10,
        (unsigned int)&unk_18009E9F4,
        v7,
        v8,
        (__int64)&v12,
        (__int64)&v13,
        (__int64)&v11);
    }
  }
  return v6;
}

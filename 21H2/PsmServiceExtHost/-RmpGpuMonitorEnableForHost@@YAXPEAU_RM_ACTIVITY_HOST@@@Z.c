/*
 * XREFs of ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180074E34
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180017920 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180074958 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180074D78 (-RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorEnableForHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  if ( (*(_BYTE *)(v1 + 2712) & 1) == 0 )
  {
    v3 = v1 + 48;
    v4 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(v1 + 40) + 88LL))(
           (char *)a1 + 552,
           *((unsigned int *)a1 + 155),
           (char *)a1 + 88,
           *((unsigned int *)a1 + 156),
           *((_QWORD *)a1 + 4),
           &v10);
    v5 = v10;
    if ( v4 < 0 )
      v5 = 0LL;
    *((_QWORD *)a1 + 152) = v5;
    v10 = v5;
    ++*(_DWORD *)(v3 + 32);
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v11 = v10;
      v12 = *((_QWORD *)a1 + 4);
      v9 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v6,
        byte_18009DD5C,
        v7,
        v8,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v9);
    }
    if ( (*(_BYTE *)(v3 + 44) & 1) == 0 )
      RmpGpuMonitorEnable((struct _RM_GPU_MONITOR *)v3);
  }
}

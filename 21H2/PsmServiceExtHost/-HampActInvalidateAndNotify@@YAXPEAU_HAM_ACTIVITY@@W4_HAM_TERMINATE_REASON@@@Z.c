/*
 * XREFs of ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800042DC
 * Callers:
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180006078 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180019B80 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x1800219A4 (RmpWnfPublishMessageToClientStateName.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800737BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall HampActInvalidateAndNotify(__int64 a1, int a2)
{
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // [rsp+40h] [rbp-59h] BYREF
  __int64 v11; // [rsp+48h] [rbp-51h] BYREF
  __int64 v12; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-39h] BYREF
  int v14; // [rsp+70h] [rbp-29h]
  int v15; // [rsp+78h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+A0h] [rbp+7h] BYREF
  __int64 *v17; // [rsp+C0h] [rbp+27h]
  int v18; // [rsp+C8h] [rbp+2Fh]
  int v19; // [rsp+CCh] [rbp+33h]

  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
  {
    v7 = *(_QWORD *)(a1 + 40);
    v19 = 0;
    v10 = v7;
    v18 = v4;
    v17 = &v10;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A1C22, 0, 0, 3u, &v16);
  }
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 544) |= 8u;
    memset_0(v13, 0, 0x40uLL);
    v6 = *(_QWORD *)(a1 + 40);
    v13[1] = 0LL;
    v13[0] = v6;
    v14 = 2;
    v15 = a2;
    if ( (*(_BYTE *)(v5 + 128) & 2) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v5 + 104))(v13, *(_QWORD *)(v5 + 120));
    }
    else if ( (int)RmpWnfPublishMessageToClientStateName(v5 + 104, v13, 64LL, *(_QWORD *)(v5 + 112)) < 0
           && (unsigned int)dword_1800B3218 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 0x400000000008LL) )
      {
        LODWORD(v10) = v14;
        v12 = v13[0];
        v11 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (unsigned int)&dword_1800B3218,
          (unsigned int)&unk_18009EC2B,
          v8,
          v9,
          (__int64)&v12,
          (__int64)&v10,
          (__int64)&v11);
      }
    }
  }
}

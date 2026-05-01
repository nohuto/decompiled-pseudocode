/*
 * XREFs of ?HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800037B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000389C (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180068A90 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall HampHostDepProcessExitCallback(struct _TP_CALLBACK_INSTANCE *a1, void *a2, struct _TP_WAIT *a3)
{
  DWORD v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdi
  DWORD ProcessId; // ebx
  DWORD v8; // eax
  int v9; // r8d
  int v10; // r9d
  DWORD v11; // [rsp+40h] [rbp-E8h] BYREF
  DWORD v12; // [rsp+44h] [rbp-E4h] BYREF
  __int64 v13; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v15[144]; // [rsp+60h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+F0h] [rbp-38h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A1F94, 0, 0, 2u, &v16);
  HampDepGroupInvalidateDependency((struct _HAM_HOST_DEPENDENCY *)a2);
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)a2 + 7) - 32LL);
    v6 = *(_QWORD *)(*((_QWORD *)a2 + 6) - 32LL);
    ProcessId = GetProcessId(*((HANDLE *)a2 + 9));
    v8 = GetProcessId(*((HANDLE *)a2 + 8));
    v13 = v5;
    v12 = v8;
    v14 = v6;
    v11 = ProcessId;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B3218,
      (unsigned int)&unk_1800A1FBA,
      v9,
      v10,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v14,
      (__int64)&v13);
  }
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
}

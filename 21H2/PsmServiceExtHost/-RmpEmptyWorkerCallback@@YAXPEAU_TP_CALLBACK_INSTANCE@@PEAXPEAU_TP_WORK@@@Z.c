/*
 * XREFs of ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180071470
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x18002A360 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18006B0FC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall RmpEmptyWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, unsigned int *a2, struct _TP_WORK *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  DWORD v7; // ebx
  __int64 v8; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v10[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+D0h] [rbp-48h] BYREF
  __int64 *v12; // [rsp+F0h] [rbp-28h]
  int v13; // [rsp+F8h] [rbp-20h]
  int v14; // [rsp+FCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v10);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 17LL) )
  {
    v9 = a2[330];
    v8 = *((_QWORD *)a2 + 4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800B31E0,
      byte_18009CFAC,
      v4,
      v5,
      (__int64)&v8,
      (__int64)&v9);
  }
  RmHamHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)a2,
    0x3000u,
    1,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementEmptyProcess,
    (void *)a2[330]);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 17LL) )
  {
    v6 = *((_QWORD *)a2 + 4);
    v14 = 0;
    v8 = v6;
    v13 = 8;
    v12 = &v8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009D015,
      0LL,
      0LL,
      3u,
      &v11);
  }
  NtSetEvent(*((HANDLE *)a2 + 164), 0LL);
  RmpObjectRelease((char *)a2);
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
}

/*
 * XREFs of ?RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180069190
 * Callers:
 *     RmGameModeRSrvReenableForRegisteredProcess @ 0x180069FB0 (RmGameModeRSrvReenableForRegisteredProcess.c)
 *     RmGameModeSrvReenableForRegisteredProcess @ 0x18006A1C0 (RmGameModeSrvReenableForRegisteredProcess.c)
 * Callees:
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B2BC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180062520 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18006EEBC (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 */

__int64 __fastcall RmSrvGameModeReenableForRegisteredProcess(struct _RM_SERVICE_GLOBALS *a1, void *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rdi
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  DWORD v7; // ebx
  DWORD ProcessId; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-D4h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+D0h] [rbp-38h] BYREF

  v2 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(&v11, (struct _CEM_LOCK_TRACKER *)v12);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009BAB4,
      0LL,
      0LL,
      2u,
      &v13);
  v4 = RmpGameModeReenableForRegisteredProcess((struct _RM_SERVICE_GLOBALS *)((char *)v2 + 1616), a2);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v10 = v4;
    ProcessId = GetProcessId(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800B31E0,
      byte_18009B960,
      v5,
      v6,
      (__int64)&v10,
      (__int64)&ProcessId);
  }
  if ( v11 )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v7, 0LL);
    }
  }
  return v4;
}

/*
 * XREFs of ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800277B0
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180027B9C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x1800293D4 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002A7F0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180026E90 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

__int64 __fastcall TsSessionRefreshSessionInformation(struct TSSession *a1)
{
  DWORD LastError; // edi
  _DWORD *v3; // rcx
  int v4; // eax
  LPWSTR ppBuffer; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+38h] [rbp-48h] BYREF
  DWORD pBytesReturned; // [rsp+3Ch] [rbp-44h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-40h] BYREF
  int *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  LastError = 0;
  ppBuffer = 0LL;
  v3 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v3 > 4u )
  {
    v4 = *(_DWORD *)a1;
    v12 = 0;
    v7 = v4;
    v11 = 4;
    v10 = &v7;
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_180046643, 0LL, 0LL, 3u, &v9);
  }
  if ( WTSQuerySessionInformationW(0LL, *(_DWORD *)a1, WTSSessionInfo, &ppBuffer, &pBytesReturned) )
  {
    EnterCriticalSection(&CriticalSection);
    ppBuffer = (LPWSTR)_InterlockedExchange64((volatile __int64 *)a1 + 5, (__int64)ppBuffer);
    TsSessionRefreshUserSid(a1);
    LeaveCriticalSection(&CriticalSection);
  }
  else
  {
    LastError = GetLastError();
  }
  if ( ppBuffer )
    WTSFreeMemory(ppBuffer);
  return LastError;
}

/*
 * XREFs of sub_1800277B0 @ 0x1800277B0
 * Callers:
 *     sub_180027B9C @ 0x180027B9C (sub_180027B9C.c)
 *     sub_1800293D4 @ 0x1800293D4 (sub_1800293D4.c)
 *     TS_SessionChanged @ 0x18002A7F0 (TS_SessionChanged.c)
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_180026E90 @ 0x180026E90 (sub_180026E90.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800277B0(__int64 a1)
{
  DWORD LastError; // edi
  _DWORD *v3; // rcx
  DWORD v4; // eax
  LPWSTR ppBuffer; // [rsp+30h] [rbp-50h] BYREF
  DWORD v7; // [rsp+38h] [rbp-48h] BYREF
  DWORD pBytesReturned; // [rsp+3Ch] [rbp-44h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-40h] BYREF
  DWORD *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  LastError = 0;
  ppBuffer = 0LL;
  v3 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
  if ( *v3 > 4u )
  {
    v4 = *(_DWORD *)a1;
    v12 = 0;
    v7 = v4;
    v11 = 4;
    v10 = &v7;
    sub_180001090((__int64)v3, (unsigned __int8 *)dword_180046643, 0LL, 0LL, 3u, &v9);
  }
  if ( WTSQuerySessionInformationW(0LL, *(_DWORD *)a1, WTSSessionInfo, &ppBuffer, &pBytesReturned) )
  {
    EnterCriticalSection(&CriticalSection);
    ppBuffer = (LPWSTR)_InterlockedExchange64((volatile __int64 *)(a1 + 40), (__int64)ppBuffer);
    sub_180026E90(a1);
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

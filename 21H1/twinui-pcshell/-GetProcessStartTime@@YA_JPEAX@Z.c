/*
 * XREFs of ?GetProcessStartTime@@YA_JPEAX@Z @ 0x18029C7F4
 * Callers:
 *     ?IsShellInfraHostRunning@@YA_NXZ @ 0x18029DA98 (-IsShellInfraHostRunning@@YA_NXZ.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134468 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

unsigned __int64 __fastcall GetProcessStartTime(void *a1)
{
  const char *v1; // r9
  struct _FILETIME v2; // rax
  struct _FILETIME v4; // [rsp+30h] [rbp-18h] BYREF
  struct _FILETIME v5; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp+10h] BYREF
  struct _FILETIME v8; // [rsp+60h] [rbp+18h] BYREF
  struct _FILETIME v9; // [rsp+68h] [rbp+20h] BYREF

  if ( GetProcessTimes(a1, &v8, &v5, &v4, &v9) )
  {
    v2 = v8;
  }
  else
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x127,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      v1);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v2 = SystemTimeAsFileTime;
  }
  return (HIDWORD(*(unsigned __int64 *)&v2) << 32) + v2.dwLowDateTime;
}

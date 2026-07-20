/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1400010BC
 * Callers:
 *     wmain @ 0x140001840 (wmain.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 */

__int64 TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation()
{
  __int128 v0; // xmm0
  int v1; // eax
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v0 = *((_OWORD *)off_140023020 - 1);
  xmmword_140023040 = 0LL;
  v4 = v0;
  v1 = ((__int64 (__fastcall *)(__int128 *, __int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64), int *, __int64 *))EtwEventRegister)(
         &v4,
         tlgEnableCallback,
         &dword_140023018,
         &qword_140023038);
  v2 = v1;
  if ( v1 )
  {
    if ( v1 > 0 )
      return (unsigned __int16)v1 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(qword_140023038, 2LL, off_140023020, *(unsigned __int16 *)off_140023020);
  }
  return v2;
}

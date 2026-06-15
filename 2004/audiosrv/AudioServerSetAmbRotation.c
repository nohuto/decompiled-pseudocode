/*
 * XREFs of AudioServerSetAmbRotation @ 0x1800E1210
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180046BF4 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerSetAmbRotation(char *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[16]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v8[16]; // [rsp+50h] [rbp-58h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v7, a1);
  v4 = (*(__int64 (__fastcall **)(char *, __int64))(*(_QWORD *)a1 + 152LL))(a1, a2);
  v5 = v4;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerSetAmbRotation", 4745, v4);
  EtwEventActivityIdControl(4LL, v8);
  return v5;
}

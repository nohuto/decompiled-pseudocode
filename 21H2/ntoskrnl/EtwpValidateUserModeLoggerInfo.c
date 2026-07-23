/*
 * XREFs of EtwpValidateUserModeLoggerInfo @ 0x1406B62C0
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     EtwpValidateLoggerInfo @ 0x1406B62F4 (EtwpValidateLoggerInfo.c)
 */

__int64 __fastcall EtwpValidateUserModeLoggerInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int *v6; // rcx

  if ( (unsigned int)a2 < 0xB0 || (unsigned int)a3 < 0xB0 )
    return 3221225990LL;
  result = EtwpValidateLoggerInfo(a1, a2, a3, a4);
  if ( (int)result < 0 )
    return result;
  if ( *v6 > v5 )
    return 3221225990LL;
  return 0LL;
}

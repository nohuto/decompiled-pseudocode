/*
 * XREFs of _RtlpStackTraceDatabaseLogPrefix@16 @ 0x4B36FB50
 * Callers:
 *     _RtlpCallInterceptRoutine@20 @ 0x4B35773E (_RtlpCallInterceptRoutine@20.c)
 * Callees:
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpRegisterStackTrace@12 @ 0x4B36F97B (_RtlpRegisterStackTrace@12.c)
 */

int __stdcall RtlpStackTraceDatabaseLogPrefix(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  USHORT v4; // ax
  ULONG BackTraceHash; // [esp+4h] [ebp-88h] BYREF
  PVOID BackTrace[32]; // [esp+8h] [ebp-84h] BYREF

  if ( a3 == 1 )
  {
    *a4 = 8;
  }
  else if ( a3 > 1 && (a3 <= 3 || a3 - 5 <= 1) )
  {
    if ( a4 )
    {
      v4 = RtlCaptureStackBackTrace(1u, 0x20u, BackTrace, &BackTraceHash);
      *a4 = RtlpRegisterStackTrace(v4, BackTrace, BackTraceHash);
    }
  }
  return 0;
}

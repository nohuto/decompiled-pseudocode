/*
 * XREFs of _RtlpStackTraceDatabaseLogPrefix@16 @ 0x4B36FB50
 * Callers:
 *     _RtlpCallInterceptRoutine@20 @ 0x4B35773E (_RtlpCallInterceptRoutine@20.c)
 * Callees:
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpRegisterStackTrace@12 @ 0x4B36F97B (_RtlpRegisterStackTrace@12.c)
 */

int __userpurge RtlpStackTraceDatabaseLogPrefix@<eax>(int a1@<edi>, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  USHORT v5; // ax
  ULONG BackTraceHash; // [esp+4h] [ebp-88h] BYREF
  PVOID BackTrace[32]; // [esp+8h] [ebp-84h] BYREF

  if ( a4 == 1 )
  {
    *a5 = 8;
  }
  else if ( a4 > 1 && (a4 <= 3 || a4 - 5 <= 1) )
  {
    if ( a5 )
    {
      v5 = RtlCaptureStackBackTrace(1u, 0x20u, BackTrace, &BackTraceHash);
      *a5 = RtlpRegisterStackTrace(BackTrace, v5, a1, BackTraceHash);
    }
  }
  return 0;
}

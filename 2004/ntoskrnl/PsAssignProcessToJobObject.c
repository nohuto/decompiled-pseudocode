/*
 * XREFs of PsAssignProcessToJobObject @ 0x140658030
 * Callers:
 *     NtAssignProcessToJobObject @ 0x140657F30 (NtAssignProcessToJobObject.c)
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 *     PspSetJobMemoryPartition @ 0x14090616C (PspSetJobMemoryPartition.c)
 *     PspAssignProcessToJobList @ 0x140906B1C (PspAssignProcessToJobList.c)
 * Callees:
 *     PspGetJobAssignmentDisposition @ 0x140658198 (PspGetJobAssignmentDisposition.c)
 *     PspAssignProcessToJob @ 0x140658924 (PspAssignProcessToJob.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(ULONG_PTR BugCheckParameter3, PVOID Object, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition(BugCheckParameter3, Object, a3, &v8) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(BugCheckParameter3, Object);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}

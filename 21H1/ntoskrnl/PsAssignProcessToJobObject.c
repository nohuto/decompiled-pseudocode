/*
 * XREFs of PsAssignProcessToJobObject @ 0x140674EF0
 * Callers:
 *     NtAssignProcessToJobObject @ 0x140674F70 (NtAssignProcessToJobObject.c)
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 *     PspSetJobMemoryPartition @ 0x140904E8C (PspSetJobMemoryPartition.c)
 *     PspAssignProcessToJobList @ 0x14090583C (PspAssignProcessToJobList.c)
 * Callees:
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x140674D08 (PspGetJobAssignmentDisposition.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(PVOID Object, PEPROCESS Process, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition((__int64)Object, (__int64)Process, a3, &v8) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(Object, Process, a3, v8);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}

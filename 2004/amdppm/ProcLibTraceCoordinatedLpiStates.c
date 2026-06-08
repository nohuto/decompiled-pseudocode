/*
 * XREFs of ProcLibTraceCoordinatedLpiStates @ 0x1C001CC50
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001C5F0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C001F218 (ProcLibTraceCoordinatedLpiRundown.c)
 */

__int64 ProcLibTraceCoordinatedLpiStates()
{
  unsigned int *v0; // rdi
  unsigned int v1; // ebx
  __int64 result; // rax

  v0 = (unsigned int *)qword_1C00139B8;
  v1 = 0;
  if ( qword_1C00139B8 && *(_DWORD *)qword_1C00139B8 )
  {
    do
    {
      result = ProcLibTraceCoordinatedLpiRundown(&v0[8 * v1 + 2 + 2 * v1]);
      ++v1;
    }
    while ( v1 < *v0 );
  }
  return result;
}

/*
 * XREFs of PspIsJobMovable @ 0x1409048D4
 * Callers:
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x140674D08 (PspGetJobAssignmentDisposition.c)
 * Callees:
 *     PsIsJobParentImmutable @ 0x140675068 (PsIsJobParentImmutable.c)
 */

char __fastcall PspIsJobMovable(__int64 a1)
{
  __int64 v1; // rcx
  char result; // al

  if ( *(_QWORD *)(a1 + 1568) != a1 )
    return 0;
  if ( PsIsJobParentImmutable(a1) )
    return 0;
  if ( *(_QWORD *)(v1 + 1056) != v1 + 1056 )
    return 0;
  result = 1;
  if ( *(_DWORD *)(v1 + 216) != 1 || *(_DWORD *)(v1 + 212) != 1 )
    return 0;
  return result;
}

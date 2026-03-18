/*
 * XREFs of PsIsJobParentImmutable @ 0x14062C400
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x14062C698 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x14090B7D4 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x140982DB0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsJobParentImmutable(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 1324) & 1) != 0 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 1072) )
    return 1;
  return result;
}

/*
 * XREFs of PsIsJobParentImmutable @ 0x140675068
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x140674D08 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x1409048D4 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x14097BC40 (ObCreateSiloRootDirectory.c)
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

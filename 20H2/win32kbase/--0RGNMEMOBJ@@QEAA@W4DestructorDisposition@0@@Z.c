/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C00A4380
 * Callers:
 *     <none>
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C344 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *a1, int a2)
{
  *((_DWORD *)a1 + 2) = a2;
  RGNMEMOBJ::vInitialize(a1, 0x70u);
  return a1;
}

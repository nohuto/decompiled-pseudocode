/*
 * XREFs of ViAllocateContextTable @ 0x1409C5454
 * Callers:
 *     VfInsertContext @ 0x14059AC90 (VfInsertContext.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1284 (ExAllocateFromNPagedLookasideList.c)
 */

char *__fastcall ViAllocateContextTable(__int16 a1)
{
  char *result; // rax

  result = (char *)ExAllocateFromNPagedLookasideList(&ViObjectContextTableLookaside);
  if ( result )
  {
    *((_DWORD *)result + 1) = 0;
    *((_WORD *)result + 1) = 6;
    *(_WORD *)result = a1;
    *(_OWORD *)(result + 8) = 0LL;
  }
  return result;
}

/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x140623674
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140623798 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryApplyObjectEvent @ 0x140763684 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140252950 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 */

BOOLEAN __fastcall PiDqQueryDeleteObjectFromResultSet(__int64 a1, void *a2)
{
  BOOLEAN result; // al
  PVOID Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  result = RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer);
  if ( result )
    return PiDmObjectRelease(Buffer);
  return result;
}

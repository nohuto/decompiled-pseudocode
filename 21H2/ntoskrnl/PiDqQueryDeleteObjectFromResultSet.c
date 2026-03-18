/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x1407734A4
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x140775D50 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryFreeActiveData @ 0x140776E5C (PiDqQueryFreeActiveData.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
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

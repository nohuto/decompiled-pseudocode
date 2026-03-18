/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x1406A02D0
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1406A03F4 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryApplyObjectEvent @ 0x14074BE34 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1402E5430 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1406A8D70 (PiDmObjectRelease.c)
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

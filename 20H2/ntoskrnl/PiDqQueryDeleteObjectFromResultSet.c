/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x1406D80D8
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1406D806C (PiDqQueryFreeActiveData.c)
 *     PiDqQueryApplyObjectEvent @ 0x14075EE34 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14023F7B0 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x14063F020 (PiDmObjectRelease.c)
 */

void __fastcall PiDqQueryDeleteObjectFromResultSet(__int64 a1, unsigned int *a2)
{
  unsigned int *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  if ( RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) )
    PiDmObjectRelease(Buffer);
}

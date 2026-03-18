/*
 * XREFs of KeDoesTebMatchThread @ 0x1405217C0
 * Callers:
 *     PspGetSetContextInternal @ 0x1406AC990 (PspGetSetContextInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090B458 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeDoesTebMatchThread(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( a2 )
    return a2 == *(_QWORD *)(a1 + 240);
  return result;
}

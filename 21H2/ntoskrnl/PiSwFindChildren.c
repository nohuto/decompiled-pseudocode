/*
 * XREFs of PiSwFindChildren @ 0x14076E82C
 * Callers:
 *     PiSwProcessParentStartIrp @ 0x1406E4E14 (PiSwProcessParentStartIrp.c)
 *     PiSwStopDestroy @ 0x140766F84 (PiSwStopDestroy.c)
 *     PipEnumerateCompleted @ 0x14076F8AC (PipEnumerateCompleted.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x14076E854 (PiSwFindBusRelations.c)
 */

__int64 PiSwFindChildren()
{
  __int64 BusRelations; // rcx
  __int64 result; // rax

  BusRelations = PiSwFindBusRelations();
  result = 0LL;
  if ( BusRelations )
    return BusRelations + 16;
  return result;
}

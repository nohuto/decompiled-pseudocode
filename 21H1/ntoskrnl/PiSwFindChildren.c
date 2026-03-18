/*
 * XREFs of PiSwFindChildren @ 0x14072C6EC
 * Callers:
 *     PipEnumerateCompleted @ 0x14072AA10 (PipEnumerateCompleted.c)
 *     PiSwStopDestroy @ 0x1407344C4 (PiSwStopDestroy.c)
 *     PiSwProcessParentStartIrp @ 0x1407595D8 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x14072C714 (PiSwFindBusRelations.c)
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

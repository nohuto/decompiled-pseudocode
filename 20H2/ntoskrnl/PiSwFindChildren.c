/*
 * XREFs of PiSwFindChildren @ 0x140741E68
 * Callers:
 *     PipEnumerateCompleted @ 0x1407342E0 (PipEnumerateCompleted.c)
 *     PiSwStopDestroy @ 0x140741C2C (PiSwStopDestroy.c)
 *     PiSwProcessParentStartIrp @ 0x140741DE8 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140741E90 (PiSwFindBusRelations.c)
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

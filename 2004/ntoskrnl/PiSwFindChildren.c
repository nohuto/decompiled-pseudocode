/*
 * XREFs of PiSwFindChildren @ 0x1407329D8
 * Callers:
 *     PipEnumerateCompleted @ 0x140725850 (PipEnumerateCompleted.c)
 *     PiSwStopDestroy @ 0x14073287C (PiSwStopDestroy.c)
 *     PiSwProcessParentStartIrp @ 0x140732958 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140732A00 (PiSwFindBusRelations.c)
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

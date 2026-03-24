/*
 * XREFs of PiSwFindChildren @ 0x14074705C
 * Callers:
 *     PiSwStopDestroy @ 0x140738C44 (PiSwStopDestroy.c)
 *     PipEnumerateCompleted @ 0x140745380 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x14076DD88 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140747084 (PiSwFindBusRelations.c)
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

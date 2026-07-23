/*
 * XREFs of PiSwFindChildren @ 0x14074721C
 * Callers:
 *     PiSwStopDestroy @ 0x140738E04 (PiSwStopDestroy.c)
 *     PipEnumerateCompleted @ 0x140745540 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x14076DF48 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140747244 (PiSwFindBusRelations.c)
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

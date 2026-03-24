/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x1409904F8
 * Callers:
 *     PfTAccessTracingStart @ 0x140990448 (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14099A9FC (PfTAccessTracingCleanup.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402ABF88 (PsGetNextPartition.c)
 */

void *__fastcall MmEnablePeriodicAccessClearing(char a1)
{
  void *v2; // rcx
  void *result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = PsGetNextPartition(v2);
    if ( !result )
      break;
    v2 = result;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)result + 6848LL) + 55LL) = a1;
  }
  return result;
}

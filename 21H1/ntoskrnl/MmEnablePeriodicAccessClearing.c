/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x14098C508
 * Callers:
 *     PfTAccessTracingStart @ 0x14098C458 (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14099606C (PfTAccessTracingCleanup.c)
 * Callees:
 *     PsGetNextPartition @ 0x140202C94 (PsGetNextPartition.c)
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

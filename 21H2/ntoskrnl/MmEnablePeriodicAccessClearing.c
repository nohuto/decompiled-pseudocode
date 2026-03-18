/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x140A485A0
 * Callers:
 *     PfTAccessTracingCleanup @ 0x140A483FC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140A484F0 (PfTAccessTracingStart.c)
 * Callees:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
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
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)result + 16600LL) + 55LL) = a1;
  }
  return result;
}

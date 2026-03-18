/*
 * XREFs of LoadMemDDB @ 0x1C0022558
 * Callers:
 *     Load @ 0x1C0022220 (Load.c)
 * Callees:
 *     LoadDDB @ 0x1C00225B8 (LoadDDB.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall LoadMemDDB(void *a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v5; // ebp

  if ( ghValidateTable && (v5 = ghValidateTable(a2, qword_1C0082968)) != 0 )
  {
    v3 = -1072431079;
    LogError(3222536217LL);
    AcpiDiagTraceAmlError(a1, 3222536217LL);
    PrintDebugMessage(81, v5, 0, 0, 0LL);
  }
  else
  {
    return (unsigned int)LoadDDB(a1);
  }
  return v3;
}

/*
 * XREFs of LoadMemDDB @ 0x1C0024B00
 * Callers:
 *     Load @ 0x1C0024B60 (Load.c)
 * Callees:
 *     LoadDDB @ 0x1C00234CC (LoadDDB.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LoadMemDDB(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v8; // ebp

  if ( ghValidateTable && (v8 = ghValidateTable(a2, qword_1C00832F0)) != 0 )
  {
    v6 = -1072431079;
    LogError(3222536217LL);
    AcpiDiagTraceAmlError(a1, 3222536217LL);
    PrintDebugMessage(81, v8, 0, 0, 0LL);
  }
  else
  {
    return (unsigned int)LoadDDB((struct _SLIST_ENTRY *)a1, a2, *(_QWORD *)(a1 + 80), a3);
  }
  return v6;
}

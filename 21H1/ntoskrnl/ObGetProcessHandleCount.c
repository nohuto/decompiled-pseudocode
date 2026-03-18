/*
 * XREFs of ObGetProcessHandleCount @ 0x1406E037C
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x1405D879C (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     EtwTraceAppStateChange @ 0x140664690 (EtwTraceAppStateChange.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140939EB4 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExHandleTableQuery @ 0x140616A60 (ExHandleTableQuery.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObGetProcessHandleCount(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int *v5; // rax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  v5 = (unsigned int *)ObReferenceProcessHandleTable(a1);
  if ( v5 )
  {
    ExHandleTableQuery(v5, &v7, a2);
    ExReleaseRundownProtection_0(a1 + 139);
    return v7;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return v2;
}

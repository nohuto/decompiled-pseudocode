/*
 * XREFs of ObGetProcessHandleCount @ 0x14070310C
 * Callers:
 *     EtwTraceAppStateChange @ 0x14061EF70 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x14065EA9C (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     EtwpProcessPerfCtrsRundown @ 0x14093B154 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1405E9CC4 (ObReferenceProcessHandleTable.c)
 *     ExHandleTableQuery @ 0x14069BAE0 (ExHandleTableQuery.c)
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

/*
 * XREFs of ObGetProcessHandleCount @ 0x1406D614C
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x14063252C (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     EtwTraceAppStateChange @ 0x14064FBB0 (EtwTraceAppStateChange.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140940F84 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExHandleTableQuery @ 0x140666450 (ExHandleTableQuery.c)
 *     ObReferenceProcessHandleTable @ 0x140678474 (ObReferenceProcessHandleTable.c)
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

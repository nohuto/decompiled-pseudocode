/*
 * XREFs of ObGetProcessHandleCount @ 0x1406138EC
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     EtwTraceAppStateChange @ 0x1406A3FC0 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1406F2410 (EtwpPsProvTraceProcess.c)
 *     EtwpProcessPerfCtrsRundown @ 0x14093E924 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExHandleTableQuery @ 0x140682B30 (ExHandleTableQuery.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObGetProcessHandleCount(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  v5 = ObReferenceProcessHandleTable(a1);
  if ( v5 )
  {
    ExHandleTableQuery(v5, &v7, a2);
    ExReleaseRundownProtection(a1 + 139);
    return v7;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return v2;
}

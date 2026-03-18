/*
 * XREFs of ObGetProcessHandleCount @ 0x14066C174
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x14070AFEC (EtwpPsProvTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x140712868 (EtwTraceAppStateChange.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1409EAFC8 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObReferenceProcessHandleTable @ 0x14066B3D8 (ObReferenceProcessHandleTable.c)
 *     ExHandleTableQuery @ 0x1407B6370 (ExHandleTableQuery.c)
 */

__int64 __fastcall ObGetProcessHandleCount(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // rax
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

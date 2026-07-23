/*
 * XREFs of PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408A14AC
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14050D160 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExEnumHandleTable @ 0x1405E3DF0 (ExEnumHandleTable.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstDeviceObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *v6; // rcx
  unsigned __int64 v8; // rax
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v12 = 0LL;
  v6 = 0LL;
  v13 = 0LL;
  while ( 1 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(v6);
    v10 = NextProcess;
    if ( !NextProcess )
      break;
    v8 = ObReferenceProcessHandleTable(NextProcess);
    if ( v8 )
    {
      *(_QWORD *)&v12 = a1;
      *((_QWORD *)&v12 + 1) = v10;
      *(_QWORD *)&v13 = a2;
      *((_QWORD *)&v13 + 1) = a3;
      v3 = (unsigned __int8)ExEnumHandleTable(
                              v8,
                              (__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64))PnpHandleProcessWalkWorker,
                              (__int64)&v12,
                              0LL);
      ExReleaseRundownProtection(v10 + 139);
      if ( v3 )
      {
        ObfDereferenceObjectWithTag(v10, 0x6E457350u);
        return v3;
      }
    }
    v6 = v10;
  }
  return v3;
}

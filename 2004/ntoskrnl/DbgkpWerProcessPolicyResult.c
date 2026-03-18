/*
 * XREFs of DbgkpWerProcessPolicyResult @ 0x1408865DC
 * Callers:
 *     DbgkWerCaptureLiveKernelDump @ 0x140885A40 (DbgkWerCaptureLiveKernelDump.c)
 * Callees:
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140885C90 (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x140885E38 (DbgkpWerCaptureLiveTriageDump.c)
 */

__int64 __fastcall DbgkpWerProcessPolicyResult(__int64 a1, int a2, __int64 a3, _BYTE *a4)
{
  *a4 = 1;
  if ( !a2 )
    return 0LL;
  *(_QWORD *)(a1 + 104) = a3;
  *(_DWORD *)(a1 + 100) = a2;
  if ( a2 == 1 )
    return DbgkpWerCaptureLiveTriageDump(a1);
  if ( a2 == 2 )
    return DbgkpWerCaptureLiveFullDump(a1, a4);
  DbgPrintEx(5u, 0, "DBGK: DbgkpWerProcessPolicyResult: Unknown policy option %d\n\n", a2);
  return 3221225659LL;
}

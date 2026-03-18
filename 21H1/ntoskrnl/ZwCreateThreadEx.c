/*
 * XREFs of ZwCreateThreadEx @ 0x1403F3B50
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x1406422F8 (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x140882940 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x1408BF954 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

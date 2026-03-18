/*
 * XREFs of ZwCreateThreadEx @ 0x1403F99B0
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x1407101D4 (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x1408897B0 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C6AE4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

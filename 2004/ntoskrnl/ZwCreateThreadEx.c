/*
 * XREFs of ZwCreateThreadEx @ 0x1403F4DE0
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x14060D1A8 (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x140883C60 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C0CA4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

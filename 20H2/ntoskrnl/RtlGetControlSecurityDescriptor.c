/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x1406FB1F0
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x1403F77B0 (AdtpIsSDValidSelfRelative.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405DFEC4 (ObpInsertOrLocateNamedObject.c)
 *     SepHasCriticalAcesRemoved @ 0x1405E2238 (SepHasCriticalAcesRemoved.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB214 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetControlSecurityDescriptor(unsigned __int8 *a1, _WORD *a2, _DWORD *a3)
{
  *a3 = *a1;
  if ( *a1 != 1 )
    return 3221225560LL;
  *a2 = *((_WORD *)a1 + 1);
  return 0LL;
}

/*
 * XREFs of ExpLicUpdateChecksum @ 0x1405B3058
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1405B2EF8 (ExpGetLicenseTamperState.c)
 *     sub_14094D7E0 @ 0x14094D7E0 (sub_14094D7E0.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLicUpdateChecksum(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  return result;
}

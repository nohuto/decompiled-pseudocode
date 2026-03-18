/*
 * XREFs of ExpLicUpdateChecksum @ 0x1405AD8C8
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1405AD768 (ExpGetLicenseTamperState.c)
 *     sub_14094A080 @ 0x14094A080 (sub_14094A080.c)
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
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

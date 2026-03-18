/*
 * XREFs of ExpLicUpdateChecksum @ 0x1405B1428
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1405B12C8 (ExpGetLicenseTamperState.c)
 *     sub_14094FE40 @ 0x14094FE40 (sub_14094FE40.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
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

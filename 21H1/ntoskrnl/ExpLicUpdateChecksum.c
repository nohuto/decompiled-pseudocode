/*
 * XREFs of ExpLicUpdateChecksum @ 0x1405AD1A8
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1405AD048 (ExpGetLicenseTamperState.c)
 *     sub_140948CE0 @ 0x140948CE0 (sub_140948CE0.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
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

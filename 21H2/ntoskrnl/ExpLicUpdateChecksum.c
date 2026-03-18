/*
 * XREFs of ExpLicUpdateChecksum @ 0x140639D84
 * Callers:
 *     ExpGetLicenseTamperState @ 0x140639C30 (ExpGetLicenseTamperState.c)
 *     sub_1409F9AD0 @ 0x1409F9AD0 (sub_1409F9AD0.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
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

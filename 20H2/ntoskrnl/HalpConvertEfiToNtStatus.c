/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x1404C25A4
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x1404C1E1C (HalEfiGetEnvironmentVariable.c)
 *     HalEfiGetTime @ 0x1404C1EA8 (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x1404C20D8 (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x1404C215C (HalEfiQueryVariableInfo.c)
 *     HalEfiSetEnvironmentVariable @ 0x1404C2258 (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x1404C22F0 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x1404C2518 (HalEfiUpdateCapsule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpConvertEfiToNtStatus(__int64 a1)
{
  __int64 v1; // rax
  __int64 *i; // rdx

  v1 = 0LL;
  for ( i = HalEfiToNtStatusMappings; *i != a1; i += 2 )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x20 )
      return 3221225473LL;
  }
  return LODWORD(HalEfiToNtStatusMappings[2 * v1 + 1]);
}

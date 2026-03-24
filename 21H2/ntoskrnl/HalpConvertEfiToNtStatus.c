/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x1404C3F74
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x1404C37EC (HalEfiGetEnvironmentVariable.c)
 *     HalEfiGetTime @ 0x1404C3878 (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x1404C3AA8 (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x1404C3B2C (HalEfiQueryVariableInfo.c)
 *     HalEfiSetEnvironmentVariable @ 0x1404C3C28 (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x1404C3CC0 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x1404C3EE8 (HalEfiUpdateCapsule.c)
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

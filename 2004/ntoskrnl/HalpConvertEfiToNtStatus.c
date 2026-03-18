/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x1404BF084
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x1404BE8FC (HalEfiGetEnvironmentVariable.c)
 *     HalEfiGetTime @ 0x1404BE988 (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x1404BEBB8 (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x1404BEC3C (HalEfiQueryVariableInfo.c)
 *     HalEfiSetEnvironmentVariable @ 0x1404BED38 (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x1404BEDD0 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x1404BEFF8 (HalEfiUpdateCapsule.c)
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

/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x1405104B0
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x140456B94 (HalEfiGetEnvironmentVariable.c)
 *     HalEfiGetTime @ 0x14050FD3C (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x14050FF6C (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x14050FFFC (HalEfiQueryVariableInfo.c)
 *     HalEfiSetEnvironmentVariable @ 0x14051011C (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x1405101D0 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14051040C (HalEfiUpdateCapsule.c)
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

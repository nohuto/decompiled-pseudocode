/*
 * XREFs of HalpEfiIncrementEfiCall @ 0x140456C50
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x140456B94 (HalEfiGetEnvironmentVariable.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140508990 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalEfiGetTime @ 0x14050FD3C (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x14050FF6C (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x14050FFFC (HalEfiQueryVariableInfo.c)
 *     HalEfiResetSystem @ 0x140510080 (HalEfiResetSystem.c)
 *     HalEfiSetEnvironmentVariable @ 0x14051011C (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x1405101D0 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14051040C (HalEfiUpdateCapsule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiIncrementEfiCall(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(&HalpEfiCalls);
  if ( a1 )
    return (unsigned int)_InterlockedIncrement(a1);
  return result;
}

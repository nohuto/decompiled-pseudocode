/*
 * XREFs of HalpEfiStartRuntimeCode @ 0x1404C41E8
 * Callers:
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404BC160 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalEfiGetEnvironmentVariable @ 0x1404C3A2C (HalEfiGetEnvironmentVariable.c)
 *     HalEfiGetTime @ 0x1404C3AB8 (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x1404C3CE8 (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x1404C3D6C (HalEfiQueryVariableInfo.c)
 *     HalEfiResetSystem @ 0x1404C3DE0 (HalEfiResetSystem.c)
 *     HalEfiSetEnvironmentVariable @ 0x1404C3E68 (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x1404C3F00 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x1404C4128 (HalEfiUpdateCapsule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiStartRuntimeCode(unsigned int a1)
{
  __int64 result; // rax
  int *v3; // rdx

  result = KeGetCurrentIrql();
  v3 = (int *)&KeGetPcr()->HalReserved[8];
  if ( (unsigned __int8)result < 2u )
  {
    while ( 1 )
    {
      while ( *v3 < 0 )
        _mm_pause();
      _m_prefetchw(v3);
      result = (unsigned int)_InterlockedOr(v3, a1);
      if ( (int)result >= 0 )
        break;
      _InterlockedAnd(v3, ~a1);
    }
  }
  else
  {
    _InterlockedOr(v3, a1);
  }
  return result;
}

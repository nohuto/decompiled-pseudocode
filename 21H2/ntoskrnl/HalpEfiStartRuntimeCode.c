/*
 * XREFs of HalpEfiStartRuntimeCode @ 0x140456C76
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

/*
 * XREFs of HviGetPartitionIsolationType @ 0x1403F97C0
 * Callers:
 *     <none>
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403AE390 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 HviGetPartitionIsolationType()
{
  if ( !HviIsHypervisorMicrosoftCompatible() )
    return 0LL;
  _RAX = 1073741827LL;
  __asm { cpuid }
  if ( (__PAIR64__(_RBX, _RAX) & 0x40000000000000LL) == 0 )
    return 0LL;
  _RAX = 1073741836LL;
  __asm { cpuid }
  return _RBX & 0xF;
}

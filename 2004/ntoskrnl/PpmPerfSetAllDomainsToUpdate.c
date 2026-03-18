/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x14037EAB8
 * Callers:
 *     PpmCheckStart @ 0x14021EF80 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x140767370 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407791FC (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfSetAllDomainsToUpdate()
{
  __int64 result; // rax

  for ( result = PpmPerfDomainHead; (__int64 *)result != &PpmPerfDomainHead; result = *(_QWORD *)result )
    *(_BYTE *)(result + 765) = 1;
  return result;
}

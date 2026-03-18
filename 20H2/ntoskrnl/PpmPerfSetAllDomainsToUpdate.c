/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x1403807E8
 * Callers:
 *     PpmCheckStart @ 0x1402888C0 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x1407763A0 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407877FC (PpmPerfUpdateDomainPolicy.c)
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

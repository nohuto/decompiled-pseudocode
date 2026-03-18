/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x14037DFF8
 * Callers:
 *     PpmCheckStart @ 0x140277FD0 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x1407659B0 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140776DEC (PpmPerfUpdateDomainPolicy.c)
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

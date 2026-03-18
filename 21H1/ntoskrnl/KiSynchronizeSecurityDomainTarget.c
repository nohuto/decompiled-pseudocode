/*
 * XREFs of KiSynchronizeSecurityDomainTarget @ 0x140322960
 * Callers:
 *     KeSynchronizeSecurityDomain @ 0x14030CD8C (KeSynchronizeSecurityDomain.c)
 * Callees:
 *     <none>
 */

__int64 KiSynchronizeSecurityDomainTarget()
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  result = (__int64)KeGetCurrentThread();
  CurrentPrcb = KeGetCurrentPrcb();
  _m_prefetchw((char *)&CurrentPrcb->2 + 14);
  if ( (*((_BYTE *)&CurrentPrcb->2 + 14) & 4) != 0 )
  {
    result = *(_QWORD *)(*(_QWORD *)(result + 184) + 2528LL);
    if ( result != CurrentPrcb->TrappedSecurityDomain )
    {
      result = 2LL;
      _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
    }
  }
  return result;
}

/*
 * XREFs of KiSynchronizeSecurityDomainTarget @ 0x1402D3650
 * Callers:
 *     KeSynchronizeSecurityDomain @ 0x1402BC338 (KeSynchronizeSecurityDomain.c)
 * Callees:
 *     <none>
 */

__int64 KiSynchronizeSecurityDomainTarget()
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  result = (__int64)KeGetCurrentThread();
  CurrentPrcb = KeGetCurrentPrcb();
  _m_prefetchw((char *)&CurrentPrcb->2 + 20);
  if ( (*((_BYTE *)&CurrentPrcb->2 + 20) & 4) != 0 )
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

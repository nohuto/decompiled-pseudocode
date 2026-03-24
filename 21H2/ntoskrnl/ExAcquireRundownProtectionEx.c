/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x140360A00
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     ExReferenceCallBackBlock @ 0x14025A950 (ExReferenceCallBackBlock.c)
 *     PfSnReferenceProcessTrace @ 0x14031E2C0 (PfSnReferenceProcessTrace.c)
 *     PfSnAddProcessTrace @ 0x1403608B0 (PfSnAddProcessTrace.c)
 *     ExCompareExchangeCallBack @ 0x1403A7E6C (ExCompareExchangeCallBack.c)
 *     PspRundownProcess @ 0x14090B24C (PspRundownProcess.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rtt

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
    return 0;
  v3 = 2 * Count;
  while ( 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v3 + v2, v2);
    if ( v4 == v2 )
      break;
    if ( (v2 & 1) != 0 )
      return 0;
  }
  return 1;
}

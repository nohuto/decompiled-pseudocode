/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x1402F6A40
 * Callers:
 *     ExReferenceCallBackBlock @ 0x140281870 (ExReferenceCallBackBlock.c)
 *     PfSnReferenceProcessTrace @ 0x1402CD7F0 (PfSnReferenceProcessTrace.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     PfSnAddProcessTrace @ 0x14035FDEC (PfSnAddProcessTrace.c)
 *     ExCompareExchangeCallBack @ 0x1403C7678 (ExCompareExchangeCallBack.c)
 *     PspRundownProcess @ 0x1409B18CC (PspRundownProcess.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rtt

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 2 * Count + v2, v2);
    if ( v3 == v2 )
      break;
    if ( (v2 & 1) != 0 )
      return 0;
  }
  return 1;
}

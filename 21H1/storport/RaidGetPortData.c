/*
 * XREFs of RaidGetPortData @ 0x1C000C8C4
 * Callers:
 *     StorpLogStatistics @ 0x1C000C5E0 (StorpLogStatistics.c)
 *     StorPortInitialize @ 0x1C0034850 (StorPortInitialize.c)
 *     StorEtwEnableCallback @ 0x1C004D878 (StorEtwEnableCallback.c)
 * Callees:
 *     <none>
 */

char *RaidGetPortData()
{
  char *result; // rax
  __int64 v1; // rbx
  _QWORD *v2; // rax

  if ( RaidpPortData )
  {
    _InterlockedIncrement((volatile signed __int32 *)RaidpPortData);
    return (char *)RaidpPortData;
  }
  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x44506152u);
  v1 = (__int64)result;
  if ( result )
  {
    v2 = result + 8;
    v2[1] = v2;
    *v2 = v2;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 24));
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)v1 = 1;
    RaidpPortData = v1;
    return (char *)RaidpPortData;
  }
  return result;
}

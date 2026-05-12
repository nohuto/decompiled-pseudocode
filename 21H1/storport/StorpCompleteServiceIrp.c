/*
 * XREFs of StorpCompleteServiceIrp @ 0x1C0039D74
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorpCompleteServiceIrp(__int64 a1, IRP *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx

  v2 = 0;
  if ( a2 )
  {
    v3 = **(_QWORD **)(a1 - 16);
    RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 264));
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v2;
}

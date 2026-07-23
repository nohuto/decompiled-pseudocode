/*
 * XREFs of PnprQuiesce @ 0x14050F958
 * Callers:
 *     PnprEndMirroring @ 0x1409AE650 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x1409AE72C (PnprInitiateReplaceOperation.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     PnprLockPagesForReplace @ 0x1408AE124 (PnprLockPagesForReplace.c)
 *     PnprQuiesceProcessors @ 0x1409AF6A4 (PnprQuiesceProcessors.c)
 */

__int64 PnprQuiesce()
{
  int v0; // ebx
  __int64 v1; // rax
  int v2; // ecx
  int v3; // ecx

  v0 = 0;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    PnprLockPagesForReplace();
    goto LABEL_9;
  }
  KeSetEvent((PRKEVENT)(PnprContext + 20760), 0, 1u);
  KeWaitForSingleObject((PVOID)(PnprContext + 20784), Executive, 0, 0, 0LL);
  v1 = PnprContext;
  v0 = *(_DWORD *)(PnprContext + 20856);
  if ( v0 >= 0 )
  {
LABEL_9:
    PnprQuiesceProcessors();
    return (unsigned int)v0;
  }
  v2 = *(_DWORD *)(PnprContext + 20984);
  if ( !v2 )
    v2 = 1899;
  *(_DWORD *)(PnprContext + 20984) = v2;
  v3 = *(_DWORD *)(v1 + 20988);
  if ( !v3 )
    v3 = 1;
  *(_DWORD *)(v1 + 20988) = v3;
  return (unsigned int)v0;
}

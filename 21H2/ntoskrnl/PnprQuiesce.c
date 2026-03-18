/*
 * XREFs of PnprQuiesce @ 0x140563058
 * Callers:
 *     PnprEndMirroring @ 0x140A67BA0 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140A67C74 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PnprLockPagesForReplace @ 0x140952A20 (PnprLockPagesForReplace.c)
 *     PnprQuiesceProcessors @ 0x140A68BE8 (PnprQuiesceProcessors.c)
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
  KeSetEvent((PRKEVENT)(PnprContext + 33048), 0, 1u);
  KeWaitForSingleObject((PVOID)(PnprContext + 33072), Executive, 0, 0, 0LL);
  v1 = PnprContext;
  v0 = *(_DWORD *)(PnprContext + 33144);
  if ( v0 >= 0 )
  {
LABEL_9:
    PnprQuiesceProcessors();
    return (unsigned int)v0;
  }
  v2 = *(_DWORD *)(PnprContext + 33272);
  if ( !v2 )
    v2 = 1892;
  *(_DWORD *)(PnprContext + 33272) = v2;
  v3 = *(_DWORD *)(v1 + 33276);
  if ( !v3 )
    v3 = 1;
  *(_DWORD *)(v1 + 33276) = v3;
  return (unsigned int)v0;
}

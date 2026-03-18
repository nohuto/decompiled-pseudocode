/*
 * XREFs of PnprQuiesce @ 0x14050A2B8
 * Callers:
 *     PnprEndMirroring @ 0x1409AA8B0 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x1409AA98C (PnprInitiateReplaceOperation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PnprLockPagesForReplace @ 0x1408AAEC4 (PnprLockPagesForReplace.c)
 *     PnprQuiesceProcessors @ 0x1409AB904 (PnprQuiesceProcessors.c)
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

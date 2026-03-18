/*
 * XREFs of PiPnpRtlFreePanelRemoveInfo @ 0x140948594
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140948638 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140948AC4 (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreePanelRemoveInfo(unsigned int **P)
{
  unsigned int *v2; // rcx
  unsigned int *v3; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}

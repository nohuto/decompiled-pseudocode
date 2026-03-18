/*
 * XREFs of PiPnpRtlFreePanelRemoveInfo @ 0x140722994
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140722604 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x1408A0234 (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1405DA740 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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

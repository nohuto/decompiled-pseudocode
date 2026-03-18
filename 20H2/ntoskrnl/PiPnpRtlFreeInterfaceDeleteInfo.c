/*
 * XREFs of PiPnpRtlFreeInterfaceDeleteInfo @ 0x140730960
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14072EC98 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x14063F020 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeInterfaceDeleteInfo(unsigned int **P)
{
  unsigned int *v2; // rcx
  unsigned int *v3; // rcx
  unsigned int *v4; // rcx
  unsigned int *v5; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    v4 = P[2];
    if ( v4 )
      PiDmObjectRelease(v4);
    v5 = P[3];
    if ( v5 )
      PiDmObjectRelease(v5);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}

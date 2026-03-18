/*
 * XREFs of PiPnpRtlFreeInstallerClassChangeInfo @ 0x140733C28
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140733A90 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1405DA740 (PiDmObjectRelease.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14073546C (PiDmRemoveCacheReferenceForObject.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeInstallerClassChangeInfo(unsigned int **P)
{
  unsigned int *v2; // rcx
  unsigned int *v3; // rcx
  unsigned int *v4; // rax

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
    {
      PiDmRemoveCacheReferenceForObject(v4[7], *((_QWORD *)v4 + 2));
      PiDmObjectRelease(P[2]);
    }
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}

/*
 * XREFs of ?TryProbeForRead@@YG_NPAXII@Z @ 0x8D2F6
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z @ 0x8CDC4 (-ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z.c)
 *     ?_ValidateAllocationPair@UmfdAllocation@@CG_NW4FontDriverType@@KPAV1@PAXIP6G_N22I@Z@Z @ 0xE05B8 (-_ValidateAllocationPair@UmfdAllocation@@CG_NW4FontDriverType@@KPAV1@PAXIP6G_N22I@Z@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

char __userpurge TryProbeForRead@<al>(int a1@<edx>, unsigned int a2@<ecx>, void *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v6; // ecx

  if ( a1 )
  {
    v6 = a2 + a1;
    if ( a2 + a1 > _MmUserProbeAddress || v6 < a2 )
      *(_BYTE *)_MmUserProbeAddress = 0;
  }
  return 1;
}

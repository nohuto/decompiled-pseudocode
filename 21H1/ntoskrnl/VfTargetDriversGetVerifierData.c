/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x1409D3DD0
 * Callers:
 *     VfUtilGetDifPluginDriverData @ 0x14059ABA0 (VfUtilGetDifPluginDriverData.c)
 *     VfUtilCheckRuleEnforcement @ 0x1409C35BC (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverName @ 0x1409C3750 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x1409C3780 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x1409C37A0 (VfUtilIsBootDriver.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x1409D3EC0 (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x14059C1DC (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x1409C58A0 (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VfTargetDriversGetVerifierData(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  _QWORD *Node; // rax

  if ( VfDriverIsKernelImageAddress(a1) )
  {
    if ( !KernelVerifier )
      return 0LL;
  }
  else if ( KernelVerifier )
  {
    if ( dword_140C1D068 < 2 )
      return 0LL;
  }
  else if ( !dword_140C1D068 )
  {
    return 0LL;
  }
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}

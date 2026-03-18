/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x1409D3E30
 * Callers:
 *     VfUtilGetDifPluginDriverData @ 0x14059B290 (VfUtilGetDifPluginDriverData.c)
 *     VfUtilCheckRuleEnforcement @ 0x1409C35CC (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverName @ 0x1409C3760 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x1409C3790 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x1409C37B0 (VfUtilIsBootDriver.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x1409D3F20 (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x14059C8CC (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x1409C58B0 (VfDriverIsKernelImageAddress.c)
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
    if ( dword_140C1D108 < 2 )
      return 0LL;
  }
  else if ( !dword_140C1D108 )
  {
    return 0LL;
  }
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}

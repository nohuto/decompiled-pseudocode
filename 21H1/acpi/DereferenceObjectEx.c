/*
 * XREFs of DereferenceObjectEx @ 0x1C00039E4
 * Callers:
 *     FreeObjData @ 0x1C0003010 (FreeObjData.c)
 *     FreeNameSpaceObjects @ 0x1C0003690 (FreeNameSpaceObjects.c)
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     RunContext @ 0x1C0004A10 (RunContext.c)
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     DerefOf @ 0x1C000B080 (DerefOf.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     PerformMutexDriverCallbacks @ 0x1C00100C8 (PerformMutexDriverCallbacks.c)
 *     AMLIEvalPackageElement @ 0x1C0012120 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0013CE8 (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     EnableDisableCMOSRegions @ 0x1C00162A0 (EnableDisableCMOSRegions.c)
 *     AMLIIterateSiblingsNext @ 0x1C0017300 (AMLIIterateSiblingsNext.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0018240 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C0018810 (GetPciAddressWorker.c)
 *     ACPIDockIsDockDevice @ 0x1C00209E0 (ACPIDockIsDockDevice.c)
 *     ParseNameObj @ 0x1C00216C0 (ParseNameObj.c)
 *     Field @ 0x1C00218B0 (Field.c)
 *     ParseField @ 0x1C0021AD0 (ParseField.c)
 *     CreateNativeNameSpaceObject @ 0x1C0022D64 (CreateNativeNameSpaceObject.c)
 *     Alias @ 0x1C0022FC0 (Alias.c)
 *     AMLIApplyNamespaceOverride @ 0x1C00234A0 (AMLIApplyNamespaceOverride.c)
 *     IndexField @ 0x1C0023590 (IndexField.c)
 *     Load @ 0x1C0024B60 (Load.c)
 *     AccessFieldData @ 0x1C0031B7C (AccessFieldData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005C8C0 (InternalRawAccessOpRegionHandler.c)
 *     Simulator_EvaluateNode @ 0x1C0063970 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0063C38 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0064090 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00641B8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0064694 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C00647FC (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0064970 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0064D04 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0064E94 (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C0065718 (ParseDLMObjectInternal.c)
 *     DebugNotify @ 0x1C0065FB0 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C00662B0 (DebugRunMethod.c)
 *     BankField @ 0x1C0066E40 (BankField.c)
 *     FreeContext @ 0x1C0067EE4 (FreeContext.c)
 *     LoadTable @ 0x1C0069430 (LoadTable.c)
 *     ParseNestedContext @ 0x1C006BB60 (ParseNestedContext.c)
 *     AMLIInitialize @ 0x1C00BCBA0 (AMLIInitialize.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003690 (FreeNameSpaceObjects.c)
 */

void __fastcall DereferenceObjectEx(unsigned __int64 a1)
{
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF) == 1 )
  {
    *(_WORD *)(a1 + 64) |= 4u;
    if ( (*(_WORD *)(a1 + 64) & 0x40) == 0 )
      FreeNameSpaceObjects(a1);
  }
}

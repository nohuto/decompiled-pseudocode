/*
 * XREFs of ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00A6138
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C0069ADC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00A5E98 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C00A5F18 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C00A63BC (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0063F80 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00A61A8 (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 */

bool __fastcall InputConfig::Mouse::RegionFromPoint(struct tagPOINT a1, struct CLockedInputSpaceRegion *a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v5);
  v5[0] = *((_QWORD *)gpInputConfig + 3);
  LOBYTE(a1.x) = InputConfig::RegionFromPoint((const struct CLockedInputSpace *)v5, a1, a2);
  ExReleaseResourceLite(*(PERESOURCE *)v5[1]);
  KeLeaveCriticalRegion();
  return a1.x;
}

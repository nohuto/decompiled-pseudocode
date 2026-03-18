/*
 * XREFs of AMLIIterateParentNext @ 0x1C00083A0
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x1C000A0B4 (OSNotifyCreateOperationRegion.c)
 *     GetOpRegionScopeWorker @ 0x1C001CCA0 (GetOpRegionScopeWorker.c)
 *     OSNotifyDeviceCheck @ 0x1C0059804 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C0059A20 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C005C0A8 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000A040 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall AMLIIterateParentNext(__int64 a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent(a1);
  AMLIDereferenceHandleEx(a1);
  return v2;
}

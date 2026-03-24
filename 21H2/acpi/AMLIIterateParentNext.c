/*
 * XREFs of AMLIIterateParentNext @ 0x1C002F1F4
 * Callers:
 *     GetOpRegionScopeWorker @ 0x1C0017D20 (GetOpRegionScopeWorker.c)
 *     OSNotifyCreateOperationRegion @ 0x1C00182E8 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyDeviceEnum @ 0x1C002F0AC (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceCheck @ 0x1C0058AC4 (OSNotifyDeviceCheck.c)
 *     AcpiHandleInternalNotify @ 0x1C005B1E8 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C001B348 (AMLIGetParent.c)
 */

__int64 __fastcall AMLIIterateParentNext(__int64 a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent(a1);
  AMLIDereferenceHandleEx(a1);
  return v2;
}

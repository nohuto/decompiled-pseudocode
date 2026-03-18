/*
 * XREFs of AMLIIterateParentNext @ 0x1C002EF94
 * Callers:
 *     GetOpRegionScopeWorker @ 0x1C0017AC0 (GetOpRegionScopeWorker.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0018088 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyDeviceEnum @ 0x1C002EE4C (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceCheck @ 0x1C0058934 (OSNotifyDeviceCheck.c)
 *     AcpiHandleInternalNotify @ 0x1C005B058 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C001B0E8 (AMLIGetParent.c)
 */

__int64 __fastcall AMLIIterateParentNext(__int64 a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent(a1);
  AMLIDereferenceHandleEx(a1);
  return v2;
}

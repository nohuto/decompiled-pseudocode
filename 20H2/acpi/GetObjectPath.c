/*
 * XREFs of GetObjectPath @ 0x1C0023838
 * Callers:
 *     ProcessEvalObj @ 0x1C0001CF0 (ProcessEvalObj.c)
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     SyncEvalObject @ 0x1C00040D0 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C00054D0 (AsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0012120 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0013CE8 (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     Acquire @ 0x1C0022A90 (Acquire.c)
 *     Release @ 0x1C0022C00 (Release.c)
 *     CreateNativeNameSpaceObject @ 0x1C0022D64 (CreateNativeNameSpaceObject.c)
 *     GetFieldUnitRegionObj @ 0x1C0024698 (GetFieldUnitRegionObj.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0063B60 (Simulator_NotifyNamespaceCollision.c)
 *     DebugNotify @ 0x1C0065FB0 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C00662B0 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C00668C0 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C00675A8 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C006826C (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C0068870 (ResetSignal.c)
 *     Wait @ 0x1C006AF90 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C00093E0 (GetObjectPathNoLock.c)
 */

_QWORD *__fastcall GetObjectPath(__int64 a1)
{
  KIRQL v2; // bl
  _QWORD *ObjectPathNoLock; // rdi

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ObjectPathNoLock = GetObjectPathNoLock(a1);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return ObjectPathNoLock;
}

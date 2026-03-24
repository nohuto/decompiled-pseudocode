/*
 * XREFs of GetObjectPath @ 0x1C0023A98
 * Callers:
 *     ProcessEvalObj @ 0x1C0001CF0 (ProcessEvalObj.c)
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     SyncEvalObject @ 0x1C0004490 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0012380 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0013F48 (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     Acquire @ 0x1C0022CF0 (Acquire.c)
 *     Release @ 0x1C0022E60 (Release.c)
 *     CreateNativeNameSpaceObject @ 0x1C0022FC4 (CreateNativeNameSpaceObject.c)
 *     GetFieldUnitRegionObj @ 0x1C00248F8 (GetFieldUnitRegionObj.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0063CF0 (Simulator_NotifyNamespaceCollision.c)
 *     DebugNotify @ 0x1C0066140 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0066440 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C0066A50 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0067738 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C00683FC (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C0068A00 (ResetSignal.c)
 *     Wait @ 0x1C006B120 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C00097A0 (GetObjectPathNoLock.c)
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

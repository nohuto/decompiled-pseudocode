/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14022D790 (CcInitializeCacheMapEx.c)
 *     ExDeleteResourceLite @ 0x140231040 (ExDeleteResourceLite.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140232608 (CcDereferenceSharedCacheMapFileObject.c)
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     PspRevertContainerImpersonation @ 0x14026D9F0 (PspRevertContainerImpersonation.c)
 *     IopCallDriverReference @ 0x14027AD40 (IopCallDriverReference.c)
 *     ExReinitializeResourceLite @ 0x1402DCC60 (ExReinitializeResourceLite.c)
 *     KiAbProcessThreadLocks @ 0x1402DD1D4 (KiAbProcessThreadLocks.c)
 *     FsRtlpClearOwner @ 0x1402F5CF4 (FsRtlpClearOwner.c)
 *     ExReturnPoolQuota @ 0x1402FF25C (ExReturnPoolQuota.c)
 *     MmChangeSectionBackingFile @ 0x140313464 (MmChangeSectionBackingFile.c)
 *     IopBoostThreadCallback @ 0x140316D40 (IopBoostThreadCallback.c)
 *     CcChangeBackingFileObject @ 0x1404E3418 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x14051C790 (KiMonitorCacheErrata.c)
 *     VrpDestroyNamespaceNode @ 0x1405C92D0 (VrpDestroyNamespaceNode.c)
 *     VrpFreeKeyContext @ 0x1405CB270 (VrpFreeKeyContext.c)
 *     PspChargeProcessWakeCounter @ 0x14060F300 (PspChargeProcessWakeCounter.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14030B7E0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}

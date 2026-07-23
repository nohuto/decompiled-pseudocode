/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0
 * Callers:
 *     ExReturnPoolQuota @ 0x14022CF2C (ExReturnPoolQuota.c)
 *     MmChangeSectionBackingFile @ 0x140241634 (MmChangeSectionBackingFile.c)
 *     IopBoostThreadCallback @ 0x140244580 (IopBoostThreadCallback.c)
 *     PspRevertContainerImpersonation @ 0x1402C43E0 (PspRevertContainerImpersonation.c)
 *     IopCallDriverReference @ 0x1402D0580 (IopCallDriverReference.c)
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 *     KiAbProcessThreadLocks @ 0x1402FBE14 (KiAbProcessThreadLocks.c)
 *     ExDeleteResourceLite @ 0x1402FFDF0 (ExDeleteResourceLite.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1403004D4 (CcDereferenceSharedCacheMapFileObject.c)
 *     ExReinitializeResourceLite @ 0x140302670 (ExReinitializeResourceLite.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     FsRtlpClearOwner @ 0x140374DC8 (FsRtlpClearOwner.c)
 *     CcChangeBackingFileObject @ 0x1404E8D28 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x1405224D0 (KiMonitorCacheErrata.c)
 *     VrpDestroyNamespaceNode @ 0x1405D3260 (VrpDestroyNamespaceNode.c)
 *     VrpFreeKeyContext @ 0x1405D5A80 (VrpFreeKeyContext.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     PspChargeProcessWakeCounter @ 0x1406D6270 (PspChargeProcessWakeCounter.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14023A834 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
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
    ObpDeferObjectDeletion((signed __int64)Object - 48);
  }
}

/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x140217F10
 * Callers:
 *     IopCallDriverReference @ 0x14020A830 (IopCallDriverReference.c)
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x140242694 (KiAbProcessThreadLocks.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140247FA8 (CcDereferenceSharedCacheMapFileObject.c)
 *     PspRevertContainerImpersonation @ 0x14027F410 (PspRevertContainerImpersonation.c)
 *     CcInitializeCacheMapEx @ 0x140291D10 (CcInitializeCacheMapEx.c)
 *     ExDeleteResourceLite @ 0x14029DAD0 (ExDeleteResourceLite.c)
 *     ExReturnPoolQuota @ 0x14030E6FC (ExReturnPoolQuota.c)
 *     MmChangeSectionBackingFile @ 0x1403218A4 (MmChangeSectionBackingFile.c)
 *     IopBoostThreadCallback @ 0x1403254B0 (IopBoostThreadCallback.c)
 *     ExReinitializeResourceLite @ 0x14035B400 (ExReinitializeResourceLite.c)
 *     FsRtlpClearOwner @ 0x140375064 (FsRtlpClearOwner.c)
 *     CcChangeBackingFileObject @ 0x1404E6F58 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x1405207B0 (KiMonitorCacheErrata.c)
 *     VrpDestroyNamespaceNode @ 0x1405D0860 (VrpDestroyNamespaceNode.c)
 *     VrpFreeKeyContext @ 0x1405D2CA0 (VrpFreeKeyContext.c)
 *     PspChargeProcessWakeCounter @ 0x1405EE0B0 (PspChargeProcessWakeCounter.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14031A0E0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
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

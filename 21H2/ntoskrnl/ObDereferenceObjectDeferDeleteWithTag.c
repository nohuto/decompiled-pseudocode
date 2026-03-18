/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0
 * Callers:
 *     CcChangeBackingFileObject @ 0x140201AC4 (CcChangeBackingFileObject.c)
 *     IopDeleteFileObjectExtension @ 0x140203B8C (IopDeleteFileObjectExtension.c)
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     ExReinitializeResourceLite @ 0x14021A5F0 (ExReinitializeResourceLite.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140230680 (ObFastDereferenceObjectDeferDelete.c)
 *     FsRtlpClearOwner @ 0x140240DB4 (FsRtlpClearOwner.c)
 *     IopBoostThreadCallback @ 0x14024EB80 (IopBoostThreadCallback.c)
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     PspRevertContainerImpersonation @ 0x1402A86B0 (PspRevertContainerImpersonation.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     IopCallDriverReference @ 0x1402F8AE0 (IopCallDriverReference.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MiEmptyPageAccessLog @ 0x140334400 (MiEmptyPageAccessLog.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     KiAbProcessThreadLocks @ 0x1403591D8 (KiAbProcessThreadLocks.c)
 *     ExpReturnPoolQuota @ 0x140367DEC (ExpReturnPoolQuota.c)
 *     KiMonitorCacheErrata @ 0x140577D00 (KiMonitorCacheErrata.c)
 *     ObpUnlockDirectory @ 0x14066960C (ObpUnlockDirectory.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x14069A534 (ObpLockUnrelatedDirectoryShared.c)
 *     VrpFreeKeyContext @ 0x1406C29BC (VrpFreeKeyContext.c)
 *     PspChargeProcessWakeCounter @ 0x1407AC250 (PspChargeProcessWakeCounter.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     VrpDestroyNamespaceNode @ 0x1407F6410 (VrpDestroyNamespaceNode.c)
 *     ObpLockChildDirectory @ 0x140811430 (ObpLockChildDirectory.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1402440B4 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
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

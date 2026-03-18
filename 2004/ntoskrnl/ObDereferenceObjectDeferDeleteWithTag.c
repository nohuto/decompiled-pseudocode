/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x140289860
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     PspRevertContainerImpersonation @ 0x1402149A0 (PspRevertContainerImpersonation.c)
 *     IopCallDriverReference @ 0x140221CF0 (IopCallDriverReference.c)
 *     ExReinitializeResourceLite @ 0x140278850 (ExReinitializeResourceLite.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     ExDeleteResourceLite @ 0x1402C3E70 (ExDeleteResourceLite.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1402C5438 (CcDereferenceSharedCacheMapFileObject.c)
 *     KiAbProcessThreadLocks @ 0x140329FA4 (KiAbProcessThreadLocks.c)
 *     FsRtlpClearOwner @ 0x140332A24 (FsRtlpClearOwner.c)
 *     ExReturnPoolQuota @ 0x14033BB5C (ExReturnPoolQuota.c)
 *     MmChangeSectionBackingFile @ 0x140351314 (MmChangeSectionBackingFile.c)
 *     IopBoostThreadCallback @ 0x1403547F0 (IopBoostThreadCallback.c)
 *     CcChangeBackingFileObject @ 0x1404E39C8 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x14051CDE0 (KiMonitorCacheErrata.c)
 *     VrpDestroyNamespaceNode @ 0x1405CA6A0 (VrpDestroyNamespaceNode.c)
 *     VrpFreeKeyContext @ 0x1405CC640 (VrpFreeKeyContext.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     PspChargeProcessWakeCounter @ 0x140687480 (PspChargeProcessWakeCounter.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 */

// local variable allocation has failed, the output may be wrong!
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
    ObpDeferObjectDeletion((char *)Object - 48, *(_QWORD *)&Tag);
  }
}

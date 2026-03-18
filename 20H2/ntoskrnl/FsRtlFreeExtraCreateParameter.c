/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x1405FD450
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x14020B5C0 (IopDeleteFileObjectExtension.c)
 *     FsRtlCheckOplockEx2 @ 0x14020C800 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x14030F488 (FsRtlpAttachOplockKey.c)
 *     FsRtlpCleanupEcps @ 0x1405FD2E0 (FsRtlpCleanupEcps.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1405FD390 (FsRtlFreeExtraCreateParameterList.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140600990 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     PspCreateUserProcessEcp @ 0x1406907C8 (PspCreateUserProcessEcp.c)
 *     IopSymlinkUpdateECP @ 0x1406C6884 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406C6E18 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1406C6F40 (IopGraftName.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14020B100 (ExFreeToNPagedLookasideList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  void (__fastcall *v1)(PVOID, char *); // rax
  __int64 v2; // rdi
  __int64 v4; // rcx

  v1 = (void (__fastcall *)(PVOID, char *))*((_QWORD *)EcpContext - 4);
  v2 = 0LL;
  if ( v1 )
    v1(EcpContext, (char *)EcpContext - 48);
  if ( (*((_DWORD *)EcpContext - 6) & 0x20) != 0 && FltMgrCallbacks )
  {
    v2 = *((_QWORD *)EcpContext - 1);
    (*(void (__fastcall **)(__int64, PVOID))FltMgrCallbacks)(v2, EcpContext);
  }
  v4 = *((_QWORD *)EcpContext - 2);
  if ( v4 )
  {
    if ( (*((_DWORD *)EcpContext - 6) & 0x40) != 0 )
    {
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v4, (char *)EcpContext - 72);
    }
    else
    {
      ++*(_DWORD *)(v4 + 28);
      if ( *(_WORD *)v4 >= *(_WORD *)(v4 + 16) )
      {
        ++*(_DWORD *)(v4 + 32);
        (*(void (__fastcall **)(char *))(v4 + 56))((char *)EcpContext - 72);
      }
      else
      {
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v4, (PSLIST_ENTRY)((char *)EcpContext - 72));
      }
    }
  }
  else
  {
    ExFreePoolWithTag((char *)EcpContext - 72, 0);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v2);
}

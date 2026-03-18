/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x14066E310
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140254990 (FsRtlCheckOplockEx2.c)
 *     IopDeleteFileObjectExtension @ 0x1402D7140 (IopDeleteFileObjectExtension.c)
 *     FsRtlpAttachOplockKey @ 0x1402FFEA8 (FsRtlpAttachOplockKey.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140600CD0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopCreateFile @ 0x14066D230 (IopCreateFile.c)
 *     FsRtlpCleanupEcps @ 0x14066E1F0 (FsRtlpCleanupEcps.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14066E250 (FsRtlFreeExtraCreateParameterList.c)
 *     PspCreateUserProcessEcp @ 0x14066E6B4 (PspCreateUserProcessEcp.c)
 *     IopSymlinkUpdateECP @ 0x1406CD9E8 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406CDF18 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1406CE040 (IopGraftName.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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

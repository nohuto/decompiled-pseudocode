/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x14060C9E0
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140252C8C (IopDeleteFileObjectExtension.c)
 *     FsRtlCheckOplockEx2 @ 0x140353D20 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x140359A7C (FsRtlpAttachOplockKey.c)
 *     IopCreateFile @ 0x14060B4C0 (IopCreateFile.c)
 *     FsRtlpCleanupEcps @ 0x14060C8C0 (FsRtlpCleanupEcps.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060C920 (FsRtlFreeExtraCreateParameterList.c)
 *     PspCreateUserProcessEcp @ 0x14060CD84 (PspCreateUserProcessEcp.c)
 *     IopSymlinkUpdateECP @ 0x14069E24C (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14069E77C (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x14069E8A4 (IopGraftName.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1407035D0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252DE4 (ExFreeToNPagedLookasideList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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

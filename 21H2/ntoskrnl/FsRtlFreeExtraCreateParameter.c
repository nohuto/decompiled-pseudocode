/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x14066EF20
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140203B8C (IopDeleteFileObjectExtension.c)
 *     FsRtlpAttachOplockKey @ 0x1402A22E0 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     FsRtlpCleanupEcps @ 0x14066EE14 (FsRtlpCleanupEcps.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14066EEA0 (FsRtlFreeExtraCreateParameterList.c)
 *     PspCreateUserProcessEcp @ 0x14066F248 (PspCreateUserProcessEcp.c)
 *     IopSymlinkUpdateECP @ 0x1406B9A14 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406B9EA8 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1406B9FD4 (IopGraftName.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x140203D50 (ExFreeToPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  void (__fastcall *v1)(PVOID, char *); // rax
  __int64 v2; // rdi
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx
  char *v5; // rdx

  v1 = (void (__fastcall *)(PVOID, char *))*((_QWORD *)EcpContext - 4);
  v2 = 0LL;
  if ( v1 )
    v1(EcpContext, (char *)EcpContext - 48);
  if ( (*((_DWORD *)EcpContext - 6) & 0x20) != 0 && FltMgrCallbacks )
  {
    v2 = *((_QWORD *)EcpContext - 1);
    (*(void (__fastcall **)(__int64, PVOID))FltMgrCallbacks)(v2, EcpContext);
  }
  v4 = (struct _NPAGED_LOOKASIDE_LIST *)*((_QWORD *)EcpContext - 2);
  if ( v4 )
  {
    v5 = (char *)EcpContext - 72;
    if ( (*((_DWORD *)EcpContext - 6) & 0x40) != 0 )
      ExFreeToNPagedLookasideList(v4, v5);
    else
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v4, v5);
  }
  else
  {
    ExFreePoolWithTag((char *)EcpContext - 72, 0);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v2);
}

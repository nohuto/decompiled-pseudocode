/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x1405FD390
 * Callers:
 *     FsRtlpCleanupEcps @ 0x1405FD2E0 (FsRtlpCleanupEcps.c)
 *     PspCreateUserProcessEcp @ 0x1406907C8 (PspCreateUserProcessEcp.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406C6E18 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1405FD450 (FsRtlFreeExtraCreateParameter.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameterList(PECP_LIST EcpList)
{
  _LIST_ENTRY *p_EcpList; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v4; // rax

  p_EcpList = &EcpList->EcpList;
  while ( 1 )
  {
    Flink = p_EcpList->Flink;
    if ( p_EcpList->Flink == p_EcpList )
      break;
    if ( Flink->Blink != p_EcpList || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_EcpList->Flink = v4;
    v4->Blink = p_EcpList;
    Flink->Blink = 0LL;
    Flink->Flink = 0LL;
    FsRtlFreeExtraCreateParameter(&Flink[4]);
  }
  if ( (EcpList->Flags & 4) != 0 )
  {
    ++dword_140CDB1DC;
    if ( LOWORD(FsRtlEcpListLookaside.Alignment) >= (unsigned __int16)word_140CDB1D0 )
    {
      ++dword_140CDB1E0;
      ((void (__fastcall *)(PECP_LIST))qword_140CDB1F8)(EcpList);
    }
    else
    {
      RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)EcpList);
    }
  }
  else
  {
    ExFreePoolWithTag(EcpList, 0);
  }
}

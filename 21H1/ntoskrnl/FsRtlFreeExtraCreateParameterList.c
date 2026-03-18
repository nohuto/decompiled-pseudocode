/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x14066E250
 * Callers:
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     FsRtlpCleanupEcps @ 0x14066E1F0 (FsRtlpCleanupEcps.c)
 *     PspCreateUserProcessEcp @ 0x14066E6B4 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406CDF18 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066E310 (FsRtlFreeExtraCreateParameter.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
    ++dword_140CDB29C;
    if ( LOWORD(FsRtlEcpListLookaside.Alignment) >= (unsigned __int16)word_140CDB290 )
    {
      ++dword_140CDB2A0;
      ((void (__fastcall *)(PECP_LIST))qword_140CDB2B8)(EcpList);
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

/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x140616CA0
 * Callers:
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     FsRtlpCleanupEcps @ 0x140616C40 (FsRtlpCleanupEcps.c)
 *     PspCreateUserProcessEcp @ 0x140617104 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406EF218 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140616D60 (FsRtlFreeExtraCreateParameter.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
    ++dword_140CDB15C;
    if ( LOWORD(FsRtlEcpListLookaside.Alignment) >= (unsigned __int16)word_140CDB150 )
    {
      ++dword_140CDB160;
      ((void (__fastcall *)(PECP_LIST))qword_140CDB178)(EcpList);
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

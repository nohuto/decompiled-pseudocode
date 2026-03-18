/*
 * XREFs of FsRtlpCleanupEcps @ 0x1405FD2E0
 * Callers:
 *     NtQueryAttributesFile @ 0x1405FAF90 (NtQueryAttributesFile.c)
 *     IopCleanupExtraCreateParameters @ 0x1405FD2A4 (IopCleanupExtraCreateParameters.c)
 *     NtQueryFullAttributesFile @ 0x1406B2070 (NtQueryFullAttributesFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140896B78 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     FsRtlFreeExtraCreateParameterList @ 0x1405FD390 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1405FD450 (FsRtlFreeExtraCreateParameter.c)
 */

char __fastcall FsRtlpCleanupEcps(struct _ECP_LIST *a1)
{
  unsigned int Flags; // eax
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *p_EcpList; // rdi
  _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY *Blink; // rax

  Flags = a1->Flags;
  if ( (Flags & 0x3F0) != 0 )
  {
    a1->Flags = Flags - 16;
    return 1;
  }
  else if ( (Flags & 1) != 0 )
  {
    Flink = a1->EcpList.Flink;
    p_EcpList = &a1->EcpList;
    while ( Flink != p_EcpList )
    {
      v5 = Flink;
      v6 = Flink;
      Flink = Flink->Flink;
      if ( ((__int64)v5[2].Blink & 1) == 0 )
      {
        if ( Flink->Blink != v6 || (Blink = v6->Blink, Blink->Flink != v6) )
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        v5->Blink = 0LL;
        v6->Flink = 0LL;
        FsRtlFreeExtraCreateParameter(&v5[4]);
      }
    }
    return 0;
  }
  else
  {
    FsRtlFreeExtraCreateParameterList(a1);
    return 1;
  }
}

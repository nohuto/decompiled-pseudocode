/*
 * XREFs of RaAllocateIoResource @ 0x1C000BDF0
 * Callers:
 *     RaidStartIoPacket @ 0x1C000AD20 (RaidStartIoPacket.c)
 *     StorSubmitIoGatewayItem @ 0x1C000BC34 (StorSubmitIoGatewayItem.c)
 *     RaidAdapterRestartQueues @ 0x1C00120DC (RaidAdapterRestartQueues.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaAllocateIoResource(PSLIST_HEADER ListHead)
{
  int Alignment; // ecx
  PSLIST_ENTRY result; // rax
  __int64 v4; // rax
  int v5; // edi
  unsigned int v6; // ecx
  int v7; // esi

  Alignment = ListHead[4].Alignment;
  if ( !Alignment )
    return ExpInterlockedPopEntrySList(ListHead);
  v4 = (unsigned int)(Alignment * HIDWORD(KeGetPcr()[1].LockArray)) / *((_DWORD *)&ListHead[4].HeaderX64 + 1);
  v5 = v4;
  result = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(ListHead->Alignment + 8 * v4));
  if ( result )
  {
LABEL_9:
    LODWORD(result->Next) = v5;
    return result;
  }
  v6 = ListHead[4].Alignment;
  v7 = 1;
  if ( v6 > 1 )
  {
    while ( !result )
    {
      result = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(ListHead->Alignment + 8LL * ((v7 + v5) % v6)));
      v6 = ListHead[4].Alignment;
      if ( ++v7 >= v6 )
      {
        if ( !result )
          return result;
        goto LABEL_9;
      }
    }
    goto LABEL_9;
  }
  return result;
}

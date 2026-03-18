/*
 * XREFs of EtwpAdjustTraceBuffers @ 0x140312AD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpAdjustSiloTraceBuffers @ 0x140241960 (EtwpAdjustSiloTraceBuffers.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     PspGetNextSilo @ 0x1406158F4 (PspGetNextSilo.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void EtwpAdjustTraceBuffers()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 NextSilo; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *Blink; // rsi
  __int64 v6; // rcx
  PSLIST_ENTRY v7; // rax
  PSLIST_ENTRY v8; // rax

  if ( EtwpHostSiloState && !*(_DWORD *)(EtwpHostSiloState + 4068) )
  {
    EtwpAdjustSiloTraceBuffers(EtwpHostSiloState);
    v1 = 0LL;
    while ( 1 )
    {
      LOBYTE(v0) = 1;
      NextSilo = PspGetNextSilo(v1, v0);
      v3 = NextSilo;
      if ( !NextSilo )
        break;
      CurrentThread = KeGetCurrentThread();
      Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
      CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)NextSilo;
      v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
      if ( v6 && !*(_DWORD *)(v6 + 4068) )
        EtwpAdjustSiloTraceBuffers(v6);
      v1 = v3;
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
    }
    if ( dword_140C53C64 > 2 * (int)KeNumberProcessors_0 * dword_140C53C60 )
    {
      do
      {
        v7 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
        if ( !v7 )
          break;
        ExFreePoolWithTag(v7, 0);
      }
      while ( _InterlockedDecrement(&dword_140C53C64) > 2 * (int)KeNumberProcessors_0 * dword_140C53C60 );
    }
    if ( dword_140C53C84 > 2 * (int)KeNumberProcessors_0 * dword_140C53C80 )
    {
      do
      {
        v8 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
        if ( !v8 )
          break;
        ExFreePoolWithTag(v8, 0);
      }
      while ( _InterlockedDecrement(&dword_140C53C84) > 2 * (int)KeNumberProcessors_0 * dword_140C53C80 );
    }
    _InterlockedExchange(&EtwpBufferAdjustmentActive, 0);
  }
}

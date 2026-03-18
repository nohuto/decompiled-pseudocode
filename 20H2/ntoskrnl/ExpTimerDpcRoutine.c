/*
 * XREFs of ExpTimerDpcRoutine @ 0x14032C670
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeSetCoalescableTimer @ 0x140247420 (KeSetCoalescableTimer.c)
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 *     _local_unwind @ 0x1403D1220 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EB1F4 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine0 @ 0x140407BB0 (KiCustomAccessRoutine0.c)
 *     memset @ 0x140411300 (memset.c)
 */

void __fastcall ExpTimerDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int v8; // esi
  __int64 v9; // [rsp+0h] [rbp-1B8h] BYREF
  int v10; // [rsp+34h] [rbp-184h]
  _BYTE v11[89]; // [rsp+120h] [rbp-98h] BYREF
  __int64 *v12; // [rsp+190h] [rbp-28h]

  v12 = &v9;
  memset(v11, 0, sizeof(v11));
  if ( (unsigned __int64)((DeferredContext >> 47) + 1) > 1 )
  {
    v10 = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)&v11[81] = SystemArgument1;
    *(_QWORD *)&v11[1] = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)&v11[73] = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine0(DeferredContext);
  }
  v8 = 0;
  KxAcquireSpinLock((PKSPIN_LOCK)(DeferredContext + 64));
  if ( (*(_BYTE *)(DeferredContext + 304) & 1) != 0 )
  {
    v8 = KeInsertQueueApc(DeferredContext + 72, MEMORY[0xFFFFF78000000014], HIDWORD(MEMORY[0xFFFFF78000000014]), 0) == 0;
    if ( *(_DWORD *)(DeferredContext + 240) )
    {
      if ( --v8 < 0 )
      {
        ObfReferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
        v8 = 0;
      }
      if ( (*(_BYTE *)(DeferredContext + 304) & 2) == 0
        && KeSetCoalescableTimer(
             (PKTIMER)DeferredContext,
             (LARGE_INTEGER)(-10000LL * *(int *)(DeferredContext + 240)),
             0,
             *(_DWORD *)(DeferredContext + 320),
             Dpc) )
      {
        ++v8;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(DeferredContext + 64));
  if ( v8 )
    ObfDereferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
}

/*
 * XREFs of ExpCenturyDpcRoutine @ 0x140323C90
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x1403CD750 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine9 @ 0x140400460 (KiCustomAccessRoutine9.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void __fastcall ExpCenturyDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v8[86]; // [rsp+0h] [rbp-168h] BYREF
  _DWORD *v9; // [rsp+158h] [rbp-10h]

  v9 = v8;
  memset(&v8[40], 0, 0x62uLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v8[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v8[62] + 2) = SystemArgument1;
    *(_QWORD *)((char *)&v8[60] + 2) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v8[42] + 2) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine9(DeferredContext);
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)DeferredContext) == 1 )
    ExQueueWorkItem(&ExpCenturyWorkItem, DelayedWorkQueue);
}

/*
 * XREFs of ExpTimeZoneDpcRoutine @ 0x1406391E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x1403E0F50 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine8 @ 0x14042C150 (KiCustomAccessRoutine8.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall ExpTimeZoneDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _QWORD *v8; // rdi
  __int64 v9; // rdi
  _DWORD v10[90]; // [rsp+0h] [rbp-178h] BYREF
  _DWORD *v11; // [rsp+168h] [rbp-10h]

  v11 = v10;
  memset(&v10[44], 0, 0x61uLL);
  if ( (__int64)DeferredContext >> 47 != -1 && (__int64)DeferredContext >> 47 != 0 )
  {
    v10[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v10[66] + 1) = SystemArgument1;
    *(_QWORD *)((char *)&v10[62] + 1) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v10[48] + 1) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine8((unsigned int *)DeferredContext);
  }
  v8 = &PspHostSiloGlobals;
  if ( DeferredContext )
    v8 = (_QWORD *)*((_QWORD *)DeferredContext + 183);
  v9 = v8[157];
  if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 928)) == 1 )
  {
    if ( DeferredContext )
      ObfReferenceObjectWithTag(DeferredContext, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v9 + 576), DelayedWorkQueue);
  }
}

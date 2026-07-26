/*
 * XREFs of ndis5InterruptDpc @ 0x1C00C1780
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001986C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCheckWatchdogTimer@@YAEXZ @ 0x1C0063B0C (-ndisCheckWatchdogTimer@@YAEXZ.c)
 *     ndisMDpc @ 0x1C00C18EC (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C00C1B00 (ndisMDpcX.c)
 */

void __fastcall ndis5InterruptDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  __int64 v6; // rcx
  unsigned int Flags; // eax

  v4 = (struct _NDIS_MINIPORT_BLOCK *)DeferredContext[13];
  if ( ndisCheckWatchdogTimer() )
  {
    KeAcquireSpinLockAtDpcLevel(&v4->Lock);
    v4->MiniportThread = KeGetCurrentThread();
    Flags = v4->Flags;
    if ( (Flags & 0x2000000) == 0 )
    {
      v4->Flags = Flags | 0x2000000;
      ndisReferenceMiniportNoCheck(v4, 0x4Eu);
      ExQueueWorkItem(&v4->MiniportDpcWorkItem, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
    v4->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&v4->Lock);
  }
  else if ( (v4->Flags & 0x40000) != 0 )
  {
    ndisMDpcX(v6, DeferredContext);
  }
  else
  {
    ndisMDpc(v6, DeferredContext);
  }
}

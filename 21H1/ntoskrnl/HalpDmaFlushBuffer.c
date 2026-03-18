/*
 * XREFs of HalpDmaFlushBuffer @ 0x1404C21FC
 * Callers:
 *     HalBuildScatterGatherListV2 @ 0x1402E7F40 (HalBuildScatterGatherListV2.c)
 *     IoMapTransferInternal @ 0x14038547C (IoMapTransferInternal.c)
 *     IoFlushAdapterBuffersV2 @ 0x1403865E0 (IoFlushAdapterBuffersV2.c)
 *     HalMapTransferEx @ 0x14039C1C0 (HalMapTransferEx.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x1404B202C (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404B217C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x1404B250C (HalpDmaMapContiguousTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404B2630 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1404C844C (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x1404C8568 (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1404C86CC (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x1404C8824 (HalpDmaMapScatterTransferV2.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     IoBuildPartialMdl @ 0x1402EB4C0 (IoBuildPartialMdl.c)
 *     KeFlushIoBuffers @ 0x1402FB650 (KeFlushIoBuffers.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404C2430 (HalpDmaFlushBufferWithEmergencyResources.c)
 */

void __fastcall HalpDmaFlushBuffer(int a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char a5, char a6)
{
  __int64 v6; // r12
  unsigned __int8 CurrentIrql; // bp
  PVOID v10; // rax
  unsigned __int64 v11; // r10
  unsigned __int8 v12; // di
  _DWORD *SchedulerAssist; // r9
  struct _MDL *v14; // r15
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf

  v6 = a4;
  CurrentIrql = KeGetCurrentIrql();
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v10 = *(PVOID *)(a2 + 24);
  else
    v10 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000020u);
  v11 = ((a3 & 0xFFF) + v6 + 4095) >> 12;
  if ( v10 && (unsigned int)v11 <= 0x200 )
  {
    v12 = CurrentIrql;
    if ( CurrentIrql < 2u )
    {
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (v12 + 1)) & 4;
        }
      }
    }
    v14 = *(struct _MDL **)(qword_140C53E20 + 8LL * KeGetPcr()->Prcb.Number);
    v14->Next = 0LL;
    v14->MdlFlags = 0;
    v14->Size = 8 * (v11 + 6);
    v14->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
    v14->ByteOffset = a3 & 0xFFF;
    v14->ByteCount = v6;
    IoBuildPartialMdl((PMDL)a2, v14, (PVOID)a3, v6);
    if ( !a6 )
    {
      LOBYTE(v15) = 1;
      KeFlushIoBuffers((ULONG_PTR)v14, a5 == 0, v15, v16);
    }
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && v12 <= 0xFu && v17 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v19 = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (v12 + 1));
            v21 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF05uLL, 0LL, 0LL);
    HalpDmaFlushBufferWithEmergencyResources(a1, a2, a3, v6, a5, a6);
  }
}

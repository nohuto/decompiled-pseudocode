/*
 * XREFs of ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00A2A40
 * Callers:
 *     <none>
 * Callees:
 *     ndisMIndicateSplitNblChain @ 0x1C00A2A94 (ndisMIndicateSplitNblChain.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C00A31E8 (ndisMQueueReceiveNetBufferLists.c)
 *     ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A3360 (-ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMIndicateReceiveNblsWithThrottling(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int MaxNblCount; // eax
  unsigned int v7; // r8d
  struct _NDIS_OBJECT_HEADER *v8; // r10
  unsigned int v9; // r11d

  if ( (a5 & 1) != 0 || KeGetCurrentIrql() )
  {
    ndisMQueueReceiveNetBufferLists(&a1->Header, a5);
  }
  else
  {
    MaxNblCount = ndisPeriodicReceivesGetMaxNblCount(a1);
    ndisMIndicateSplitNblChain(v8, a2, v7, v9, MaxNblCount);
  }
}

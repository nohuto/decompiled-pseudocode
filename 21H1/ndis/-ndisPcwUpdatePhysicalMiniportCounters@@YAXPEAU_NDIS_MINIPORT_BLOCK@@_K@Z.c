/*
 * XREFs of ?ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z @ 0x1C011F06C
 * Callers:
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C008EA38 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     ?ndisSSUpdateCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z @ 0x1C00A6414 (-ndisSSUpdateCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z.c)
 */

void __fastcall ndisPcwUpdatePhysicalMiniportCounters(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  a1->PhysicalPerformanceCounters->Uptime100ns = a2 - a1->TimeOfInitialization.QuadPart;
  if ( a1->SelectiveSuspend )
    ndisSSUpdateCounters(a1, a2);
}

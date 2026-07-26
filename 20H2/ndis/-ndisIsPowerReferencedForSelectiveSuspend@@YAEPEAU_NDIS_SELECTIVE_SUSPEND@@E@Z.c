/*
 * XREFs of ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x1C00A5918
 * Callers:
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6FD0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8520 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A8774 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A8D84 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIsPowerReferencedForSelectiveSuspend(struct _NDIS_SELECTIVE_SUSPEND *a1, char a2)
{
  int v3; // eax

  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 128)
       || *((_DWORD *)a1 + 129)
       || *((_DWORD *)a1 + 132)
       || *((_DWORD *)a1 + 133)
       || *((_DWORD *)a1 + 130)
       || *((_DWORD *)a1 + 131)
       || *((_DWORD *)a1 + 144)
       || *((_DWORD *)a1 + 127))
      && KeReadStateEvent((PRKEVENT)((char *)a1 + 272)) )
    {
      return 1;
    }
  }
  else
  {
    v3 = *((_DWORD *)a1 + 126);
    if ( (v3 & 0x14) == 0 || (v3 & 0x200) != 0 )
      return 1;
  }
  return 0;
}

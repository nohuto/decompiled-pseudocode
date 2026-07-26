/*
 * XREFs of ?ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019E30
 * Callers:
 *     ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C0012F28 (-ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019D7C (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisCheckForHangSupported(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  bool v2; // zf

  DriverHandle = a1->DriverHandle;
  if ( a1->MajorNdisVersion < 6u )
  {
    if ( !DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler )
      return 0;
    v2 = DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler == 0LL;
  }
  else
  {
    if ( !DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx )
      return 0;
    v2 = DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx == 0LL;
  }
  return !v2;
}

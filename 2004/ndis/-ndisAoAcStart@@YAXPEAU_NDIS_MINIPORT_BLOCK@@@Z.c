/*
 * XREFs of ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0113E2C
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C0061E80 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0109F20 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C005A24C (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005ADB4 (-ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisAoAcStart(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // r9
  __int64 v3; // r8
  bool v4; // cf

  AoAc = a1->AoAc;
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = *((_BYTE *)AoAc + 1105) != 0;
  *((_QWORD *)AoAc + 59) = MEMORY[0xFFFFF78000000008];
  *((_QWORD *)AoAc + 108) = v3;
  *((_BYTE *)AoAc + 484) = 1;
  *((_QWORD *)AoAc + 109) = v3 & -(__int64)v4;
  if ( a1->AoAc )
  {
    ndisAoAcClearStop(a1, 9);
    if ( a1->AoAc )
    {
      if ( (a1->PMHardwareCapabilities.Flags & 6) != 0 && a1->SelectiveSuspend && ndisPowerRefManagementState == 1 )
        ndisAoAcTakeInternalRef(a1);
    }
  }
}

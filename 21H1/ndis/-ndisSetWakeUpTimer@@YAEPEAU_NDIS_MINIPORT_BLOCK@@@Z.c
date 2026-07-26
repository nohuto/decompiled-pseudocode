/*
 * XREFs of ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019D7C
 * Callers:
 *     ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x1C00086D0 (-ndisMWakeUpDpcX@@YAXPEAX000@Z.c)
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x1C005E730 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A6784 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012A830 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139BB8 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019E30 (-ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisSetWakeUpTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ULONG v2; // esi
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rbx

  v2 = (signed int)(1000 * a1->CheckForHangSeconds) / 5;
  if ( !ndisCheckForHangSupported(a1) )
    return 0;
  if ( *(_BYTE *)(v3 + 32) > 6u || *(_BYTE *)(v3 + 32) == 6 && *(_BYTE *)(v3 + 33) >= 0x1Eu )
    v2 = 4000;
  *(_DWORD *)(v3 + 124) &= ~0x20000000u;
  v5 = -10000LL * v4;
  KeClearEvent((PRKEVENT)(v3 + 1912));
  KeSetCoalescableTimer(&a1->WakeUpDpcTimer.Timer, (LARGE_INTEGER)v5, 0, v2, &a1->WakeUpDpcTimer.Dpc);
  return 1;
}

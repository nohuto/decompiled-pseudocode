/*
 * XREFs of ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AADA0
 * Callers:
 *     ndisInterruptDpc @ 0x1C00076F0 (ndisInterruptDpc.c)
 *     ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0008090 (-ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x1C00086D0 (-ndisMWakeUpDpcX@@YAXPEAX000@Z.c)
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x1C005E730 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ndisMiniportDpc @ 0x1C0066648 (ndisMiniportDpc.c)
 *     ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009A6C0 (-ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisMTimerObjectDpc @ 0x1C00BC6B0 (ndisMTimerObjectDpc.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00BDDB0 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMDpc @ 0x1C00C18EC (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C00C1B00 (ndisMDpcX.c)
 * Callees:
 *     memset @ 0x1C003F6C0 (memset.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C0083AB8 (McTemplateK0qq_EtwWriteTransfer.c)
 */

void __fastcall ndisTraceDpcStart(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-58h]
  _QWORD WnodeEventItem[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  v4 = (a1->NetLuid.Value >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v4);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 21;
  LODWORD(WnodeEventItem[7]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C00E6048;
  LOWORD(WnodeEventItem[0]) = 64;
  IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_1C00E6085 & 2) != 0 )
  {
    LODWORD(v6) = a2;
    McTemplateK0qq_EtwWriteTransfer(v5, &DpcStart, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, v6);
  }
}

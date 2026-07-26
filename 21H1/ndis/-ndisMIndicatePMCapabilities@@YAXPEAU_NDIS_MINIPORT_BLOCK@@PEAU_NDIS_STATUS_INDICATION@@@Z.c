/*
 * XREFs of ?ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008FB54
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001ACA4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

void __fastcall ndisMIndicatePMCapabilities(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  _DWORD *StatusBuffer; // rdi
  unsigned int v4; // ecx
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  StatusBuffer = a2->StatusBuffer;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( (unsigned int)(StatusBuffer[12] - 2) <= 2 )
    a1->PMCurrentParameters.WakeUpFlags = 1;
  else
    a1->PMCurrentParameters.WakeUpFlags &= ~1u;
  v4 = a1->PMCurrentParameters.EnabledWoLPacketPatterns & StatusBuffer[2];
  a1->PMCurrentParameters.EnabledWoLPacketPatterns = v4;
  if ( (unsigned int)(StatusBuffer[10] - 2) <= 2 )
    a1->PMCurrentParameters.EnabledWoLPacketPatterns = v4 | 2;
  a1->PMCurrentParameters.EnabledProtocolOffloads &= StatusBuffer[7];
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
}

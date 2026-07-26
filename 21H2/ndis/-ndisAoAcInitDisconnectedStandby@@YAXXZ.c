/*
 * XREFs of ?ndisAoAcInitDisconnectedStandby@@YAXXZ @ 0x1C005A920
 * Callers:
 *     ndisDriverReinit @ 0x1C003A2D0 (ndisDriverReinit.c)
 * Callees:
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00952E0 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void ndisAoAcInitDisconnectedStandby(void)
{
  KIRQL v0; // al
  struct _NDIS_M_DRIVER_BLOCK *v1; // rdi
  KIRQL v2; // bp
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  unsigned int PnPFlags; // ecx
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0;
  v5 = 1;
  if ( ZwPowerInformation(PowerInformationInternal, &v5, 8u, &v7, 8u) < 0 )
  {
LABEL_5:
    if ( !ndisEnforceDisconnectedStandby )
      return;
    goto LABEL_6;
  }
  if ( (v7 & 0x20000000000LL) == 0 )
  {
    ndisEnforceDisconnectedStandby = 0;
    goto LABEL_5;
  }
  ndisEnforceDisconnectedStandby = 1;
LABEL_6:
  v0 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v1 = ndisMiniDriverList;
  v2 = v0;
  while ( v1 )
  {
    KeAcquireSpinLockAtDpcLevel(&v1->Ref.SpinLock);
    for ( i = v1->MiniportQueue; i; i = i->NextMiniport )
    {
      PnPFlags = i->PnPFlags;
      if ( (PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (i->FilterPnPFlags & 0x200) != 0 )
      {
        i->PnPCapabilities |= 0x10u;
        i->PnPFlags = PnPFlags & 0xFFFFFFBF;
        ndisUpdateAndIndicatePMCapabilities(i);
      }
    }
    KeReleaseSpinLockFromDpcLevel(&v1->Ref.SpinLock);
    v1 = v1->NextDriver;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v2);
}

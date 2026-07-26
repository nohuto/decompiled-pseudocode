/*
 * XREFs of ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001B714
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C4B8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ndisDispatchRequest @ 0x1C001D340 (ndisDispatchRequest.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x1C0104ECC (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01319B4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0131BC0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01372CC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisFindRootDevice @ 0x1C013A3A8 (ndisFindRootDevice.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00185E4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001BB1C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 */

char __fastcall ndisReferenceMiniportByHandle(struct _NDIS_MINIPORT_BLOCK *a1, char a2, unsigned __int8 a3)
{
  char v4; // r15
  char v5; // r14
  KIRQL v7; // al
  struct _NDIS_M_DRIVER_BLOCK *v8; // rbx
  KIRQL v9; // bp
  KIRQL v10; // al
  struct _NDIS_MINIPORT_BLOCK *MiniportQueue; // rsi
  KIRQL v12; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v8 = ndisMiniDriverList;
  v9 = v7;
  do
  {
    if ( !v8 )
      break;
    if ( !a2 || (v16 = 0, ndisReferenceRefEx(&v8->Ref.SpinLock, 6u, (enum _NDIS_REFERENCE_STATUS *)&v16)) )
    {
      KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
      v10 = KeAcquireSpinLockRaiseToDpc(&v8->Ref.SpinLock);
      MiniportQueue = v8->MiniportQueue;
      LOBYTE(v16) = v10;
      do
      {
        if ( !MiniportQueue )
          break;
        if ( MiniportQueue == a1 )
        {
          v4 = 1;
          if ( a2 || !ndisReferenceMiniport(a1, a3) )
          {
            if ( (a1->Flags & 0x80200020) == 0
              && (a1->PnPFlags & 0x1084110) == 0
              && a1->PnPDeviceState == NdisPnPDeviceStarted
              && a1->CurrentDevicePowerState == PowerDeviceD0
              && ndisReferenceMiniport(a1, a3) )
            {
              v5 = 1;
            }
          }
          else
          {
            v5 = 1;
          }
        }
        MiniportQueue = MiniportQueue->NextMiniport;
      }
      while ( !v4 );
      KeReleaseSpinLock(&v8->Ref.SpinLock, v16);
      v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = v8->NextDriver;
      v9 = v12;
      if ( a2 )
        ndisDereferenceDriver(v8, 1u, MDRVREF_MPREFH);
    }
    else
    {
      NextDriver = v8->NextDriver;
    }
    v8 = NextDriver;
  }
  while ( !v4 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
  return v5;
}

/*
 * XREFs of ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139A18
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014CAC (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisResetEvent @ 0x1C0008BB0 (NdisResetEvent.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D70 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005F32C (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C008B114 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C00FB674 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0137DA8 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisPmHaltMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int PnPFlags; // eax
  unsigned __int64 *p_Lock; // rcx
  KIRQL v4; // dl
  unsigned int v5; // eax
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Cu,
      (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
      a1);
  NdisTraceLoggingDeviceRemoved();
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  NdisResetEvent(&a1->OpenReadyEvent);
  PnPFlags = a1->PnPFlags;
  a1->MiniportThread = 0LL;
  p_Lock = &a1->Lock;
  if ( (PnPFlags & 0x4000) != 0 )
  {
    KeReleaseSpinLock(p_Lock, NewIrql);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
  }
  else
  {
    KeReleaseSpinLock(p_Lock, NewIrql);
    ndisMSetMiniportReadyForBinding(a1, 0, 2048, RunSynchronous);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    v4 = NewIrql;
    v5 = a1->Flags & 0xFFFFFFFE;
    a1->PnPFlags |= 0x4004u;
    a1->MiniportThread = 0LL;
    a1->Flags = v5 | 0x80000000;
    KeReleaseSpinLock(&a1->Lock, v4);
    ndisMCommonHaltMiniport(a1, ~(unsigned __int8)(a1->Flags >> 6) & 2 | 0x3C);
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x10u);
    ndisMDeregisterBugCheckHandler(a1);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x2Du,
        (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
        a1);
  }
}

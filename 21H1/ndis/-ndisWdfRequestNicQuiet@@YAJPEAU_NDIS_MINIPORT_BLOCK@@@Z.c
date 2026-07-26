/*
 * XREFs of ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005D00C
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005BC48 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005C9C0 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 */

__int64 __fastcall ndisWdfRequestNicQuiet(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v3; // al

  AoAc = a1->AoAc;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  *((_BYTE *)AoAc + 440) = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
  ndisUpdateMiniportCsTrafficStatistics(a1, 1);
  a1->DriverHandle->CxBlock->Chars.EvtCxPowerAoAcEngage(a1->MiniportAdapterContext);
  return 0LL;
}

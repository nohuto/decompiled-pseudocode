/*
 * XREFs of ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077DA4
 * Callers:
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0076BA8 (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077264 (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0077694 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077824 (-ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00778B8 (-ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00790B0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovDeleteNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079CA0 (-ndisOidPreIovDeleteNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovEnumVFs@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007A200 (-ndisOidPreIovEnumVFs@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007A530 (-ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007ACF0 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

_LIST_ENTRY *__fastcall ndisIovFindSwitchBySwitchId(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  _LIST_ENTRY *v3; // rdi
  _LIST_ENTRY *i; // rax
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  for ( i = a1->NicSwitchList.Flink; i != &a1->NicSwitchList; i = i->Flink )
  {
    if ( HIDWORD(i[2].Flink) == a2 )
    {
      v3 = i;
      break;
    }
    if ( HIDWORD(i[2].Flink) > a2 )
      break;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  return v3;
}

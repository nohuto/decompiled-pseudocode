/*
 * XREFs of ?ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0076FC4
 * Callers:
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0076E34 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00786F0 (-ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077544 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisIovDeleteNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rbx
  __int64 v4; // rcx
  struct _NDIS_NIC_SWITCH_BLOCK **v5; // rax
  KIRQL v6; // dl
  KIRQL NewIrql; // [rsp+40h] [rbp+18h] BYREF

  NewIrql = 0;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(a1, a2);
  if ( SwitchBySwitchId )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    v4 = *(_QWORD *)SwitchBySwitchId;
    if ( *(struct _NDIS_NIC_SWITCH_BLOCK **)(*(_QWORD *)SwitchBySwitchId + 8LL) != SwitchBySwitchId
      || (v5 = (struct _NDIS_NIC_SWITCH_BLOCK **)*((_QWORD *)SwitchBySwitchId + 1), *v5 != SwitchBySwitchId) )
    {
      __fastfail(3u);
    }
    v6 = NewIrql;
    *v5 = (struct _NDIS_NIC_SWITCH_BLOCK *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    --a1->NumSwitches;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v6);
    ExFreePoolWithTag(SwitchBySwitchId, 0);
  }
}

/*
 * XREFs of ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C0109B8C
 * Callers:
 *     ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x1C00FDDD8 (-DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDE60 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00FF1DC (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C010367C (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01045A0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C01046E4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106BA0 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C010AE70 (-UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C0119324 (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C011C37C (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C011CFC4 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?NdisPDBMRemoveMemberFromDomain@@YAXPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C011DC70 (-NdisPDBMRemoveMemberFromDomain@@YAXPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z.c)
 *     ?ndisNdkPcwMiniportCleanup@@YAXPEAX@Z @ 0x1C0120950 (-ndisNdkPcwMiniportCleanup@@YAXPEAX@Z.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C012278C (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C01259DC (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C0125B5C (-ReferenceWdi@@YA_NXZ.c)
 *     ?Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ @ 0x1C0126038 (-Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ.c)
 *     ?Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS@@@Z @ 0x1C0126104 (-Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS.c)
 * Callees:
 *     <none>
 */

void __fastcall KLockHolder::ReleaseExclusive(KLockHolder *this)
{
  ExReleasePushLockExclusiveEx(this->m_Lock, 0LL);
  this->m_State = Unlocked;
  this->m_Region.m_Entered = 0;
  KeLeaveCriticalRegion();
}

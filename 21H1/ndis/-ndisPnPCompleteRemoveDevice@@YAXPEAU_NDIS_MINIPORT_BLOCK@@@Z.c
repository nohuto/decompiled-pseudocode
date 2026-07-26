/*
 * XREFs of ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115AD4
 * Callers:
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E434 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0135820 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018924 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F124 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x1C0126930 (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 */

void __fastcall ndisPnPCompleteRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  enum _NET_IF_ADMIN_STATUS v2; // edi
  void (__fastcall *VpciInterfaceDereference)(void *); // rax
  NTSTATUS v4; // eax
  struct _NDIS_IF_BLOCK *IfBlock; // rcx
  char v6[4]; // [rsp+30h] [rbp-18h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x5Fu,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      a1);
  v2 = NET_IF_ADMIN_STATUS_UP;
  if ( (ndisIsMiniportStarted(a1) || (a1->Flags & 0x80u) != 0)
    && a1->OldPnPDeviceState == NdisPnPDeviceStarted
    && (a1->PnPFlags & 0x4000) == 0 )
  {
    v2 = NET_IF_ADMIN_STATUS_DOWN;
  }
  VpciInterfaceDereference = a1->VpciInterfaceDereference;
  if ( VpciInterfaceDereference )
    VpciInterfaceDereference(a1->VpciInterfaceContext);
  ndisMInvokeRemoveDevice(a1);
  if ( (a1->Flags & 0x80u) != 0 )
  {
    v4 = IoDeleteSymbolicLink(&a1->FdoName);
    if ( v4 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v6 = v4;
        WPP_RECORDER_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0x60u,
          (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
          (char)a1,
          *(_DWORD *)v6);
      }
    }
  }
  IoDeleteSymbolicLink(&a1->ExportName.__ptr_.__value_->_UNICODE_STRING);
  if ( a1->DevinterfaceNetSymbolicLinkName.Buffer )
  {
    RtlFreeUnicodeString(&a1->DevinterfaceNetSymbolicLinkName);
    a1->DevinterfaceNetSymbolicLinkName.Buffer = 0LL;
  }
  IfBlock = a1->IfBlock;
  a1->AdminStatus = v2;
  if ( IfBlock )
    ndisIfRemoveIfBlockMiniportAssociation(IfBlock, a1, v2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x61u,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      a1);
}

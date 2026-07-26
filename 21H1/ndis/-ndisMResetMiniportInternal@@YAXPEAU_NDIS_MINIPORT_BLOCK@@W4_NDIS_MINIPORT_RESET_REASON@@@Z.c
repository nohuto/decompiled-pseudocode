/*
 * XREFs of ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C0072D58
 * Callers:
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C00092F0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ndisQueuedResetMiniport @ 0x1C00730B0 (ndisQueuedResetMiniport.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     NdisMSleep @ 0x1C0017320 (NdisMSleep.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0018FD0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0019AC0 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C005F9F8 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     NdisMResetComplete @ 0x1C0071560 (NdisMResetComplete.c)
 *     McTemplateK0jqxzqq_EtwWriteTransfer @ 0x1C00730FC (McTemplateK0jqxzqq_EtwWriteTransfer.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A82B4 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A88C4 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisMInvokeReset @ 0x1C011753C (ndisMInvokeReset.c)
 */

void __fastcall ndisMResetMiniportInternal(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // ecx
  bool v6; // zf
  KSPIN_LOCK *v7; // rcx
  KIRQL v8; // dl
  __int64 v9; // rcx
  NDIS_STATUS v10; // edi
  KIRQL v11; // si
  KIRQL v12; // dl
  char v13[8]; // [rsp+30h] [rbp-79h]
  KIRQL NewIrql; // [rsp+50h] [rbp-59h] BYREF
  BOOLEAN AddressingReset[15]; // [rsp+51h] [rbp-58h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+60h] [rbp-49h] BYREF

  NewIrql = 0;
  AddressingReset[0] = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xDu,
      (struct _GUID *)&WPP_2b6dc9e966c73597afb2fba6430b9cb1_Traceguids,
      a1,
      a2);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
  v5 = *(_DWORD *)(a1 + 120);
  if ( (v5 & 0x81200000) != 0
    || (*(_DWORD *)(a1 + 124) & 0x80000) != 0
    || (unsigned int)(*(_DWORD *)(a1 + 3880) - 2) <= 2 )
  {
    v12 = NewIrql;
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v12);
  }
  else
  {
    if ( a2 == 1 )
    {
      ++*(_WORD *)(a1 + 1784);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      ++*(_WORD *)(a1 + 1786);
    }
    if ( (byte_1C00E6085 & 0x40) != 0 )
    {
      McTemplateK0jqxzqq_EtwWriteTransfer(
        *(unsigned __int16 *)(a1 + 1784) + *(unsigned __int16 *)(a1 + 1786),
        v4,
        a1 + 4008,
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        *(_QWORD *)(*(_QWORD *)(a1 + 3856) + 8LL),
        a2,
        *(_WORD *)(a1 + 1784) + *(_WORD *)(a1 + 1786));
      v5 = *(_DWORD *)(a1 + 120);
    }
    *(_QWORD *)(a1 + 392) = 0LL;
    *(_DWORD *)(a1 + 120) = v5 | 0x200000;
    ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)a1, 1u);
    *(_DWORD *)(a1 + 120) |= 0x80000u;
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 1824) == 0;
      v7 = (KSPIN_LOCK *)(a1 + 96);
      v8 = NewIrql;
      *(_QWORD *)(a1 + 520) = 0LL;
      if ( v6 )
        break;
      KeReleaseSpinLock(v7, v8);
      NdisMSleep(0x32u);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, &NewIrql);
    }
    KeReleaseSpinLock(v7, v8);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = (void *)a1;
    StatusIndication.StatusCode = 1073807364;
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    NdisMIndicateStatusEx((NDIS_HANDLE)a1, &StatusIndication);
    if ( (byte_1C00E6081 & 4) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        v9,
        &CallMiniportReset,
        (const GUID *)(a1 + 4008),
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        3);
    if ( *(_QWORD *)(a1 + 4448) )
    {
      if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
        ndisWdmSetBusySync(a1, 36LL, 0LL);
      else
        ndisWdfSetBusySync(a1, 36LL, 0LL);
    }
    if ( *(_BYTE *)(a1 + 32) < 6u )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x11u,
          0xEu,
          (struct _GUID *)&WPP_2b6dc9e966c73597afb2fba6430b9cb1_Traceguids);
      v11 = KfRaiseIrql(2u);
      v10 = (*(__int64 (__fastcall **)(BOOLEAN *, _QWORD))(*(_QWORD *)(a1 + 3760) + 192LL))(
              AddressingReset,
              *(_QWORD *)(a1 + 24));
      if ( v11 != 2 )
        KeLowerIrql(v11);
    }
    else
    {
      v10 = ndisMInvokeReset(a1);
    }
    if ( v10 != 259 )
      NdisMResetComplete((NDIS_HANDLE)a1, v10, AddressingReset[0]);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v13 = a2;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x11u,
        0xFu,
        (struct _GUID *)&WPP_2b6dc9e966c73597afb2fba6430b9cb1_Traceguids,
        a1,
        *(_QWORD *)v13);
    }
  }
}

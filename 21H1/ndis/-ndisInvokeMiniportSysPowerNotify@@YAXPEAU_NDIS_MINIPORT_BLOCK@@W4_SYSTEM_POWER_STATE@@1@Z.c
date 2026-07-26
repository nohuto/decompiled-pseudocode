/*
 * XREFs of ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C0015E14
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014818 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeMiniportSysPowerNotify(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _SYSTEM_POWER_STATE a2,
        enum _SYSTEM_POWER_STATE a3)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+38h] [rbp-40h]

  DriverHandle = a1->DriverHandle;
  if ( DriverHandle->SysPowerNotifyHandler && (a1->PnPFlags & 0x4000) == 0 )
  {
    LODWORD(v5) = 786816;
    HIDWORD(v5) = a2;
    LODWORD(v6) = a3;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0xBu,
        (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
        a1,
        v5,
        v6);
    DriverHandle->SysPowerNotifyHandler(a1->MiniportAdapterContext, (_NDIS_MINIPORT_SYSPOWER_NOTIFY *)&v5);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0xCu,
        (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
        a1);
  }
}

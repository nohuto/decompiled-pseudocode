/*
 * XREFs of ?ndisMInvokeStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0021658
 * Callers:
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0021804 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeStartDevice(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned int v3; // edi
  int v6; // eax
  char v8[4]; // [rsp+30h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  v3 = 0;
  if ( DriverHandle->StartDeviceHandler )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD4u,
        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
        a1);
      DriverHandle = a1->DriverHandle;
    }
    v6 = DriverHandle->StartDeviceHandler(a1->AddDeviceContext, a2);
    v3 = v6;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = v6;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD5u,
        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
        (char)a1,
        *(_DWORD *)v8);
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xD6u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a1);
  }
  return v3;
}

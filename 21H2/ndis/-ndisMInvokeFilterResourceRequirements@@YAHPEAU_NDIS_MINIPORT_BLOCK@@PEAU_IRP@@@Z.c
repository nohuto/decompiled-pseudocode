/*
 * XREFs of ?ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C003D494
 * Callers:
 *     ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0039C80 (-ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeFilterResourceRequirements(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned int v3; // edi
  int v6; // eax
  char v8[4]; // [rsp+30h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  v3 = 0;
  if ( DriverHandle->FilterResourceRequirementsHandler )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD1u,
        (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
        a1);
      DriverHandle = a1->DriverHandle;
    }
    v6 = DriverHandle->FilterResourceRequirementsHandler(a1->AddDeviceContext, a2);
    v3 = v6;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = v6;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD2u,
        (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
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
      0xD3u,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      a1);
  }
  return v3;
}

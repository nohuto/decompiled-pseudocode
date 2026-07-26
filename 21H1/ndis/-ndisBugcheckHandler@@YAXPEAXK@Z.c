/*
 * XREFs of ?ndisBugcheckHandler@@YAXPEAXK@Z @ 0x1C005F050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z @ 0x1C006F214 (-ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z.c)
 */

void __fastcall ndisBugcheckHandler(struct _NDIS_MINIPORT_BLOCK *Buffer, ULONG Length)
{
  _DEVICE_POWER_STATE CurrentDevicePowerState; // eax

  if ( Length == 5856 )
  {
    CurrentDevicePowerState = Buffer->CurrentDevicePowerState;
    Buffer->PnPFlags |= 0x1000000u;
    if ( (unsigned int)(CurrentDevicePowerState - 2) > 2 )
    {
      if ( Buffer->MajorNdisVersion >= 6u )
        ndisMInvokeShutdown(Buffer, NdisShutdownBugCheck);
      else
        Buffer->ShutdownHandler(Buffer->ShutdownContext);
    }
  }
}

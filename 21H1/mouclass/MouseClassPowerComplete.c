/*
 * XREFs of MouseClassPowerComplete @ 0x1C00019C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseClassPowerComplete(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v4; // r14
  unsigned int v5; // edi
  char v6; // bp
  UCHAR MinorFunction; // dl
  ULONG Options; // ecx
  POWER_STATE v9; // ebx
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS v12; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = 1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v9.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( MinorFunction )
  {
    if ( MinorFunction == 2 )
    {
      if ( Options )
      {
        if ( Options == 1 )
        {
          *(POWER_STATE *)(v4 + 172) = v9;
          PoSetPowerState(*(PDEVICE_OBJECT *)v4, DevicePowerState, v9);
        }
      }
      else
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v4, SystemPowerState, v9);
        v11 = *(struct _DEVICE_OBJECT **)v4;
        *(POWER_STATE *)(v4 + 176) = v9;
        v12 = PoRequestPowerIrp(v11, 2u, (POWER_STATE)1, (PREQUEST_POWER_COMPLETE)MouseClassPoRequestComplete, 0LL, 0LL);
        if ( v12 < 0 )
          a2->IoStatus.Status = v12;
      }
    }
  }
  else
  {
    v6 = 0;
    if ( a2 == *(IRP **)(v4 + 280) && _InterlockedExchange((volatile __int32 *)(v4 + 304), 3) == 1 )
      v5 = -1073741802;
  }
  PoStartNextPowerIrp(a2);
  if ( v6 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  return v5;
}

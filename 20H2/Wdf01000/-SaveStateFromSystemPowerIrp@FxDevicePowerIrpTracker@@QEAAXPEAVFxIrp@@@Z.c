/*
 * XREFs of ?SaveStateFromSystemPowerIrp@FxDevicePowerIrpTracker@@QEAAXPEAVFxIrp@@@Z @ 0x1C001C93C
 * Callers:
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0010080 (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011144 (-DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDevicePowerIrpTracker::SaveStateFromSystemPowerIrp(FxDevicePowerIrpTracker *this, FxIrp *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int LowPart; // r9d
  POWER_ACTION ShutdownType; // r8d
  unsigned int Length; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax

  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  ShutdownType = CurrentStackLocation->Parameters.Power.ShutdownType;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( LowPart == 1 )
    v6 = HIWORD(Length);
  else
    v6 = Length >> 12;
  v7 = v6 & 0xF;
  if ( v7 <= 1 )
  {
LABEL_8:
    ShutdownType = PowerActionNone;
    goto LABEL_9;
  }
  if ( v7 <= 4 )
  {
    ShutdownType = PowerActionSleep;
  }
  else
  {
    if ( v7 != 5 )
    {
      if ( v7 == 6 )
        goto LABEL_9;
      goto LABEL_8;
    }
    ShutdownType = PowerActionHibernate;
  }
LABEL_9:
  if ( LowPart == 1 )
    this->m_S0PowerAction = ShutdownType;
  else
    this->m_SxPowerAction = ShutdownType;
}

/*
 * XREFs of RaUnitPowerIrp @ 0x1C0012238
 * Callers:
 *     RaDriverPowerIrp @ 0x1C00120C0 (RaDriverPowerIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B600 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B644 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitSetPowerIrp @ 0x1C001231C (RaidUnitSetPowerIrp.c)
 *     WPP_SF_qq @ 0x1C00334D0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0033520 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0033580 (WPP_SF_qqDD.c)
 */

__int64 __fastcall RaUnitPowerIrp(PVOID Context, PIRP Irp, __int64 a3)
{
  signed int v5; // eax
  int MinorFunction; // ebp
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v10; // r8d

  LOBYTE(a3) = 1;
  v5 = RaUnitAcquireRemoveLock((__int64)Context, (__int64)Irp, a3);
  if ( v5 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, v5);
  }
  else
  {
    MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        44LL,
        &WPP_b3ad513c322230fb96603cfbc644830e_Traceguids,
        Context,
        Irp,
        MinorFunction);
    }
    if ( MinorFunction == 2 )
    {
      v7 = RaidUnitSetPowerIrp(Context, Irp);
    }
    else
    {
      if ( MinorFunction == 3 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            46LL,
            &WPP_b3ad513c322230fb96603cfbc644830e_Traceguids,
            Context,
            Irp);
        }
        v10 = 0;
      }
      else
      {
        v10 = -1073741637;
      }
      v7 = RaidCompleteRequestEx(Irp, 0, v10);
    }
    v8 = v7;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        45LL,
        &WPP_b3ad513c322230fb96603cfbc644830e_Traceguids,
        Context,
        Irp,
        MinorFunction,
        v7);
    }
    RaUnitReleaseRemoveLock((__int64)Context);
    return v8;
  }
}

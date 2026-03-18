/*
 * XREFs of ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x1C00174D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0017090 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0017DC4 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 */

void __fastcall FxPowerPolicyOwnerSettings::_PowerStateCallback(void *Context, void *Argument1, void *Argument2)
{
  _KEVENT *v5; // rcx
  FxPkgPnp *v6; // rcx

  if ( Argument1 == (void *)3 )
  {
    FxWaitLockInternal::AcquireLock(
      (FxWaitLockInternal *)(*((_QWORD *)Context + 78) + 736LL),
      (_FX_DRIVER_GLOBALS *)3,
      0LL);
    if ( Argument2 )
    {
      if ( Argument2 == (void *)1 )
      {
        v6 = (FxPkgPnp *)*((_QWORD *)Context + 78);
        *((_BYTE *)Context + 902) = 1;
        FxPkgPnp::SaveState(v6, 1u);
      }
    }
    else
    {
      FxPkgPnp::SaveState(*((FxPkgPnp **)Context + 78), 1u);
      *((_BYTE *)Context + 902) = 0;
    }
    v5 = (_KEVENT *)(*((_QWORD *)Context + 78) + 736LL);
    v5[1].Header.WaitListHead.Flink = 0LL;
    KeSetEvent(v5, 0, 0);
    KeLeaveCriticalRegion();
  }
}

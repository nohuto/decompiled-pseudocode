/*
 * XREFs of ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01703B4
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0063E6C (RIMFreeSpecificDevWorker.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C015D1D0 (RIMDestroyPointerDeviceDeadzone.c)
 *     rimDestroyDeadzone @ 0x1C015E070 (rimDestroyDeadzone.c)
 *     RIMInitializeDeadzone @ 0x1C0161368 (RIMInitializeDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C016FD74 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01705E8 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C0170694 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C0170470 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C0181140 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 */

void __fastcall RIMDeadzone::Release(DeadzonePalmTelemetry **this)
{
  DeadzonePalmTelemetry *v3; // rcx

  if ( (*((_DWORD *)this + 1))-- == 1 )
  {
    RIMDeadzone::_ClearDeadzoneAreas((RIMDeadzone *)this);
    v3 = this[7];
    if ( v3 )
    {
      DeadzonePalmTelemetry::ClearSession(v3);
      Win32FreePool((__int64)this[7]);
    }
  }
}

/*
 * XREFs of HUBMUX_UnregisterWithHSM @ 0x1C0010608
 * Callers:
 *     HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup @ 0x1C001E050 (HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup.c)
 *     HUBDSM_UnregsiteringWithHsmOnDetach @ 0x1C001E080 (HUBDSM_UnregsiteringWithHsmOnDetach.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMUX_UnregisterWithHSM(__int64 a1)
{
  __int64 v2; // rdi
  KIRQL v3; // al
  int v4; // ecx
  char v5; // bp
  bool v6; // si
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // edx

  if ( (*(_DWORD *)(a1 + 1636) & 0x40) != 0 )
  {
    *(_OWORD *)(a1 + 1516) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFBF);
  }
  v2 = *(_QWORD *)a1 + 2320LL;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  v4 = *(_DWORD *)(a1 + 240);
  v5 = 0;
  v6 = 0;
  if ( (v4 & 2) != 0 )
  {
    --*(_DWORD *)(v2 + 28);
    v5 = 1;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 240), 0xFFFFFFFD);
    v4 = *(_DWORD *)(a1 + 240);
  }
  if ( (v4 & 4) != 0 )
    v6 = _InterlockedAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF) == 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 240), 0xFFFFFFF7);
  v7 = *(_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(v7 + 8) != a1 + 192 || (v8 = *(_QWORD **)(a1 + 200), *v8 != a1 + 192) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v3);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
             WdfDriverGlobals,
             v9,
             "DSM Registration Tag",
             2712LL,
             "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  if ( v6 )
  {
    if ( v5 )
      v11 = 2018;
    else
      v11 = 2014;
    return HUBSM_AddEvent(*(_QWORD *)a1 + 1264LL, v11);
  }
  return result;
}

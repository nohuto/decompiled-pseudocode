/*
 * XREFs of Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C006C1A0
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     Controller_UpdateIdleTimeout @ 0x1C006C49C (Controller_UpdateIdleTimeout.c)
 */

_UNKNOWN **__fastcall Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(__int64 a1)
{
  int v2; // edx
  _UNKNOWN **result; // rax

  if ( *(_DWORD *)(a1 + 420) <= 2u && !*(_DWORD *)(a1 + 464) && *(_DWORD *)(a1 + 528) != 10000 )
  {
    Controller_UpdateIdleTimeout(a1, 10000LL);
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      return (_UNKNOWN **)WPP_RECORDER_SF_d(
                            *(_QWORD *)(a1 + 72),
                            v2,
                            4,
                            28,
                            (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
                            16);
    }
  }
  return result;
}

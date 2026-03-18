/*
 * XREFs of Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C006AF80
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0013C00 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     Controller_UpdateIdleTimeout @ 0x1C0075710 (Controller_UpdateIdleTimeout.c)
 */

_UNKNOWN **__fastcall Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(__int64 a1)
{
  int v2; // edx
  _UNKNOWN **result; // rax

  if ( *(_DWORD *)(a1 + 420) <= 2u && !*(_DWORD *)(a1 + 464) && *(_DWORD *)(a1 + 512) != 5000 )
  {
    Controller_UpdateIdleTimeout(a1, 5000LL);
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      return (_UNKNOWN **)WPP_RECORDER_SF_d(
                            *(_QWORD *)(a1 + 72),
                            v2,
                            4,
                            28,
                            (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
                            136);
    }
  }
  return result;
}

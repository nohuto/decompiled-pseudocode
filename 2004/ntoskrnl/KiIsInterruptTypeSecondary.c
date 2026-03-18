/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140375D74
 * Callers:
 *     KeDisconnectInterrupt @ 0x140374914 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x140374B20 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x1403753AC (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x140389BE4 (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C00780[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}

/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140374F64
 * Callers:
 *     KeDisconnectInterrupt @ 0x140373B04 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x140373D10 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14037459C (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x140388C74 (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C00780[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}

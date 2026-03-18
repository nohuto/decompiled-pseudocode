/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x1403AFE68
 * Callers:
 *     KeUnmaskInterrupt @ 0x1403979C4 (KeUnmaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x1403AEB58 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x1403AED64 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x1403AF5E4 (KeConnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C01DD0[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}

/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140377CE4
 * Callers:
 *     KeDisconnectInterrupt @ 0x140376884 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x140376A90 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14037731C (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x14038C724 (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C00780[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}

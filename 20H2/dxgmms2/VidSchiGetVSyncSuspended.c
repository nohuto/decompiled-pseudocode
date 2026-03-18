/*
 * XREFs of VidSchiGetVSyncSuspended @ 0x1C0001A08
 * Callers:
 *     VidSchIsVSyncEnabled @ 0x1C00644B0 (VidSchIsVSyncEnabled.c)
 *     VidSchiControlVSync @ 0x1C008589C (VidSchiControlVSync.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiGetVSyncSuspended(__int64 a1, unsigned int a2)
{
  if ( *(_BYTE *)(a1 + 2132) )
    return *(_BYTE *)(a2 + a1 + 2133);
  else
    return *(_BYTE *)(a1 + 2133);
}

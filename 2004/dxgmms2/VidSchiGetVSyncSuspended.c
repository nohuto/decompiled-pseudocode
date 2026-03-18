/*
 * XREFs of VidSchiGetVSyncSuspended @ 0x1C0002A08
 * Callers:
 *     VidSchIsVSyncEnabled @ 0x1C007B600 (VidSchIsVSyncEnabled.c)
 *     VidSchiControlVSync @ 0x1C00866B4 (VidSchiControlVSync.c)
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

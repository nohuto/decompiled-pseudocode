/*
 * XREFs of VidSchiGetVSyncSuspended @ 0x1C0002EF4
 * Callers:
 *     VidSchiControlVSync @ 0x1C007B390 (VidSchiControlVSync.c)
 *     VidSchIsVSyncEnabled @ 0x1C007BBA0 (VidSchIsVSyncEnabled.c)
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

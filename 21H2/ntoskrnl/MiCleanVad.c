/*
 * XREFs of MiCleanVad @ 0x140688508
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiWaitForVadDeletion @ 0x14055C050 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x140688090 (MiUnmapVad.c)
 */

__int64 __fastcall MiCleanVad(char *P)
{
  unsigned int v2; // edi
  _DWORD *v3; // rcx

  v2 = 0;
  if ( (unsigned int)MiVadDeleted((__int64)P) == 1 )
  {
    MiWaitForVadDeletion((__int64)v3);
    MiUnlockAndDereferenceVad(P);
    return 1;
  }
  else if ( (v3[12] & 0x100000) != 0 )
  {
    MiDeleteVad(v3, 0LL, 0);
  }
  else
  {
    MiUnmapVad((__int64)v3, 0LL, 0);
  }
  return v2;
}

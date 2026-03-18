/*
 * XREFs of MiCleanVad @ 0x1406F8C0C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiWaitForVadDeletion @ 0x140202010 (MiWaitForVadDeletion.c)
 *     MiVadDeleted @ 0x14030EB80 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     MiUnmapVad @ 0x1406F9060 (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 */

__int64 __fastcall MiCleanVad(char *P)
{
  unsigned int v2; // edi
  _DWORD *v3; // rcx

  v2 = 0;
  if ( (unsigned int)MiVadDeleted((__int64)P) )
  {
    MiWaitForVadDeletion((__int64)v3);
    MiUnlockAndDereferenceVad(P);
    return 1;
  }
  else if ( (v3[12] & 0x200000) != 0 )
  {
    MiDeleteVad(v3);
  }
  else
  {
    MiUnmapVad(v3);
  }
  return v2;
}

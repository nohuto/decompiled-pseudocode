/*
 * XREFs of MiCleanVad @ 0x1406357F0
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiVadDeleted @ 0x1402A4680 (MiVadDeleted.c)
 *     MiWaitForVadDeletion @ 0x140556320 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x140636140 (MiUnmapVad.c)
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
    MiUnmapVad(v3, 0LL, 0LL);
  }
  return v2;
}

/*
 * XREFs of MiCleanVad @ 0x14068551C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiVadDeleted @ 0x14022C150 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiWaitForVadDeletion @ 0x14055A340 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x140685B60 (MiUnmapVad.c)
 */

__int64 __fastcall MiCleanVad(PVOID P)
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
    MiUnmapVad(v3);
  }
  return v2;
}

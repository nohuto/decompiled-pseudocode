/*
 * XREFs of MiCleanVad @ 0x1406007B0
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiVadDeleted @ 0x14024B650 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiWaitForVadDeletion @ 0x140556970 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x140601100 (MiUnmapVad.c)
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
    MiUnmapVad(v3, 0LL, 0LL);
  }
  return v2;
}

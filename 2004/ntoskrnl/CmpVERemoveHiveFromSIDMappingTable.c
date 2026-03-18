/*
 * XREFs of CmpVERemoveHiveFromSIDMappingTable @ 0x140643AE0
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14064364C (CmpCompleteUnloadKey.c)
 *     CmpDestroyHive @ 0x1407174E8 (CmpDestroyHive.c)
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CmpVERemoveHiveFromSIDMappingTable(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rbx

  if ( (*(_DWORD *)(a1 + 4152) & 2) != 0 )
  {
    ExAcquireFastMutex(&CmpSIDMappingLock);
    v2 = 0;
    if ( CmpSIDToHiveMappingCount )
    {
      v3 = (char *)CmpSIDToHiveMapping + 24;
      do
      {
        if ( *v3 == a1 )
          break;
        ++v2;
        v3 += 4;
      }
      while ( v2 < CmpSIDToHiveMappingCount );
    }
    v4 = 32LL * v2;
    ExFreePoolWithTag(*(PVOID *)((char *)CmpSIDToHiveMapping + v4 + 8), 0);
    memmove(
      (char *)CmpSIDToHiveMapping + v4,
      (char *)CmpSIDToHiveMapping + 32 * v2 + 32,
      32LL * (--CmpSIDToHiveMappingCount - v2));
    KeReleaseGuardedMutex(&CmpSIDMappingLock);
  }
}

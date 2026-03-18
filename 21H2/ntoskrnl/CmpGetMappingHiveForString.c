/*
 * XREFs of CmpGetMappingHiveForString @ 0x140717660
 * Callers:
 *     CmpGetCmHiveFromVirtualPath @ 0x140717624 (CmpGetCmHiveFromVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x140917348 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     CmpCompareUnicodeString @ 0x140717780 (CmpCompareUnicodeString.c)
 *     CmpHashUnicodeComponent @ 0x140718B68 (CmpHashUnicodeComponent.c)
 */

__int64 __fastcall CmpGetMappingHiveForString(_WORD *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ebx
  char *v6; // rcx
  unsigned int v8; // esi
  char *v9; // rcx

  v4 = 0;
  v5 = CmpHashUnicodeComponent(a1);
  ExAcquireFastMutex(&CmpSIDMappingLock);
  if ( CmSIDMappingCacheHit >= 0
    && CmSIDMappingCacheHit < CmpSIDToHiveMappingCount
    && (v6 = (char *)CmpSIDToHiveMapping + 32 * CmSIDMappingCacheHit, *((_DWORD *)v6 + 4) == v5)
    && *(_WORD *)v6 == *a1
    && !(unsigned int)CmpCompareUnicodeString(v6, a1, 0LL) )
  {
    *a2 = *((_QWORD *)CmpSIDToHiveMapping + 4 * CmSIDMappingCacheHit + 3);
  }
  else
  {
    v8 = 0;
    if ( CmpSIDToHiveMappingCount )
    {
      while ( 1 )
      {
        v9 = (char *)CmpSIDToHiveMapping + 32 * v8;
        if ( *((_DWORD *)v9 + 4) == v5 && *(_WORD *)v9 == *a1 && !(unsigned int)CmpCompareUnicodeString(v9, a1, 0LL) )
          break;
        if ( ++v8 >= CmpSIDToHiveMappingCount )
          goto LABEL_14;
      }
      CmSIDMappingCacheHit = v8;
      *a2 = *((_QWORD *)CmpSIDToHiveMapping + 4 * v8 + 3);
    }
    else
    {
LABEL_14:
      v4 = -1073741275;
    }
  }
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
  return v4;
}

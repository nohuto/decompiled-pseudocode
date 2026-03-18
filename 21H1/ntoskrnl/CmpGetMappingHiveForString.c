/*
 * XREFs of CmpGetMappingHiveForString @ 0x140691560
 * Callers:
 *     CmpGetCmHiveFromVirtualPath @ 0x140691524 (CmpGetCmHiveFromVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x14086C184 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     CmpCompareUnicodeString @ 0x140691678 (CmpCompareUnicodeString.c)
 *     CmpHashUnicodeComponent @ 0x1406937F4 (CmpHashUnicodeComponent.c)
 */

__int64 __fastcall CmpGetMappingHiveForString(_WORD *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ebx
  char *v6; // rsi
  unsigned int v8; // r15d
  unsigned int v9; // esi
  _QWORD *v10; // r12
  char *v11; // rcx

  v4 = 0;
  v5 = CmpHashUnicodeComponent(a1);
  ExAcquireFastMutex(&CmpSIDMappingLock);
  if ( CmSIDMappingCacheHit >= 0
    && CmSIDMappingCacheHit < CmpSIDToHiveMappingCount
    && (v6 = (char *)CmpSIDToHiveMapping + 32 * CmSIDMappingCacheHit, *((_DWORD *)v6 + 4) == v5)
    && *(_WORD *)v6 == *a1
    && !(unsigned int)CmpCompareUnicodeString(v6, a1, 0LL) )
  {
    *a2 = *((_QWORD *)v6 + 3);
  }
  else
  {
    v8 = CmpSIDToHiveMappingCount;
    v9 = 0;
    if ( CmpSIDToHiveMappingCount )
    {
      while ( 1 )
      {
        v10 = CmpSIDToHiveMapping;
        v11 = (char *)CmpSIDToHiveMapping + 32 * v9;
        if ( *((_DWORD *)v11 + 4) == v5 && *(_WORD *)v11 == *a1 && !(unsigned int)CmpCompareUnicodeString(v11, a1, 0LL) )
          break;
        if ( ++v9 >= v8 )
          goto LABEL_14;
      }
      CmSIDMappingCacheHit = v9;
      *a2 = v10[4 * v9 + 3];
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

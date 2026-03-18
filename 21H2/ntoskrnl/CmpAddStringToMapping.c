/*
 * XREFs of CmpAddStringToMapping @ 0x1406E236C
 * Callers:
 *     CmpVEAddHiveToSIDMappingTable @ 0x1406E22CC (CmpVEAddHiveToSIDMappingTable.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     CmpHashUnicodeComponent @ 0x140718B68 (CmpHashUnicodeComponent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpAddStringToMapping(const void **a1, __int64 a2)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  __int64 v6; // rdx
  PVOID v7; // r9
  int v8; // eax
  __int64 v9; // r8
  PVOID v11; // rdi
  PVOID PoolWithTag; // rax

  v4 = 0;
  ExAcquireFastMutex(&CmpSIDMappingLock);
  if ( CmpSIDToHiveMappingCount == -1 )
  {
    v4 = -1073741675;
    goto LABEL_5;
  }
  if ( CmpSIDToHiveMappingCount + 1 >= (unsigned int)CmpSIDToHiveMappingSize )
  {
    v11 = CmpSIDToHiveMapping;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (unsigned int)(CmpSIDToHiveMappingSize + 4), 0x65564D43u);
    CmpSIDToHiveMapping = PoolWithTag;
    if ( !PoolWithTag )
    {
      CmpSIDToHiveMapping = v11;
      goto LABEL_11;
    }
    CmpSIDToHiveMappingSize += 4;
    if ( v11 )
    {
      memmove(PoolWithTag, v11, 32LL * (unsigned int)CmpSIDToHiveMappingCount);
      ExFreePoolWithTag(v11, 0x65564D43u);
    }
  }
  v5 = (char *)CmpSIDToHiveMapping;
  v6 = 32LL * (unsigned int)CmpSIDToHiveMappingCount;
  *(_QWORD *)((char *)CmpSIDToHiveMapping + v6 + 24) = a2;
  *(_WORD *)&v5[v6] = *(_WORD *)a1;
  *(_WORD *)&v5[v6 + 2] = *(_WORD *)a1;
  v7 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a1, 0x65564D43u);
  *((_QWORD *)CmpSIDToHiveMapping + 4 * (unsigned int)CmpSIDToHiveMappingCount + 1) = v7;
  if ( !v7 )
  {
LABEL_11:
    v4 = -1073741670;
    goto LABEL_5;
  }
  memmove(v7, a1[1], *(unsigned __int16 *)a1);
  v8 = CmpHashUnicodeComponent(a1);
  v9 = 32LL * (unsigned int)CmpSIDToHiveMappingCount++;
  *(_DWORD *)((char *)CmpSIDToHiveMapping + v9 + 16) = v8;
LABEL_5:
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
  return v4;
}

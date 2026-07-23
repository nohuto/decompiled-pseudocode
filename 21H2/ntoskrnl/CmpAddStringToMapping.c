/*
 * XREFs of CmpAddStringToMapping @ 0x140621174
 * Callers:
 *     CmpVEAddHiveToSIDMappingTable @ 0x1406210D4 (CmpVEAddHiveToSIDMappingTable.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpHashUnicodeComponent @ 0x14065F044 (CmpHashUnicodeComponent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpAddStringToMapping(const void **a1, __int64 a2)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  __int64 v6; // rdx
  PVOID v7; // rax
  int v8; // edi
  char *v9; // r14
  __int64 v10; // rbp
  PVOID v12; // rdi
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
    v12 = CmpSIDToHiveMapping;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (unsigned int)(CmpSIDToHiveMappingSize + 4), 0x65564D43u);
    CmpSIDToHiveMapping = PoolWithTag;
    if ( !PoolWithTag )
    {
      CmpSIDToHiveMapping = v12;
      goto LABEL_11;
    }
    CmpSIDToHiveMappingSize += 4;
    if ( v12 )
    {
      memmove(PoolWithTag, v12, 32LL * (unsigned int)CmpSIDToHiveMappingCount);
      ExFreePoolWithTag(v12, 0x65564D43u);
    }
  }
  v5 = (char *)CmpSIDToHiveMapping;
  v6 = 32LL * (unsigned int)CmpSIDToHiveMappingCount;
  *(_QWORD *)((char *)CmpSIDToHiveMapping + v6 + 24) = a2;
  *(_WORD *)&v5[v6] = *(_WORD *)a1;
  *(_WORD *)&v5[v6 + 2] = *(_WORD *)a1;
  v7 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a1, 0x65564D43u);
  v8 = CmpSIDToHiveMappingCount;
  v9 = (char *)CmpSIDToHiveMapping;
  v10 = 32LL * (unsigned int)CmpSIDToHiveMappingCount;
  *(_QWORD *)((char *)CmpSIDToHiveMapping + v10 + 8) = v7;
  if ( !v7 )
  {
LABEL_11:
    v4 = -1073741670;
    goto LABEL_5;
  }
  memmove(v7, a1[1], *(unsigned __int16 *)a1);
  *(_DWORD *)&v9[v10 + 16] = CmpHashUnicodeComponent(a1);
  CmpSIDToHiveMappingCount = v8 + 1;
LABEL_5:
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
  return v4;
}

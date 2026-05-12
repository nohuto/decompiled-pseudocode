/*
 * XREFs of RaidUnitCreateDumpInfo @ 0x1C007A77C
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C007A1EC (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 *     RaidUnitFreeDumpInfo @ 0x1C00491A0 (RaidUnitFreeDumpInfo.c)
 *     RaidUnitCreateDumpData @ 0x1C007A63C (RaidUnitCreateDumpData.c)
 */

__int64 __fastcall RaidUnitCreateDumpInfo(__int64 a1, __int64 a2, PVOID **a3)
{
  __int64 v4; // r9
  PVOID *Pool; // rax
  PVOID *v7; // rbx
  int v8; // edi
  PVOID v9; // rcx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  PVOID *v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = a2;
  *a3 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  P = 0LL;
  LODWORD(v12) = 0;
  Pool = (PVOID *)RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, v4);
  v13 = Pool;
  v7 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x48uLL);
    v7[2] = v7 + 1;
    v7[1] = v7 + 1;
    *(_DWORD *)v7 = 72;
    *(_OWORD *)(v7 + 3) = *(_OWORD *)(a1 + 1976);
    v8 = RaidUnitCreateDumpData(a1, &P, &v12);
    if ( v8 < 0 )
    {
      v9 = P;
    }
    else
    {
      *((_DWORD *)v7 + 11) = v12;
      v7[6] = P;
      v9 = 0LL;
      *a3 = v7;
      v7 = 0LL;
      v13 = 0LL;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0x44436152u);
    if ( v7 )
      RaidUnitFreeDumpInfo(&v13);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}

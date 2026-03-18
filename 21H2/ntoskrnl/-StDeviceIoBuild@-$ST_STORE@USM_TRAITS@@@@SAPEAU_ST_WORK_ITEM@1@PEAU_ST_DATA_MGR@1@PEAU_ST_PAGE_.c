/*
 * XREFs of ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x1405F83FC
 * Callers:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1405F8DD0 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x1405FA12C (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1405FA930 (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StRegionReadReference@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x1405FA964 (-StRegionReadReference@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmCalcIoWorkItemSize @ 0x1405FD2E4 (SmCalcIoWorkItemSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDeviceIoBuild(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r11d
  _DWORD *v7; // rdi
  int v8; // r8d
  unsigned int v9; // r12d
  int v10; // r10d
  unsigned int v11; // r14d
  unsigned __int64 PoolWithTag; // rsi
  _DWORD *v13; // rbp
  unsigned int v14; // eax
  size_t v15; // r15
  int v16; // eax
  int v17; // ecx

  v6 = *(_DWORD *)(a1 + 824) + *(unsigned __int16 *)(a2 + 4);
  v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 792);
  v9 = *(_DWORD *)a2 >> *(_DWORD *)(a1 + 812);
  v10 = (v8 - 1) & (16 * (*(_DWORD *)a2 & *(_DWORD *)(a1 + 808)));
  v11 = v8 + v10 - ((v8 - 1) & (v10 + v8 + v6 - 1)) + v6 - 1;
  if ( (unsigned int)ST_STORE<SM_TRAITS>::StRegionReadReference(a1, v9) )
  {
    PoolWithTag = *(_QWORD *)(a1 + 1800);
    if ( PoolWithTag )
    {
      *(_DWORD *)(a1 + 1800) |= 1u;
    }
    else
    {
      PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(
                                        NonPagedPoolNx,
                                        v11 + *(_DWORD *)(a1 + 792) + 28,
                                        0x74536D73u);
      if ( !PoolWithTag )
        goto LABEL_13;
    }
    *(_QWORD *)(PoolWithTag + 4) = 0LL;
    *(_QWORD *)(PoolWithTag + 12) = 0LL;
    *(_QWORD *)(PoolWithTag + 20) = 0LL;
    *(_DWORD *)PoolWithTag = 1;
    *(_OWORD *)(PoolWithTag + 12) = *(_OWORD *)a2;
    v13 = *(_DWORD **)(a1 + 1808);
    v14 = SmCalcIoWorkItemSize(
            *(_QWORD *)(a1 + 800),
            -(__int64)*(unsigned int *)(a1 + 792) & (PoolWithTag + *(unsigned int *)(a1 + 792) + 27LL),
            v11);
    v15 = v14;
    if ( v13 )
    {
      *(_DWORD *)(a1 + 1808) |= 1u;
LABEL_8:
      memset(v13, 0, v15);
      *v13 |= 7u;
      v7 = v13;
      *((_QWORD *)v13 + 1) = a4;
      v16 = v13[7];
      *((_QWORD *)v13 + 2) = PoolWithTag;
      v13[6] = *(_DWORD *)a2;
      v13[7] = v16 & 0x1D | (32 * v11) | *(_DWORD *)(a1 + 832) & 2;
      return v7;
    }
    v13 = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x74536D73u);
    if ( v13 )
      goto LABEL_8;
    v17 = *(_DWORD *)(a1 + 1800);
    if ( (v17 & 1) != 0 && (PoolWithTag | 1) == *(_QWORD *)(a1 + 1800) )
      *(_DWORD *)(a1 + 1800) = v17 & 0xFFFFFFFE;
    else
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
LABEL_13:
    ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, v9);
  }
  return v7;
}

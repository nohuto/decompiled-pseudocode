/*
 * XREFs of ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14022B0E4
 * Callers:
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14022B050 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028B860 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14022B358 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14022B578 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x14022B5D4 (-StCompactionPickPriority@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x14022B73C (-StCompactionFindEmptiest@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14028DFD8 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140290D48 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140292714 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformInMem(__int64 a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rbp
  unsigned int Emptiest; // eax
  unsigned int v8; // r12d
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // ebx
  unsigned int v13; // r13d
  _WORD **v14; // r12
  __int64 v15; // rax
  unsigned int v18; // [rsp+34h] [rbp-164h]
  _WORD *v19; // [rsp+38h] [rbp-160h]
  _OWORD v20[2]; // [rsp+40h] [rbp-158h] BYREF
  _BYTE v21[256]; // [rsp+60h] [rbp-138h] BYREF

  memset(v21, 0, sizeof(v21));
  v4 = 0LL;
  v5 = (unsigned int)(*(_DWORD *)(a1 + 816) - *(_DWORD *)(a1 + 820) + 1);
  LODWORD(v6) = -1;
  memset(v20, 0, sizeof(v20));
  Emptiest = ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(a1, v21, 32LL, v5);
  v8 = ST_STORE<SM_TRAITS>::StCompactionPickPriority(a1, v21, Emptiest, v20);
  v9 = (__int64)(*(_QWORD *)&v20[0] - *(_QWORD *)(a1 + 1032)) >> 1;
  v18 = v8;
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
    && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v9) )
  {
    return (unsigned int)-1073740024;
  }
  v10 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v9, 0LL, 32LL);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073741739;
  if ( v10 == -1 )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v12 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v10, v9, v10, v9, a2);
    if ( v12 >= 0 )
    {
      v13 = 1;
      if ( v8 <= 1 )
      {
LABEL_18:
        v12 = 0;
LABEL_19:
        v4 = 0LL;
      }
      else
      {
        v14 = (_WORD **)v20 + 1;
        while ( 1 )
        {
          v19 = *v14;
          v6 = ((__int64)*v14 - *(_QWORD *)(a1 + 1032)) >> 1;
          if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
            && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v6) )
          {
LABEL_28:
            v12 = -1073740024;
            goto LABEL_19;
          }
          v15 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v6, 0LL, 32LL);
          v4 = v15;
          if ( !v15 )
            break;
          if ( v15 == -1 )
            goto LABEL_28;
          if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
            && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v9) )
          {
            v12 = -1073740024;
            goto LABEL_20;
          }
          v12 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v4, v6, v11, v9, a2);
          if ( (*v19 & 0x1FFF) != 0 )
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v9);
            v11 = v4;
            LODWORD(v9) = v6;
          }
          else
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v6);
            ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v6);
          }
          if ( v12 < 0 )
            goto LABEL_19;
          ++v13;
          ++v14;
          if ( v13 >= v18 )
            goto LABEL_18;
        }
        v12 = -1073741739;
      }
    }
LABEL_20:
    if ( v11 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v9);
    if ( v4 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v6);
  }
  return (unsigned int)v12;
}

/*
 * XREFs of ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1402FDF70
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14023ECE0 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402FDEDC (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x1402C48CC (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1402C8788 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402C889C (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402FE1E4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1402FE404 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x1402FE460 (-StCompactionPickPriority@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x1402FE5C8 (-StCompactionFindEmptiest@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v13; // r8
  unsigned int v14; // r13d
  _WORD **v15; // r12
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v20; // [rsp+34h] [rbp-164h]
  _WORD *v21; // [rsp+38h] [rbp-160h]
  _OWORD v22[2]; // [rsp+40h] [rbp-158h] BYREF
  _BYTE v23[256]; // [rsp+60h] [rbp-138h] BYREF

  memset(v23, 0, sizeof(v23));
  v4 = 0LL;
  v5 = (unsigned int)(*(_DWORD *)(a1 + 816) - *(_DWORD *)(a1 + 820) + 1);
  LODWORD(v6) = -1;
  memset(v22, 0, sizeof(v22));
  Emptiest = ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(a1, v23, 32LL, v5);
  v8 = ST_STORE<SM_TRAITS>::StCompactionPickPriority(a1, v23, Emptiest, v22);
  v9 = (__int64)(*(_QWORD *)&v22[0] - *(_QWORD *)(a1 + 1032)) >> 1;
  v20 = v8;
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
    && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v9) )
  {
    return (unsigned int)-1073740024;
  }
  v10 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v9, 0, 32);
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
      v14 = 1;
      if ( v8 <= 1 )
      {
LABEL_18:
        v12 = 0;
LABEL_19:
        v4 = 0LL;
      }
      else
      {
        v15 = (_WORD **)v22 + 1;
        while ( 1 )
        {
          v21 = *v15;
          v6 = ((__int64)*v15 - *(_QWORD *)(a1 + 1032)) >> 1;
          if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
            && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v6) )
          {
LABEL_28:
            v12 = -1073740024;
            goto LABEL_19;
          }
          v16 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v6, 0, 32);
          v4 = v16;
          if ( !v16 )
            break;
          if ( v16 == -1 )
            goto LABEL_28;
          if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
            && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v9) )
          {
            v12 = -1073740024;
            goto LABEL_20;
          }
          v12 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v4, v6, v11, v9, a2);
          if ( (*v21 & 0x1FFF) != 0 )
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v9, v17);
            v11 = v4;
            LODWORD(v9) = v6;
          }
          else
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v6, v17);
            ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v6);
          }
          if ( v12 < 0 )
            goto LABEL_19;
          ++v14;
          ++v15;
          if ( v14 >= v20 )
            goto LABEL_18;
        }
        v12 = -1073741739;
      }
    }
LABEL_20:
    if ( v11 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v9, v13);
    if ( v4 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v6, v13);
  }
  return (unsigned int)v12;
}

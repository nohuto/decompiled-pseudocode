/*
 * XREFs of ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14022B444
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14022B358 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14059BE40 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14022B578 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x14022B5AC (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     MmStoreDecommitVirtualMemory @ 0x140250884 (MmStoreDecommitVirtualMemory.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402911E4 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  int v8; // r14d
  int v9; // edi
  __int64 v10; // r15
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-38h]

  v3 = *(unsigned int *)(a1 + 6208);
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  v7 = *v6 & 0x7FFFFFFFFFFF0000LL;
  if ( (a3 & 2) != 0 && !v7 )
    return 1075380276LL;
  v8 = 1;
  v9 = a3 & 1;
  if ( (*(_WORD *)v6 & 0x4000) != 0 )
    *(_WORD *)v6 &= ~0x4000u;
  else
    SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v6, a3 & 1);
  if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(a1, a2) )
    return 3221225646LL;
  if ( (__int64)*v6 >= 0 )
  {
    v8 = 0;
    MmStoreDecommitVirtualMemory(v7, v3);
  }
  if ( *(__int16 *)v6 < 0 )
    return 3221225646LL;
  v10 = *v6;
  *v6 = 0LL;
  v12[0] = v7;
  v13 = 0LL;
  v12[1] = v3;
  LODWORD(v13) = v8 | _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFE;
  v14 = 0LL;
  result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand)(
             a1,
             3LL,
             v12,
             v9 != 0 ? 11 : 8);
  if ( (_DWORD)result != -1073741650 )
    return 0LL;
  *v6 = v10;
  return result;
}

/*
 * XREFs of ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x14059AE90
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059AFC8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14059FAA8 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmDeviceError(__int64 a1, int a2, unsigned int a3)
{
  _DWORD *v3; // rbx
  unsigned int v4; // r11d
  int v7; // edi
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  bool v10; // zf
  int v11; // ecx

  v3 = *(_DWORD **)(a1 + 1816);
  v4 = a3;
  if ( !v3
    || a3 + 1073741549 <= 1
    || a3 == -1073741670
    || a3 == -1073741691
    || a3 == -1073741801
    || a3 == -1073741058
    || (*(_DWORD *)(a1 + 776) & 0x2000) != 0 && a3 == -2147483626 )
  {
    return;
  }
  v7 = 7;
  if ( !a2 )
  {
    if ( (++v3[1] & 0xF) != 0 )
      return;
    v8 = (*v3 - v3[2]) & 0xFFFFFFE0;
    v3[2] = *v3;
    if ( v8 > 0x200 )
      return;
    v7 = 3;
    goto LABEL_20;
  }
  v9 = (unsigned __int64)KiQueryUnbiasedInterruptTime() >> 23;
  v10 = *v3 == v3[4];
  v3[4] = *v3;
  if ( v10 && (v11 = v3[3]) != 0 )
  {
    v7 = 4;
    if ( (unsigned int)(v9 - v11) <= 7 )
      v7 = 7;
  }
  else
  {
    v3[3] = v9;
  }
  if ( v7 != 7 )
  {
LABEL_20:
    if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(&SmGlobals, *(_QWORD *)(a1 + 800), v7 != 3, v4) < 0 && !a2 )
      --v3[1];
  }
}

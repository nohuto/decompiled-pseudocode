/*
 * XREFs of ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x1405F8850
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405F8978 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1405FD08C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmDeviceError(__int64 a1, int a2, unsigned int a3)
{
  _DWORD *v3; // rbx
  unsigned int v4; // r11d
  unsigned int v7; // ecx
  int v8; // ecx
  unsigned __int64 v9; // rax
  bool v10; // zf
  int v11; // ecx
  unsigned int v12; // eax

  v3 = *(_DWORD **)(a1 + 1816);
  v4 = a3;
  if ( v3
    && a3 + 1073741549 > 1
    && a3 != -1073741670
    && a3 != -1073741691
    && a3 != -1073741801
    && a3 != -1073741058
    && ((*(_DWORD *)(a1 + 776) & 0x2000) == 0 || a3 != -2147483626) )
  {
    if ( a2 )
    {
      v9 = (unsigned __int64)KiQueryUnbiasedInterruptTime() >> 23;
      v10 = *v3 == v3[4];
      v3[4] = *v3;
      if ( !v10 || (v11 = v3[3]) == 0 )
      {
        v3[3] = v9;
        return;
      }
      v12 = v9 - v11;
      v8 = 4;
      if ( v12 <= 7 )
        return;
    }
    else
    {
      if ( (++v3[1] & 0xF) != 0 )
        return;
      v7 = (*v3 - v3[2]) & 0xFFFFFFE0;
      v3[2] = *v3;
      if ( v7 > 0x200 )
        return;
      v8 = 3;
    }
    if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(&SmGlobals, *(_QWORD *)(a1 + 800), v8 != 3, v4) < 0 && !a2 )
      --v3[1];
  }
}

/*
 * XREFs of _LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure@16 @ 0x4B330AB6
 * Callers:
 *     _LdrpVerifyAlternateResourceModuleEx@24 @ 0x4B2B874D (_LdrpVerifyAlternateResourceModuleEx@24.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0x4B2ADDDA (__tlgKeywordOn@12.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

char __fastcall LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(
        unsigned __int16 *a1,
        int a2,
        int a3,
        int a4)
{
  NTSTATUS v6; // eax
  _DWORD v8[2]; // [esp+10h] [ebp-A8h] BYREF
  __int16 v9; // [esp+18h] [ebp-A0h] BYREF
  __int16 v10; // [esp+1Ch] [ebp-9Ch] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+20h] [ebp-98h] BYREF
  _DWORD *v12; // [esp+40h] [ebp-78h]
  int v13; // [esp+44h] [ebp-74h]
  int v14; // [esp+48h] [ebp-70h]
  int v15; // [esp+4Ch] [ebp-6Ch]
  _DWORD *v16; // [esp+50h] [ebp-68h]
  int v17; // [esp+54h] [ebp-64h]
  int v18; // [esp+58h] [ebp-60h]
  int v19; // [esp+5Ch] [ebp-5Ch]
  int v20; // [esp+60h] [ebp-58h]
  int v21; // [esp+64h] [ebp-54h]
  _DWORD v22[19]; // [esp+68h] [ebp-50h] BYREF

  v6 = RtlRunOnceExecuteOnce(&stru_4B3A6670, (PRTL_RUN_ONCE_INIT_FN)LdrpResReportResourceAccessInternalInitOnce, 0, 0);
  if ( v6 >= 0 && (unsigned int)dword_4B3A3318 > 5 )
  {
    LOBYTE(v6) = _tlgKeywordOn(&dword_4B3A3318, 0x200000000000LL);
    if ( (_BYTE)v6 )
    {
      v8[0] = 16777728;
      v12 = v8;
      v8[1] = 0;
      v16 = v22;
      v20 = *((_DWORD *)a1 + 1);
      v22[0] = *a1;
      v22[2] = &v10;
      v22[10] = &v9;
      v13 = 0;
      v15 = 0;
      v17 = 0;
      v19 = 0;
      v21 = 0;
      v22[1] = 0;
      v22[3] = 0;
      v22[5] = 0;
      v22[7] = 0;
      v22[14] = a3;
      v10 = 4;
      v22[8] = 16;
      v9 = 4;
      v22[16] = 16;
      v14 = 8;
      v18 = 2;
      v22[4] = 2;
      v22[6] = a2;
      v22[9] = 0;
      v22[11] = 0;
      v22[12] = 2;
      v22[13] = 0;
      v22[15] = 0;
      v22[17] = 0;
      LOBYTE(v6) = _tlgWriteTransfer_EtwEventWriteTransfer(4, 4, 9u, &UserData);
    }
  }
  return v6;
}

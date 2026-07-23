/*
 * XREFs of _LdrpLogMapAndVerifyResourceFileFailure@20 @ 0x4B330851
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0x4B2ADDDA (__tlgKeywordOn@12.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

char __fastcall LdrpLogMapAndVerifyResourceFileFailure(
        int a1,
        unsigned __int16 *a2,
        char a3,
        int a4,
        unsigned __int16 *a5)
{
  NTSTATUS v7; // eax
  char v9; // [esp+Fh] [ebp-B9h] BYREF
  int v10; // [esp+10h] [ebp-B8h] BYREF
  int v11; // [esp+14h] [ebp-B4h] BYREF
  _DWORD v12[2]; // [esp+18h] [ebp-B0h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+20h] [ebp-A8h] BYREF
  _DWORD *v14; // [esp+40h] [ebp-88h]
  int v15; // [esp+44h] [ebp-84h]
  int v16; // [esp+48h] [ebp-80h]
  int v17; // [esp+4Ch] [ebp-7Ch]
  int *v18; // [esp+50h] [ebp-78h]
  int v19; // [esp+54h] [ebp-74h]
  int v20; // [esp+58h] [ebp-70h]
  int v21; // [esp+5Ch] [ebp-6Ch]
  _DWORD *v22; // [esp+60h] [ebp-68h]
  int v23; // [esp+64h] [ebp-64h]
  int v24; // [esp+68h] [ebp-60h]
  int v25; // [esp+6Ch] [ebp-5Ch]
  int v26; // [esp+70h] [ebp-58h]
  int v27; // [esp+74h] [ebp-54h]
  _DWORD v28[16]; // [esp+78h] [ebp-50h] BYREF
  _DWORD v29[3]; // [esp+B8h] [ebp-10h] BYREF

  v7 = RtlRunOnceExecuteOnce(&stru_4B3A6670, (PRTL_RUN_ONCE_INIT_FN)LdrpResReportResourceAccessInternalInitOnce, 0, 0);
  if ( v7 >= 0 && (unsigned int)dword_4B3A3318 > 5 )
  {
    LOBYTE(v7) = _tlgKeywordOn(&dword_4B3A3318, 0x200000000000LL);
    if ( (_BYTE)v7 )
    {
      v12[0] = 16777728;
      v14 = v12;
      v18 = &v10;
      v22 = v28;
      v26 = *((_DWORD *)a2 + 1);
      v28[0] = *a2;
      v9 = a3;
      v28[2] = &v9;
      v11 = a4;
      v20 = 4;
      v28[6] = &v11;
      v28[8] = 4;
      v28[10] = v29;
      v28[14] = *((_DWORD *)a5 + 1);
      v29[0] = *a5;
      v24 = 2;
      v28[12] = 2;
      v12[1] = 0;
      v15 = 0;
      v16 = 8;
      v17 = 0;
      v10 = a1;
      v19 = 0;
      v21 = 0;
      v23 = 0;
      v25 = 0;
      v27 = 0;
      v28[1] = 0;
      v28[3] = 0;
      v28[4] = 1;
      v28[5] = 0;
      v28[7] = 0;
      v28[9] = 0;
      v28[11] = 0;
      v28[13] = 0;
      v28[15] = 0;
      v29[1] = 0;
      LOBYTE(v7) = _tlgWriteTransfer_EtwEventWriteTransfer(2, 2, 0xAu, &UserData);
    }
  }
  return v7;
}

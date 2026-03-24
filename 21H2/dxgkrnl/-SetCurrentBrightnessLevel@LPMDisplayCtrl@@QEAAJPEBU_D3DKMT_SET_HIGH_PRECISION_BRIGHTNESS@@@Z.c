/*
 * XREFs of ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C02761BC
 * Callers:
 *     ?DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C0275950 (-DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013AB0C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C0275658 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

__int64 __fastcall LPMDisplayCtrl::SetCurrentBrightnessLevel(
        LPMDisplayCtrl *this,
        const struct _D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS *a2)
{
  PFILE_OBJECT *v2; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  unsigned __int8 v8; // al
  int v9; // edx
  int v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD InputBuffer[4]; // [rsp+40h] [rbp-9h] BYREF
  _DWORD v20[8]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v21; // [rsp+70h] [rbp+27h]
  int v22; // [rsp+78h] [rbp+2Fh]
  int v23; // [rsp+7Ch] [rbp+33h]
  int v24; // [rsp+80h] [rbp+37h]
  int v25; // [rsp+84h] [rbp+3Bh]
  NTSTATUS v26; // [rsp+88h] [rbp+3Fh]
  int v27; // [rsp+8Ch] [rbp+43h]

  v2 = FileObject;
  if ( !*((_DWORD *)FileObject + 11) )
  {
    v4 = WdLogNewEntry5_WdError(FileObject, a2);
    v5 = -1073741808;
    *(_QWORD *)(v4 + 24) = -1073741808LL;
LABEL_3:
    WdLogEvent5_WdError(v4);
    return v5;
  }
  if ( *(_DWORD *)a2 > 0x64u )
  {
    v4 = WdLogNewEntry5_WdError(FileObject, a2);
    v7 = *(unsigned int *)a2;
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = v7;
    *(_QWORD *)(v4 + 32) = -1073741811LL;
    goto LABEL_3;
  }
  v8 = *((_BYTE *)a2 + 8);
  if ( *((_DWORD *)FileObject + 12) )
  {
    if ( v8 )
      v9 = *((_DWORD *)FileObject + 40);
    else
      v9 = *((_DWORD *)FileObject + 41);
  }
  else if ( v8 )
  {
    v9 = *((_DWORD *)FileObject + 37);
  }
  else
  {
    v9 = *((_DWORD *)FileObject + 36);
    v8 = 0;
  }
  InputBuffer[0] = 0;
  *((_DWORD *)FileObject + 12) = v8;
  v10 = *((_DWORD *)a2 + 1);
  InputBuffer[2] = v9;
  InputBuffer[1] = v10;
  v11 = LPMDisplayCtrl::CallDriver(v2, 0x8321213C, InputBuffer, 0xCu, 0LL, 0, 0LL);
  v12 = *(unsigned int *)a2;
  v23 = 0;
  v22 = 0;
  v21 = 0LL;
  v13 = v11;
  v27 = *((_DWORD *)a2 + 1);
  v20[0] = 6;
  v20[1] = 64;
  memset(&v20[2], 0, 24);
  v24 = 67;
  v25 = v12;
  v26 = v11;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v14);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v20, CurrentProcessSessionId);
  if ( (int)v13 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v18 + 24) = *((unsigned int *)a2 + 1);
    *(_QWORD *)(v18 + 32) = v13;
    WdLogEvent5_WdError(v18);
  }
  return (unsigned int)v13;
}

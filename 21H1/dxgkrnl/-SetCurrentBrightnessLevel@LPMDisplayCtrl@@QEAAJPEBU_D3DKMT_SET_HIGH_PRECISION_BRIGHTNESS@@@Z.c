/*
 * XREFs of ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C0271AAC
 * Callers:
 *     ?DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C0271240 (-DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C0270F48 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
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
  unsigned int CurrentProcessSessionId; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _DWORD InputBuffer[4]; // [rsp+40h] [rbp-9h] BYREF
  _DWORD v19[8]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v20; // [rsp+70h] [rbp+27h]
  int v21; // [rsp+78h] [rbp+2Fh]
  int v22; // [rsp+7Ch] [rbp+33h]
  int v23; // [rsp+80h] [rbp+37h]
  int v24; // [rsp+84h] [rbp+3Bh]
  NTSTATUS v25; // [rsp+88h] [rbp+3Fh]
  int v26; // [rsp+8Ch] [rbp+43h]

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
  v22 = 0;
  v21 = 0;
  v20 = 0LL;
  v13 = v11;
  v26 = *((_DWORD *)a2 + 1);
  v19[0] = 6;
  v19[1] = 64;
  memset(&v19[2], 0, 24);
  v23 = 67;
  v24 = v12;
  v25 = v11;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v19, CurrentProcessSessionId);
  if ( (int)v13 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v17 + 24) = *((unsigned int *)a2 + 1);
    *(_QWORD *)(v17 + 32) = v13;
    WdLogEvent5_WdError(v17);
  }
  return (unsigned int)v13;
}

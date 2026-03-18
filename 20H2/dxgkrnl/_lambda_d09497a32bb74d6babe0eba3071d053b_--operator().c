/*
 * XREFs of _lambda_d09497a32bb74d6babe0eba3071d053b_::operator() @ 0x1C020A208
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020BA3C (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1C0035E10 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     McTemplateK0qtqqq_EtwWriteTransfer @ 0x1C0039A64 (McTemplateK0qtqqq_EtwWriteTransfer.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01362BC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

char __fastcall lambda_d09497a32bb74d6babe0eba3071d053b_::operator()(int **a1)
{
  unsigned int *v1; // rax
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edi
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // ecx
  int *v14; // rax
  int v16; // [rsp+50h] [rbp-19h] BYREF
  int v17; // [rsp+54h] [rbp-15h] BYREF
  int v18; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v19; // [rsp+5Ch] [rbp-Dh] BYREF
  int v20; // [rsp+60h] [rbp-9h] BYREF
  __int64 v21; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v22[2]; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v23[24]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+90h] [rbp+27h]
  int v25; // [rsp+98h] [rbp+2Fh]
  int v26; // [rsp+9Ch] [rbp+33h]
  int v27; // [rsp+A0h] [rbp+37h]
  int v28; // [rsp+A4h] [rbp+3Bh]
  int v29; // [rsp+A8h] [rbp+3Fh]
  int v30; // [rsp+ACh] [rbp+43h]

  v1 = (unsigned int *)a1[2];
  memset(v23, 0, sizeof(v23));
  v26 = 0;
  v3 = *(unsigned __int8 *)v1;
  v4 = (unsigned int)**a1;
  v5 = (unsigned int)(*a1[1] + (*a1[3] << 16));
  v25 = 0;
  v24 = 0LL;
  v22[0] = 6;
  v22[1] = 64;
  memset(v23, 0, sizeof(v23));
  v27 = 76;
  v28 = v5;
  v29 = v4;
  v30 = v3;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v22, CurrentProcessSessionId);
  v9 = PsGetCurrentProcessSessionId(v8, v7);
  v10 = v9;
  if ( (unsigned int)dword_1C00AFA90 > 5 )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)&dword_1C00AFA90, 0x400000000000LL);
    if ( (_BYTE)v9 )
    {
      v12 = (unsigned int)*a1[3];
      v13 = *(unsigned __int8 *)a1[2];
      v14 = *a1;
      v18 = *a1[1];
      v16 = v13;
      v17 = v12;
      v19 = *v14;
      v20 = v10;
      v21 = 33556480LL;
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v19,
                     byte_1C007D251,
                     v12,
                     v11,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v16);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
    LOBYTE(v9) = McTemplateK0qtqqq_EtwWriteTransfer(
                   (__int64)a1[3],
                   (__int64)a1[1],
                   *(unsigned __int8 *)a1[2],
                   **a1,
                   *(_BYTE *)a1[2],
                   *a1[1],
                   *a1[3],
                   v10);
  return v9;
}

/*
 * XREFs of _lambda_d80ae1be2ed16c50038304b59cdfb672_::operator() @ 0x1C02B9878
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02BB170 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1C0043320 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     McTemplateK0qtqqq_EtwWriteTransfer @ 0x1C0045430 (McTemplateK0qtqqq_EtwWriteTransfer.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

char __fastcall lambda_d80ae1be2ed16c50038304b59cdfb672_::operator()(int **a1)
{
  int *v1; // rsi
  char *v2; // rbx
  int *v3; // r14
  int *v4; // rdi
  int v5; // r8d
  int v6; // edx
  int v7; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r15d
  __int64 v14; // r9
  int v16; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v17; // [rsp+5Ch] [rbp-25h] BYREF
  int v18; // [rsp+60h] [rbp-21h] BYREF
  int v19; // [rsp+64h] [rbp-1Dh] BYREF
  int v20; // [rsp+68h] [rbp-19h] BYREF
  __int64 v21; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v22[2]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v23[24]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+A0h] [rbp+1Fh]
  int v26; // [rsp+A4h] [rbp+23h]
  int v27; // [rsp+A8h] [rbp+27h]
  int v28; // [rsp+ACh] [rbp+2Bh]
  int v29; // [rsp+B0h] [rbp+2Fh]
  int v30; // [rsp+B4h] [rbp+33h]

  memset(v23, 0, sizeof(v23));
  v26 = 0;
  v1 = a1[3];
  v2 = (char *)a1[2];
  v3 = a1[1];
  v4 = *a1;
  v5 = (unsigned __int8)*v2;
  v6 = **a1;
  v7 = *v3 + (*v1 << 16);
  v25 = 0;
  v24 = 0LL;
  v28 = v7;
  v22[0] = 6;
  v22[1] = 64;
  memset(v23, 0, sizeof(v23));
  v27 = 76;
  v29 = v6;
  v30 = v5;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(0LL);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v22, CurrentProcessSessionId);
  v10 = PsGetCurrentProcessSessionId(v9);
  v13 = v10;
  if ( (unsigned int)dword_1C012F918 > 5 )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)&dword_1C012F918, 0x400000000000LL);
    if ( (_BYTE)v10 )
    {
      v16 = (unsigned __int8)*v2;
      v17 = *v1;
      v18 = *v3;
      v19 = *v4;
      v20 = v13;
      v21 = 33556480LL;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      v17,
                      byte_1C0096A59,
                      v12,
                      v14,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)&v18,
                      (__int64)&v17,
                      (__int64)&v16);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    LOBYTE(v10) = McTemplateK0qtqqq_EtwWriteTransfer((unsigned __int8)*v2, v11, v12, *v4, *v2, *v3, *v1, v13);
  return v10;
}

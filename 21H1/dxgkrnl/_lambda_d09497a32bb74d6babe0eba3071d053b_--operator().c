/*
 * XREFs of _lambda_d09497a32bb74d6babe0eba3071d053b_::operator() @ 0x1C0207170
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020899C (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1C0035080 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     McTemplateK0qtqqq_EtwWriteTransfer @ 0x1C0038CD4 (McTemplateK0qtqqq_EtwWriteTransfer.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

char __fastcall lambda_d09497a32bb74d6babe0eba3071d053b_::operator()(int **a1)
{
  unsigned __int8 *v1; // rax
  int v3; // r8d
  int v4; // edx
  __int64 v5; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edi
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // ecx
  int *v13; // rax
  int v15; // [rsp+50h] [rbp-19h] BYREF
  int v16; // [rsp+54h] [rbp-15h] BYREF
  int v17; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v18; // [rsp+5Ch] [rbp-Dh] BYREF
  int v19; // [rsp+60h] [rbp-9h] BYREF
  __int64 v20; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v21[2]; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v22[24]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+90h] [rbp+27h]
  int v24; // [rsp+98h] [rbp+2Fh]
  int v25; // [rsp+9Ch] [rbp+33h]
  int v26; // [rsp+A0h] [rbp+37h]
  int v27; // [rsp+A4h] [rbp+3Bh]
  int v28; // [rsp+A8h] [rbp+3Fh]
  int v29; // [rsp+ACh] [rbp+43h]

  v1 = (unsigned __int8 *)a1[2];
  memset(v22, 0, sizeof(v22));
  v25 = 0;
  v3 = *v1;
  v4 = **a1;
  v5 = (unsigned int)(*a1[1] + (*a1[3] << 16));
  v24 = 0;
  v23 = 0LL;
  v21[0] = 6;
  v21[1] = 64;
  memset(v22, 0, sizeof(v22));
  v26 = 76;
  v27 = v5;
  v28 = v4;
  v29 = v3;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v21, CurrentProcessSessionId);
  v8 = PsGetCurrentProcessSessionId(v7);
  v9 = v8;
  if ( (unsigned int)dword_1C00AEA90 > 5 )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)&dword_1C00AEA90, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v11 = (unsigned int)*a1[3];
      v12 = *(unsigned __int8 *)a1[2];
      v13 = *a1;
      v17 = *a1[1];
      v15 = v12;
      v16 = v11;
      v18 = *v13;
      v19 = v9;
      v20 = 33556480LL;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v18,
                     byte_1C007B829,
                     v11,
                     v10,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v15);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
    LOBYTE(v8) = McTemplateK0qtqqq_EtwWriteTransfer(
                   (__int64)a1[3],
                   (__int64)a1[1],
                   *(unsigned __int8 *)a1[2],
                   **a1,
                   *(_BYTE *)a1[2],
                   *a1[1],
                   *a1[3],
                   v9);
  return v8;
}

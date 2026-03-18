/*
 * XREFs of _lambda_1f8a3375a223ce0e5161cba7601a4e42_::operator() @ 0x1C025A790
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025AE4C (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013746C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall lambda_1f8a3375a223ce0e5161cba7601a4e42_::operator()(int **a1, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // edx
  __int64 v6; // rax
  __int64 *v7; // rdx
  _DWORD v9[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v10[24]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  int v12; // [rsp+48h] [rbp-38h]
  int v13; // [rsp+4Ch] [rbp-34h]
  int v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+54h] [rbp-2Ch]
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  __int64 v18; // [rsp+60h] [rbp-20h]

  v3 = *(_QWORD *)a1[3];
  if ( v3 && !*(_BYTE *)(v3 + 18488) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(v3, a2);
    v4[3] = (unsigned int)*a1[2];
    v4[4] = **a1;
    v4[5] = -1071775725LL;
    WdLogEvent5_WdError(v4);
    **a1 = -1071775725;
  }
  memset(v10, 0, sizeof(v10));
  v13 = 0;
  v5 = **a1;
  v6 = *(_QWORD *)a1[1];
  v16 = 0;
  v17 = 0;
  v12 = 0;
  v11 = 0LL;
  v15 = v5;
  v7 = (__int64 *)a1[2];
  v9[0] = 30;
  v9[1] = 72;
  memset(v10, 0, sizeof(v10));
  v14 = 106;
  v18 = v6;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9, *v7);
}

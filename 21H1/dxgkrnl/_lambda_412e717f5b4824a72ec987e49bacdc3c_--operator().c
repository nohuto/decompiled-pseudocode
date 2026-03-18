/*
 * XREFs of _lambda_412e717f5b4824a72ec987e49bacdc3c_::operator() @ 0x1C00D3008
 * Callers:
 *     _DXGKCALLONEXIT__lambda_412e717f5b4824a72ec987e49bacdc3c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C00247F8 (_DXGKCALLONEXIT__lambda_412e717f5b4824a72ec987e49bacdc3c____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0020E2C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

char __fastcall lambda_412e717f5b4824a72ec987e49bacdc3c_::operator()(__int64 a1)
{
  int v2; // r9d
  __int64 v3; // rax
  int *v4; // rdx
  int v5; // ecx
  int v6; // r8d
  unsigned __int64 *v7; // rdx
  _BYTE *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int16 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[24]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h]
  int v23; // [rsp+80h] [rbp-80h]
  int v24; // [rsp+84h] [rbp-7Ch]
  int v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+8Ch] [rbp-74h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  __int16 *v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+DCh] [rbp-24h]
  __int64 *v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  __int64 *v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+FCh] [rbp-4h]

  memset(v19, 0, sizeof(v19));
  v22 = 0;
  v2 = **(_DWORD **)(a1 + 8);
  v3 = **(_QWORD **)(a1 + 16);
  v4 = *(int **)a1;
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 4LL);
  v6 = *v4;
  v21 = 0;
  v20 = 0LL;
  v7 = *(unsigned __int64 **)(a1 + 24);
  v24 = v5;
  v18[0] = 30;
  v18[1] = 72;
  memset(v19, 0, sizeof(v19));
  v23 = 110;
  v25 = v6;
  v26 = v2;
  v27 = v3;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v18, *v7);
  v8 = *(_BYTE **)(a1 + 32);
  if ( *v8 )
  {
    if ( (unsigned int)dword_1C00AEA90 > 5 )
    {
      LOBYTE(v8) = tlgKeywordOn((__int64)&dword_1C00AEA90, 0x800000000004LL);
      if ( (_BYTE)v8 )
      {
        v9 = *(__int64 **)(a1 + 16);
        v40 = 0;
        v37 = 0;
        v34 = 0;
        v10 = *v9;
        v11 = *(__int64 **)a1;
        v31 = 0;
        v33 = 2;
        v12 = *v11;
        v14 = 1;
        v38 = &v15;
        v35 = &v16;
        v32 = &v14;
        v16 = v10;
        v29 = &v17;
        v15 = v12;
        v39 = 8;
        v36 = 8;
        v30 = 8;
        v17 = 2048LL;
        LOBYTE(v8) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_1C00AEA90,
                       (unsigned __int8 *)dword_1C007C4B2,
                       0LL,
                       0LL,
                       6u,
                       &v28);
      }
    }
  }
  return (char)v8;
}

/*
 * XREFs of sub_1800EEA30 @ 0x1800EEA30
 * Callers:
 *     _isctype_l @ 0x1800EE8BC (_isctype_l.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800EE818 @ 0x1800EE818 (sub_1800EE818.c)
 */

__int64 *__fastcall sub_1800EEA30(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *result; // rax
  int v4; // edi
  __int64 v5; // rcx
  _DWORD *v6; // r10
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh] BYREF
  int v12; // [rsp+58h] [rbp-A8h] BYREF
  int v13; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v16[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  _QWORD *v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+90h] [rbp-70h]
  _QWORD v21[22]; // [rsp+A0h] [rbp-60h] BYREF

  v21[1] = a1[2];
  v21[0] = 1LL;
  v21[2] = 560LL;
  memset(&v21[3], 0, 0x90uLL);
  v17 = 0LL;
  v18 = 0LL;
  v2 = *a1;
  v19 = v21;
  result = 0LL;
  v16[0] = 1;
  v16[1] = 300;
  v20 = 0LL;
  if ( v2 )
  {
    v4 = Pdcv2ActivationClientRenewActivation(v2, v16, &v10);
    result = sub_180008448(v5, sub_1800B6240);
    v6 = (_DWORD *)result[1];
    if ( *v6 > 4u )
    {
      v7 = a1[2];
      v8 = *(_QWORD *)(v7 + 544);
      v9 = *(unsigned int *)(v7 + 64);
      v11 = v10;
      v14 = v8;
      v12 = v4;
      v13 = v9;
      v15 = v7;
      return (__int64 *)sub_1800EE818(
                          (__int64)v6,
                          byte_180168B3D,
                          v9,
                          v7,
                          (__int64)&v15,
                          (__int64)&v13,
                          (__int64)&v14,
                          (__int64)&v12,
                          (__int64)&v11);
    }
  }
  return result;
}

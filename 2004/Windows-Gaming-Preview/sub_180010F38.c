/*
 * XREFs of sub_180010F38 @ 0x180010F38
 * Callers:
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 * Callees:
 *     sub_180002350 @ 0x180002350 (sub_180002350.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     memset @ 0x1800453CC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_180010F38(__int64 a1, __int64 a2, __int64 a3))(__int64, _QWORD *)
{
  __int64 (__fastcall *v5)(_QWORD, _QWORD *, _BYTE *, __int64); // r10
  char v6; // al
  char v7; // cl
  _BYTE *v8; // rax
  char v9; // al
  char v10; // cl
  _WORD *v11; // r9
  _BYTE *v12; // rax
  __int64 v13; // rax
  char v14; // cl
  _BYTE *v15; // rax
  __int64 (__fastcall *result)(__int64, _QWORD *); // rax
  _QWORD v17[13]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v19[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v20[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v21[104]; // [rsp+158h] [rbp+58h] BYREF

  memset(v17, 0, sizeof(v17));
  v5 = (__int64 (__fastcall *)(_QWORD, _QWORD *, _BYTE *, __int64))qword_18005AC40;
  LODWORD(v17[0]) = *(_DWORD *)(a2 + 4);
  WORD2(v17[0]) = *(_WORD *)(a2 + 56);
  v17[1] = *(_QWORD *)(a2 + 48);
  v18[0] = 0;
  if ( qword_18005AC40 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64))qword_18005AC40)(0LL, 0LL, v18, 64LL);
    v5 = (__int64 (__fastcall *)(_QWORD, _QWORD *, _BYTE *, __int64))qword_18005AC40;
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  v19[0] = 0;
  v8 = v18;
  LODWORD(v17[4]) = 0;
  if ( !v7 )
    v8 = (_BYTE *)v17[2];
  v17[2] = v8;
  v17[3] = *(_QWORD *)(a2 + 120);
  if ( v5 )
  {
    v9 = v5(*(_QWORD *)(a2 + 136), &v17[4], v19, 64LL);
    v5 = (__int64 (__fastcall *)(_QWORD, _QWORD *, _BYTE *, __int64))qword_18005AC40;
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  v11 = *(_WORD **)(a2 + 16);
  v12 = v19;
  if ( !v10 )
    v12 = (_BYTE *)v17[5];
  v17[5] = v12;
  if ( v11 && *v11 )
  {
    sub_180002350(v21, 96LL, (int)"%ws");
    v5 = (__int64 (__fastcall *)(_QWORD, _QWORD *, _BYTE *, __int64))qword_18005AC40;
    v17[6] = v21;
  }
  LOWORD(v17[7]) = *(_WORD *)(a3 + 24);
  v17[8] = *(_QWORD *)(a3 + 8);
  if ( qword_18005AC30 )
  {
    v13 = qword_18005AC30();
    v5 = (__int64 (__fastcall *)(_QWORD, _QWORD *, _BYTE *, __int64))qword_18005AC40;
    v17[9] = v13;
  }
  v20[0] = 0;
  LODWORD(v17[10]) = 0;
  if ( v5 )
    v14 = v5(*(_QWORD *)a3, &v17[10], v20, 64LL);
  else
    v14 = 0;
  v15 = v20;
  if ( !v14 )
    v15 = (_BYTE *)v17[11];
  v17[11] = v15;
  v17[12] = *(_QWORD *)(a3 + 16);
  result = (__int64 (__fastcall *)(__int64, _QWORD *))qword_18005AB50;
  if ( qword_18005AB50 )
    return (__int64 (__fastcall *)(__int64, _QWORD *))result(11973136LL, v17);
  result = (__int64 (__fastcall *)(__int64, _QWORD *))qword_18005AD00;
  if ( qword_18005AD00 )
    return (__int64 (__fastcall *)(__int64, _QWORD *))result(11973136LL, v17);
  return result;
}

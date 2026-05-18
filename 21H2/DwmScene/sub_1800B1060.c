/*
 * XREFs of sub_1800B1060 @ 0x1800B1060
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B2424 @ 0x1800B2424 (sub_1800B2424.c)
 *     sub_1800F0C34 @ 0x1800F0C34 (sub_1800F0C34.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800B1060(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 result; // rax
  int *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // xmm1_4
  __int64 *v11; // rbx
  int v12; // eax
  _DWORD *v13; // rax
  int v14; // ecx
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h]
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+50h] [rbp-B8h]
  __int128 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+88h] [rbp-80h] BYREF
  int v23; // [rsp+90h] [rbp-78h] BYREF
  __int64 v24; // [rsp+94h] [rbp-74h]
  int v25; // [rsp+9Ch] [rbp-6Ch]
  __int64 v26; // [rsp+E8h] [rbp-20h] BYREF

  v21 = a1;
  v4 = a1;
  result = *(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x110000;
  if ( (_DWORD)result == 1114112 && *(_QWORD *)a4 != a1 )
  {
    v6 = &v23;
    v7 = 8LL;
    v8 = 0LL;
    do
    {
      *((_QWORD *)v6 - 1) = 0LL;
      *v6 = 0;
      v6 += 3;
      --v7;
    }
    while ( v7 );
    do
    {
      v9 = *(_DWORD *)((char *)&unk_1802136E0 + v8 + 8);
      v15 = *(_QWORD *)((char *)&unk_1802136E0 + v8);
      v10 = HIDWORD(v15);
      *(_DWORD *)((char *)&v22 + v8) = v15;
      LODWORD(v16) = v9;
      *(int *)((char *)&v23 + v8) = v9;
      *(_DWORD *)((char *)&v22 + v8 + 4) = v10;
      v8 += 12LL;
    }
    while ( v8 < 96 );
    v11 = &v22;
    do
    {
      v12 = *((_DWORD *)v11 + 2);
      v15 = *v11;
      LODWORD(v16) = v12;
      v13 = (_DWORD *)sub_1800B2424(v4, (unsigned int)&v17, (unsigned int)&v15, 2, 1);
      *(_DWORD *)v11 = *v13;
      v14 = v13[1];
      *((_DWORD *)v11 + 2) = v13[2];
      *((_DWORD *)v11 + 1) = v14;
      v11 = (__int64 *)((char *)v11 + 12);
    }
    while ( v11 != &v26 );
    v19 = xmmword_1801CCDF0;
    LODWORD(v16) = v25;
    v20 = xmmword_1801CCDF0;
    v18 = v23;
    v15 = v24;
    v17 = v22;
    sub_1800F0C34(v4, (unsigned int)&v17, (unsigned int)&v15, (unsigned int)&v20, (__int64)&v19, 0x40000000);
  }
  return result;
}

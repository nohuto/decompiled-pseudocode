/*
 * XREFs of sub_18000220C @ 0x18000220C
 * Callers:
 *     sub_180001EF8 @ 0x180001EF8 (sub_180001EF8.c)
 * Callees:
 *     sub_180002400 @ 0x180002400 (sub_180002400.c)
 *     sub_180002430 @ 0x180002430 (sub_180002430.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     sub_1800024F8 @ 0x1800024F8 (sub_1800024F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180015170 @ 0x180015170 (sub_180015170.c)
 *     sub_180035F74 @ 0x180035F74 (sub_180035F74.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180062664 @ 0x180062664 (sub_180062664.c)
 *     sub_180073CE8 @ 0x180073CE8 (sub_180073CE8.c)
 */

__int64 __fastcall sub_18000220C(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 *a8,
        int a9,
        _DWORD *a10)
{
  __int64 v11; // r12
  int v13; // eax
  unsigned __int8 v14; // bl
  int v15; // esi
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *i; // rbx
  _QWORD *v23; // r15
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned __int8 v26; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v27[7]; // [rsp+51h] [rbp-AFh] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+64h] [rbp-9Ch] BYREF
  int v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+6Ch] [rbp-94h] BYREF
  int v33; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v34[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v35[1200]; // [rsp+90h] [rbp-70h] BYREF

  v11 = a3;
  sub_180035F74(v35, 24LL, 50LL, sub_18003B2C0);
  v34[2] = 0LL;
  v34[0] = v34;
  v34[1] = v34;
  v26 = 0;
  memcpy(v35, a4, 24 * v11);
  if ( a9 == 1 )
  {
    v14 = 1;
  }
  else
  {
    v13 = sub_1800024F8(a1, v11, (unsigned int)v35, a6, a5, a7, (__int64)&v26, (__int64)v27, (__int64)v34);
    v14 = v26;
    v15 = v13;
    if ( v13 < 0 )
      goto LABEL_11;
    if ( !v27[0] )
    {
LABEL_18:
      v15 = -2147220992;
      goto LABEL_11;
    }
    if ( !v26 )
      goto LABEL_5;
  }
  if ( !a8 )
    goto LABEL_18;
LABEL_5:
  a10[322] = a5;
  a10[2] = a6;
  if ( (int)sub_180002430(a1 + 40, a10) < 0 )
  {
    v15 = -2147024882;
  }
  else
  {
    if ( v14 )
    {
      a10[320] = 1;
      if ( (_DWORD)v11 )
      {
        v20 = v11;
        do
        {
          if ( *(_DWORD *)a4 <= 0x31u )
          {
            v16 = 3 * (*(int *)a4 + 3LL);
            *(_OWORD *)&a10[2 * v16] = *(_OWORD *)a4;
            *(_QWORD *)&a10[2 * v16 + 4] = a4[2];
          }
          a4 += 3;
          --v20;
        }
        while ( v20 );
      }
      sub_180073CE8(v16, v34);
    }
    else
    {
      sub_180015170(a1, 1, v11, (unsigned int)v35, a10[2], 1, (__int64)&v26, (__int64)v27, 0LL, (__int64)a10);
      a10[320] = 2;
    }
    if ( a8 )
      *a8 = v14;
    v15 = 0;
  }
LABEL_11:
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 1LL) )
  {
    v30 = v14;
    v31 = a6;
    v32 = a5;
    v29 = a7;
    v33 = v11;
    LODWORD(v28) = v15;
    sub_180062664(
      a7,
      (unsigned int)&unk_18009D992,
      v17,
      v18,
      (__int64)&v28,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29);
  }
  if ( v15 < 0 )
  {
    sub_1800024C4(&v28, a10);
    v21 = v28;
    for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = v23 )
    {
      v23 = (_QWORD *)*i;
      if ( i[2] == v21 )
      {
        v24 = (_QWORD *)i[1];
        *v24 = v23;
        v23[1] = v24;
        v25 = i[2];
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        j_j_free(i);
        --*(_QWORD *)(a1 + 56);
        v21 = v28;
      }
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a10 + 32LL))(a10, 0LL);
  }
  sub_180002400(v34);
  return (unsigned int)v15;
}

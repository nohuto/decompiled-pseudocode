/*
 * XREFs of sub_180113A88 @ 0x180113A88
 * Callers:
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 *     sub_180112550 @ 0x180112550 (sub_180112550.c)
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 *     sub_1801133F8 @ 0x1801133F8 (sub_1801133F8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BC578 @ 0x1800BC578 (sub_1800BC578.c)
 *     sub_180103778 @ 0x180103778 (sub_180103778.c)
 *     sub_180111228 @ 0x180111228 (sub_180111228.c)
 *     sub_180113900 @ 0x180113900 (sub_180113900.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180113A88(__int64 a1, __int64 a2)
{
  char v2; // di
  signed int v3; // r12d
  __int64 v4; // r14
  _QWORD **v5; // rax
  __int64 v6; // rsi
  _QWORD **v7; // r13
  __int64 v8; // r15
  int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h]
  __int128 v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-18h]
  _QWORD *v21; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+60h]

  v15 = 0LL;
  v2 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 10;
  v3 = 0;
  v4 = 0LL;
  v5 = (_QWORD **)(a1 + 56);
  v22 = a1 + 56;
  do
  {
    v6 = 0LL;
    v7 = v5;
    do
    {
      v21 = *v7;
      while ( v21 )
      {
        v8 = *sub_1800B91A0(a1, &v21);
        v14 = v8;
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8) - 2 <= 1 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
          sub_180111228((__int64 *)&v15, (__int64)&v14, v10);
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
          if ( !sub_180113900(a1, v9, v3, v11, a2, (__int64 *)&v15) )
            goto LABEL_13;
          sub_180103778((__int64 *)&v15);
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
          if ( v12 > 8 )
            goto LABEL_13;
          if ( *(_BYTE *)(v4 + (int)v12 + a2) )
            *(_BYTE *)(v4 + v6 + a2) = 1;
        }
      }
      ++v6;
      v7 += 6;
    }
    while ( v6 < 9 );
    ++v3;
    v4 += 9LL;
    v5 = (_QWORD **)(v22 + 432);
    v22 += 432LL;
  }
  while ( v3 < 2 );
  v2 = 1;
LABEL_13:
  sub_1800BC578((__int64 *)&v15);
  return v2;
}

/*
 * XREFs of sub_180112550 @ 0x180112550
 * Callers:
 *     sub_180112490 @ 0x180112490 (sub_180112490.c)
 *     sub_180113270 @ 0x180113270 (sub_180113270.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 *     sub_180113A88 @ 0x180113A88 (sub_180113A88.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_180112550(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, unsigned int a5)
{
  _BYTE *v5; // rdi
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r15
  _QWORD **v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-38h] BYREF
  _QWORD **v18; // [rsp+48h] [rbp-30h]
  __int64 v19; // [rsp+50h] [rbp-28h]
  __int64 v20[4]; // [rsp+58h] [rbp-20h] BYREF
  int v21; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+50h]
  unsigned int v23; // [rsp+D0h] [rbp+58h]
  __int64 v24; // [rsp+D8h] [rbp+60h]

  v24 = (__int64)a4;
  v23 = a3;
  v22 = a2;
  v5 = a4;
  v7 = a1 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v20[1] = v7;
  v8 = 0LL;
  v9 = 9LL;
  v10 = (_QWORD **)(a1 + 56);
  v11 = v24;
  do
  {
    v18 = v10;
    v12 = 9LL;
    v19 = 9LL;
    do
    {
      v17 = *v10;
      if ( v17 )
      {
        v13 = v23;
        do
        {
          v14 = *sub_1800B91A0(v12, &v17);
          v20[0] = v14;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          v21 = 0;
          if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v14 + 48LL))(
                 v14,
                 v22,
                 v13,
                 a5,
                 &v21) >= 0 )
          {
            switch ( v21 )
            {
              case 2:
                v15 = 0LL;
                while ( 1 )
                {
                  sub_1800CB144(&v15);
                  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 40LL))(v14, &v15) < 0 )
                    break;
                  v16 = 0LL;
                  if ( (**(int (__fastcall ***)(__int64, const IID *, __int64 *))v14)(v14, &stru_18015B900, &v16) >= 0 )
                    sub_180112CEC(a1, v15, v16, 0, v11);
                  sub_1800CB144(&v15);
                  sub_18000F708(&v16);
                }
                sub_18000F708(&v15);
                break;
              case 3:
                *v5 = 1;
                break;
              case 4:
                v5[v8] = 1;
                v5[v9] = 1;
                break;
            }
          }
          sub_18000F708(v20);
        }
        while ( v17 );
        v10 = v18;
        v12 = v19;
      }
      v10 += 6;
      v18 = v10;
      ++v5;
      v19 = --v12;
    }
    while ( v12 );
    v9 -= 9LL;
    v8 -= 9LL;
  }
  while ( v9 > -9 );
  sub_180113A88(a1, v24);
  if ( a1 != -16 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
}

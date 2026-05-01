/*
 * XREFs of sub_1800267AC @ 0x1800267AC
 * Callers:
 *     sub_180026694 @ 0x180026694 (sub_180026694.c)
 *     sub_1800805FC @ 0x1800805FC (sub_1800805FC.c)
 * Callees:
 *     sub_18000636C @ 0x18000636C (sub_18000636C.c)
 *     sub_180026888 @ 0x180026888 (sub_180026888.c)
 *     sub_1800268A8 @ 0x1800268A8 (sub_1800268A8.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180032190 @ 0x180032190 (sub_180032190.c)
 */

__int64 __fastcall sub_1800267AC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // rax
  int v11; // eax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v6 = sub_1800268A8(a1, a2 + 132, *(unsigned int *)(a2 + 200), &v13);
  v7 = v13;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = sub_180026888(v13, a2);
    if ( v9 )
      goto LABEL_3;
    v11 = sub_18000636C(v7, a2, &v12);
    v5 = v12;
    v8 = v11;
    if ( v11 >= 0 )
    {
      sub_180032190(v7 + 40, v12 + 96, (unsigned int)sub_180033700, v12);
      v9 = v12;
      if ( v5 == v12 )
      {
        *a3 = v5;
        v5 = 0LL;
        goto LABEL_4;
      }
LABEL_3:
      *a3 = v9;
LABEL_4:
      v8 = 0;
    }
  }
  if ( v7 )
    sub_1800274E0(v7);
  if ( v5 )
    sub_1800274E0(v5);
  return v8;
}

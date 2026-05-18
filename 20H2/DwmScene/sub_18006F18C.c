/*
 * XREFs of sub_18006F18C @ 0x18006F18C
 * Callers:
 *     sub_18006DDDC @ 0x18006DDDC (sub_18006DDDC.c)
 * Callees:
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_180022FE0 @ 0x180022FE0 (sub_180022FE0.c)
 *     sub_1800320A4 @ 0x1800320A4 (sub_1800320A4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006F18C(__int64 *a1, __int64 a2, char a3, int *a4, __int64 *a5)
{
  __int64 **v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // rax
  char v11; // r14
  int v12; // ecx
  __int64 *v13; // rbx
  __int64 *v15[4]; // [rsp+30h] [rbp-48h] BYREF

  v15[2] = a1;
  v15[1] = a5;
  v8 = (__int64 **)*a1;
  v9 = (__int64 *)*a1;
  v10 = *(_QWORD *)(*a1 + 8);
  v11 = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v12 = *a4;
    do
    {
      v9 = (__int64 *)v10;
      if ( a3 )
        v11 = *(_DWORD *)(v10 + 32) >= v12;
      else
        v11 = v12 < *(_DWORD *)(v10 + 32);
      if ( v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  v13 = v9;
  v15[0] = v9;
  if ( v11 )
  {
    if ( v9 == *v8 )
    {
      *(_QWORD *)a2 = *sub_1800320A4(a1, v15, 1, v9, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
      return a2;
    }
    sub_180022400(v15);
    v13 = v15[0];
  }
  if ( *((_DWORD *)v13 + 8) >= *a4 )
  {
    sub_180022FE0((__int64)(a5 + 4), 0);
    j_j__o_free(a5);
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    *(_QWORD *)a2 = *sub_1800320A4(a1, v15, v11, v9, (int)a4, a5);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

/*
 * XREFs of sub_180074A5C @ 0x180074A5C
 * Callers:
 *     sub_1800736AC @ 0x1800736AC (sub_1800736AC.c)
 * Callees:
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_1800288B0 @ 0x1800288B0 (sub_1800288B0.c)
 *     sub_180037974 @ 0x180037974 (sub_180037974.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180074A5C(__int64 *a1, __int64 a2, char a3, int *a4, __int64 *a5)
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
      *(_QWORD *)a2 = *sub_180037974(a1, v15, 1, v9, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
      return a2;
    }
    sub_180027CD0(v15);
    v13 = v15[0];
  }
  if ( *((_DWORD *)v13 + 8) >= *a4 )
  {
    sub_1800288B0((__int64)(a5 + 4), 0);
    j_j__o_free(a5);
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    *(_QWORD *)a2 = *sub_180037974(a1, v15, v11, v9, (int)a4, a5);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

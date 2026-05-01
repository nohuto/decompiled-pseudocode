/*
 * XREFs of sub_1800255FC @ 0x1800255FC
 * Callers:
 *     sub_180021D50 @ 0x180021D50 (sub_180021D50.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180021AD4 @ 0x180021AD4 (sub_180021AD4.c)
 *     sub_180067F74 @ 0x180067F74 (sub_180067F74.c)
 */

void __fastcall sub_1800255FC(_QWORD *a1, __int64 a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rsi
  int v9; // r14d
  _QWORD *v10; // r15
  _QWORD *i; // rbx
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  _DWORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+64h] [rbp-1Ch]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+C0h] [rbp+40h] BYREF
  int v25; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+58h] BYREF

  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return;
        v8 = a1[168];
        v9 = 5;
      }
      else
      {
        v8 = a1[167];
        v9 = 4;
      }
    }
    else
    {
      v8 = a1[166];
      v9 = 3;
    }
  }
  else
  {
    v8 = 0LL;
    v9 = 2;
  }
  v10 = a1 + 176;
  for ( i = (_QWORD *)a1[176]; i != v10; i = (_QWORD *)*i )
  {
    v12 = i[6];
    v21 = 0;
    v16[1] = 0;
    v13 = a1[4];
    v16[0] = 1;
    v18 = *(i - 1);
    v21 = 0;
    v19 = 0LL;
    v17 = v13;
    v20 = v9;
    v22 = v8;
    v23 = a2;
    if ( (int)sub_180021AD4((_QWORD *)(v12 + 24), v16, 0x38u, *(_QWORD *)(v12 + 32)) < 0
      && (unsigned int)dword_1800B31E0 > 4 )
    {
      if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v26 = v17;
        v25 = v20;
        v24 = v15;
        sub_180067F74(
          (unsigned int)&dword_1800B31E0,
          (unsigned int)&unk_18009BCA5,
          v14,
          v15,
          (__int64)&v24,
          (__int64)&v25,
          (__int64)&v26);
      }
    }
  }
}

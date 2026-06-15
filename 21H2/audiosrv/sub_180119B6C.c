/*
 * XREFs of sub_180119B6C @ 0x180119B6C
 * Callers:
 *     sub_180115E74 @ 0x180115E74 (sub_180115E74.c)
 *     sub_180116450 @ 0x180116450 (sub_180116450.c)
 *     sub_180116778 @ 0x180116778 (sub_180116778.c)
 *     sub_180117A50 @ 0x180117A50 (sub_180117A50.c)
 *     sub_180117FF4 @ 0x180117FF4 (sub_180117FF4.c)
 * Callees:
 *     sub_18004B400 @ 0x18004B400 (sub_18004B400.c)
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_180119F84 @ 0x180119F84 (sub_180119F84.c)
 *     sub_18011A000 @ 0x18011A000 (sub_18011A000.c)
 *     sub_18011AC0C @ 0x18011AC0C (sub_18011AC0C.c)
 *     sub_18011B0C8 @ 0x18011B0C8 (sub_18011B0C8.c)
 */

__int64 __fastcall sub_180119B6C(__int64 *a1, unsigned __int16 *a2, bool *a3)
{
  __int64 v6; // rax
  int v7; // esi
  unsigned __int16 ***v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-60h]
  char v15; // [rsp+28h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-50h]
  int v17; // [rsp+60h] [rbp-20h] BYREF
  int v18[3]; // [rsp+64h] [rbp-1Ch] BYREF
  __int128 v19; // [rsp+70h] [rbp-10h] BYREF
  int v20; // [rsp+B0h] [rbp+30h] BYREF
  int v21; // [rsp+C0h] [rbp+40h] BYREF
  int v22; // [rsp+C8h] [rbp+48h] BYREF

  if ( a3 )
    *a3 = 0;
  v6 = *a1;
  v7 = 0;
  if ( *(int *)(*a1 + 24) > 0 )
  {
    while ( 1 )
    {
      v8 = (unsigned __int16 ***)sub_18004B9B4(v6 + 16, v7);
      if ( (unsigned int)sub_18004B400(a2, **v8) )
        break;
      v6 = *a1;
      if ( ++v7 >= *(_DWORD *)(*a1 + 24) )
        goto LABEL_6;
    }
    if ( a3 )
      *a3 = 1;
    return 0LL;
  }
LABEL_6:
  v9 = *((unsigned int *)a1 + 4);
  v10 = a1[1];
  v16 = a1[7];
  v15 = *((_BYTE *)a1 + 48);
  v14 = a1[5];
  v19 = *(_OWORD *)((char *)a1 + 20);
  v11 = sub_18011B0C8(v10, v9, &v19, a2, v14, v15, v16, v18, &v17, &v22, &v21, &v20);
  if ( v11 < 0 )
  {
    if ( (unsigned __int8)sub_18011AC0C((unsigned int)v11) )
    {
      sub_180119F84(*a1, a2);
      *(_DWORD *)(a1[1] + 220) = 1;
    }
    else
    {
      v13 = a1[8];
      if ( v13 )
      {
        v19 = *(_OWORD *)((char *)a1 + 20);
        sub_18011A000(v13, &v19, a2);
      }
    }
    return 0LL;
  }
  result = sub_18005A750(*a1, a2, v18[0], v17, v22, v21, v20);
  if ( a3 )
    *a3 = (int)result >= 0;
  return result;
}

/*
 * XREFs of sub_1C0033138 @ 0x1C0033138
 * Callers:
 *     sub_1C0032B54 @ 0x1C0032B54 (sub_1C0032B54.c)
 *     sub_1C0032E60 @ 0x1C0032E60 (sub_1C0032E60.c)
 *     sub_1C0033368 @ 0x1C0033368 (sub_1C0033368.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00177A8 @ 0x1C00177A8 (sub_1C00177A8.c)
 */

__int64 __fastcall sub_1C0033138(__int64 a1, char a2, char a3, __int16 a4, __int64 a5, int a6, _DWORD *a7)
{
  _DWORD *v10; // rax
  __int64 v11; // r9
  _DWORD *v12; // rcx
  unsigned __int16 v13; // r8
  _DWORD *v14; // rbx
  char v15; // al
  __int64 v16; // rcx
  __int64 result; // rax
  _BYTE v18[2]; // [rsp+40h] [rbp-18h] BYREF
  __int16 v19; // [rsp+42h] [rbp-16h]
  __int16 v20; // [rsp+44h] [rbp-14h]
  unsigned __int16 v21; // [rsp+46h] [rbp-12h]
  unsigned __int16 v22; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v22) = a3;
  v10 = sub_1C0011220(a1);
  v11 = a5;
  v12 = v10;
  if ( !a5 )
    return 3221225485LL;
  v13 = a6;
  if ( !a6 )
    return 3221225485LL;
  v14 = a7;
  if ( a7 )
    *a7 = 0;
  v15 = *((_BYTE *)v10 + 1432);
  v16 = *((_QWORD *)v12 + 148);
  v19 = 0;
  v18[1] = v15;
  v21 = v13;
  v22 = v13;
  v18[0] = a2 & 3 | 0xC0;
  v20 = a4;
  result = sub_1C00177A8(v16, a1, v18, v11, &v22);
  if ( (int)result >= 0 )
  {
    if ( v14 )
      *v14 = v22;
  }
  return result;
}

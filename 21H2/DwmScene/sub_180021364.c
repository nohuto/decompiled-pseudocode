/*
 * XREFs of sub_180021364 @ 0x180021364
 * Callers:
 *     sub_18001BA94 @ 0x18001BA94 (sub_18001BA94.c)
 * Callees:
 *     sub_180021490 @ 0x180021490 (sub_180021490.c)
 *     sub_180021558 @ 0x180021558 (sub_180021558.c)
 *     sub_180021A28 @ 0x180021A28 (sub_180021A28.c)
 */

__int64 __fastcall sub_180021364(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v7; // r15d
  unsigned int v8; // ebp
  unsigned int v10; // edi
  int v11; // eax
  int v12; // edx
  int v13; // eax
  char v14; // dl
  int v15; // r8d
  int v16; // r9d
  _BYTE v18[8]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+38h] [rbp-30h]
  char v20; // [rsp+3Ch] [rbp-2Ch]
  int v21; // [rsp+40h] [rbp-28h]
  int v22; // [rsp+44h] [rbp-24h]

  v7 = a3;
  v8 = a2;
  if ( a5 )
    *a5 = 0;
  *a6 = 1;
  v10 = sub_180021490(a1, a2, a3, a5);
  if ( !v10 )
    v10 = sub_180021558(a4, a1, v8, v7, (__int64)a5);
  if ( qword_18021F848 )
  {
    v11 = sub_180021A28(v8, 0LL, v18);
    v12 = v11 != 0 ? v19 : 0;
    if ( v11 )
    {
      if ( !v10 )
      {
        *(_OWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        v10 = 1;
      }
      *(_DWORD *)a1 = v12;
      *a6 = 0;
    }
    v13 = sub_180021A28(v8, 1LL, v18);
    v14 = v13 != 0 ? v20 : 0;
    v15 = v13 != 0 ? v21 : 0;
    v16 = v13 != 0 ? v22 : 0;
    if ( v13 )
    {
      if ( !v10 )
      {
        *(_OWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        v10 = 1;
      }
      *(_BYTE *)(a1 + 4) = v14;
      *(_DWORD *)(a1 + 12) = v15;
      *(_DWORD *)(a1 + 8) = v16;
      *a6 = 0;
    }
  }
  return v10;
}

/*
 * XREFs of sub_180075180 @ 0x180075180
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 *     sub_180071270 @ 0x180071270 (sub_180071270.c)
 *     sub_180075060 @ 0x180075060 (sub_180075060.c)
 */

__int64 __fastcall sub_180075180(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v7; // r15
  int v8; // eax
  int v9; // r8d
  int v10; // eax
  int v11; // eax
  int v12; // r8d
  int v13; // r11d
  int v14; // eax
  char v15; // r14
  char v16; // di
  int v17; // eax
  int v18; // r11d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx

  v2 = a1[6];
  v4 = a2[6];
  result = sub_180075060((__int64)a1, (__int64)a2);
  if ( !(_DWORD)result )
  {
    if ( sub_180071270(v2) )
    {
      v7 = *(_QWORD *)(v2 + 48) + 400LL;
      v8 = sub_180033D1C(v7, v2, 1);
      if ( (v8 & *(_DWORD *)(v2 + 1244)) != v8 )
      {
        v10 = sub_180033D1C(*(_QWORD *)(v4 + 48) + 400LL, v4, v9);
        if ( (v10 & *(_DWORD *)(v4 + 1244)) == v10 )
          return 0xFFFFFFFFLL;
      }
      v11 = sub_180033D1C(v7, v2, 1);
      if ( (v11 & v13) == v11 )
      {
        v14 = sub_180033D1C(*(_QWORD *)(v4 + 48) + 400LL, v4, v12);
        if ( (v14 & *(_DWORD *)(v4 + 1244)) != v14 )
          return 1LL;
      }
      v15 = *(_BYTE *)(v2 + 1465) & 1;
      v16 = *(_BYTE *)(v4 + 1465) & 1;
      v17 = sub_180033D1C(v7, v2, 1);
      if ( (v17 & v18) == v17 )
      {
        v19 = a1[4] >> 1;
        if ( !v15 )
          v19 = a1[4];
        v20 = a2[4] >> 1;
        if ( !v16 )
          v20 = a2[4];
      }
      else
      {
        v19 = a1[3] >> 1;
        if ( !v15 )
          v19 = a1[3];
        v20 = a2[3] >> 1;
        if ( !v16 )
          v20 = a2[3];
      }
      if ( v19 > v20 )
        return 0xFFFFFFFFLL;
      if ( v19 < v20 )
        return 1LL;
    }
    return 0LL;
  }
  return result;
}

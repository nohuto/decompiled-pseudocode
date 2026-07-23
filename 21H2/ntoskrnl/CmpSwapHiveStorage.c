/*
 * XREFs of CmpSwapHiveStorage @ 0x14087326C
 * Callers:
 *     CmpReorganizeHive @ 0x1406F7F2C (CmpReorganizeHive.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 * Callees:
 *     HvSwapHiveStorage @ 0x140873ACC (HvSwapHiveStorage.c)
 */

__int64 __fastcall CmpSwapHiveStorage(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // ecx
  _QWORD *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r8
  _QWORD *v22; // r11
  char *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 result; // rax
  __int64 v30; // rcx
  _QWORD *v31; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v32; // [rsp+28h] [rbp-8h]

  HvSwapHiveStorage();
  v4 = (_QWORD *)(a2 + 1536);
  v5 = a1 - a2;
  v6 = 6LL;
  do
  {
    v7 = *(_QWORD *)((char *)v4 + v5);
    *(_QWORD *)((char *)v4 + v5) = *v4;
    *v4++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = *(_DWORD *)(a1 + 1784);
  v9 = (_QWORD *)(a1 + 1888);
  v10 = 64LL;
  *(_DWORD *)(a1 + 1784) = *(_DWORD *)(a2 + 1784);
  *(_DWORD *)(a2 + 1784) = v8;
  v11 = a2 - a1;
  v12 = *(_QWORD *)(a1 + 1800);
  *(_QWORD *)(a1 + 1800) = *(_QWORD *)(a2 + 1800);
  v13 = *(_QWORD *)(a2 + 1808);
  *(_QWORD *)(a2 + 1800) = v12;
  v14 = *(_QWORD *)(a1 + 1808);
  *(_QWORD *)(a1 + 1808) = v13;
  *(_QWORD *)(a2 + 1808) = v14;
  LODWORD(v13) = *(_DWORD *)(a1 + 1864);
  *(_DWORD *)(a1 + 1864) = *(_DWORD *)(a2 + 1864);
  LODWORD(v14) = *(_DWORD *)(a2 + 1868);
  *(_DWORD *)(a2 + 1864) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 1868);
  *(_DWORD *)(a1 + 1868) = v14;
  LODWORD(v14) = *(_DWORD *)(a2 + 1872);
  *(_DWORD *)(a2 + 1868) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 1872);
  *(_DWORD *)(a1 + 1872) = v14;
  v15 = *(_QWORD *)(a2 + 1880);
  *(_DWORD *)(a2 + 1872) = v13;
  v16 = *(_QWORD *)(a1 + 1880);
  *(_QWORD *)(a1 + 1880) = v15;
  *(_QWORD *)(a2 + 1880) = v16;
  do
  {
    v17 = (_QWORD *)*v9;
    v18 = &v31;
    v32 = &v31;
    v19 = &v31;
    v31 = &v31;
    if ( v17 != v9 )
    {
      v31 = v17;
      v32 = *(_QWORD **)((char *)v9 + v11 + v5 + 8);
      v20 = v32;
      v17[1] = &v31;
      *v20 = &v31;
      v19 = v31;
      *(_QWORD *)((char *)v9 + v11 + v5 + 8) = v9;
      v18 = v32;
      *v9 = v9;
    }
    v21 = (_QWORD *)((char *)v9 + v11);
    v22 = *(_QWORD **)((char *)v9 + v11);
    if ( v22 != (_QWORD *)((char *)v9 + v11) )
    {
      v23 = (char *)v9 + v11;
      v24 = *(_QWORD **)((char *)v9 + v11 + 8);
      *v9 = v22;
      *(_QWORD *)&v23[v5 + 8] = v24;
      v22[1] = v9;
      *v24 = v9;
      v19 = v31;
      *((_QWORD *)v23 + 1) = v21;
      v18 = v32;
      *v21 = v21;
    }
    if ( v19 != &v31 )
    {
      *v21 = v19;
      *(_QWORD *)((char *)v9 + v11 + 8) = v18;
      v19[1] = v21;
      *v18 = v21;
    }
    v9 += 2;
    --v10;
  }
  while ( v10 );
  v25 = *(_QWORD *)(a1 + 4176);
  *(_QWORD *)(a1 + 4176) = *(_QWORD *)(a2 + 4176);
  v26 = *(_QWORD *)(a2 + 4184);
  *(_QWORD *)(a2 + 4176) = v25;
  v27 = *(_QWORD *)(a1 + 4184);
  *(_QWORD *)(a1 + 4184) = v26;
  *(_QWORD *)(a2 + 4184) = v27;
  v28 = *(_QWORD *)(a1 + 4224);
  *(_QWORD *)(a1 + 4224) = *(_QWORD *)(a2 + 4224);
  *(_QWORD *)(a2 + 4224) = v28;
  LODWORD(v27) = *(_DWORD *)(a1 + 4264);
  *(_DWORD *)(a1 + 4264) = *(_DWORD *)(a2 + 4264);
  LODWORD(v28) = *(_DWORD *)(a2 + 4268);
  *(_DWORD *)(a2 + 4264) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4268);
  *(_DWORD *)(a1 + 4268) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4792);
  *(_DWORD *)(a2 + 4268) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4792);
  *(_DWORD *)(a1 + 4792) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4796);
  *(_DWORD *)(a2 + 4792) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4796);
  *(_DWORD *)(a1 + 4796) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4800);
  *(_DWORD *)(a2 + 4796) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4800);
  *(_DWORD *)(a1 + 4800) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4804);
  *(_DWORD *)(a2 + 4800) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4804);
  *(_DWORD *)(a1 + 4804) = v28;
  result = *(_QWORD *)(a2 + 4832);
  *(_DWORD *)(a2 + 4804) = v27;
  v30 = *(_QWORD *)(a1 + 4832);
  *(_QWORD *)(a1 + 4832) = result;
  *(_QWORD *)(a2 + 4832) = v30;
  return result;
}

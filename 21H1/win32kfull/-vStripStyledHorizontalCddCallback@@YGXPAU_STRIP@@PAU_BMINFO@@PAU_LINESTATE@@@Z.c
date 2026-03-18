/*
 * XREFs of ?vStripStyledHorizontalCddCallback@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23EF0D
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __stdcall vStripStyledHorizontalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v3; // eax
  int v4; // edi
  unsigned int v5; // ecx
  char *v6; // edx
  int v7; // eax
  BOOL v8; // ecx
  unsigned int v9; // edx
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // [esp+10h] [ebp-40h]
  int v15; // [esp+14h] [ebp-3Ch]
  unsigned int v16; // [esp+18h] [ebp-38h]
  unsigned int v17; // [esp+1Ch] [ebp-34h]
  int v18; // [esp+20h] [ebp-30h]
  int v19; // [esp+24h] [ebp-2Ch]
  char *v20; // [esp+28h] [ebp-28h]
  int v21; // [esp+2Ch] [ebp-24h]
  void (__stdcall *v22)(_DWORD, int, _DWORD *); // [esp+30h] [ebp-20h]
  int v23; // [esp+34h] [ebp-1Ch]
  char *v24; // [esp+38h] [ebp-18h]
  _DWORD v25[4]; // [esp+3Ch] [ebp-14h] BYREF

  v24 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  v20 = (char *)a1 + 20;
  v3 = 4 * *((_DWORD *)a1 + 2);
  v19 = v3;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
  {
    v3 = -4 * *((_DWORD *)a1 + 2);
    v19 = v3;
  }
  v21 = *((_DWORD *)a3 + 1);
  v15 = *((_DWORD *)a3 + 15);
  v14 = *((_DWORD *)a1 + 3);
  v4 = *((_DWORD *)a3 + 5);
  v23 = 2 * (v3 > 0) - 1;
  v5 = abs32(v3);
  v17 = (v14 - *((_DWORD *)a1 + 106)) / v5;
  v6 = (char *)a1 + 20;
  v16 = ((v14 - *((_DWORD *)a1 + 106)) % v5) >> 2;
  v22 = *(void (__stdcall **)(_DWORD, int, _DWORD *))(*((_DWORD *)a1 + 105) + 4);
  do
  {
    v7 = *(_DWORD *)v6;
    v8 = v15;
    v9 = v16;
    v18 = v7;
    do
    {
      if ( !v8 )
      {
        v25[2] = v9 + 1;
        v25[0] = v9;
        v25[1] = v17;
        v25[3] = v17 + 1;
        v22(*((_DWORD *)a1 + 105), v21, v25);
        v8 = v15;
        v9 = v16;
      }
      ++v9;
      v4 -= *((_DWORD *)a3 + 2);
      v10 = v14 + 4;
      v16 = v9;
      v14 += 4;
      if ( v4 <= 0 )
      {
        *((_DWORD *)a3 + 12) += 4;
        v11 = (_DWORD *)*((_DWORD *)a3 + 12);
        if ( (unsigned int)v11 > *((_DWORD *)a3 + 11) )
        {
          v11 = (_DWORD *)*((_DWORD *)a3 + 10);
          *((_DWORD *)a3 + 12) = v11;
        }
        v4 += *v11;
        v8 = !v8;
        v10 = v14;
        v15 = v8;
      }
      --v18;
    }
    while ( v18 );
    v12 = v19 + v10;
    v4 -= *((_DWORD *)a3 + 3);
    v17 += v23;
    v14 = v12;
    if ( v4 <= 0 )
    {
      v13 = (_DWORD *)(*((_DWORD *)a3 + 12) + 4);
      *((_DWORD *)a3 + 12) = v13;
      if ( (unsigned int)v13 > *((_DWORD *)a3 + 11) )
      {
        v13 = (_DWORD *)*((_DWORD *)a3 + 10);
        *((_DWORD *)a3 + 12) = v13;
      }
      v4 += *v13;
      v8 = !v8;
      v12 = v14;
      v15 = v8;
    }
    v6 = v20 + 4;
    v20 = v6;
  }
  while ( v6 != v24 );
  *((_DWORD *)a1 + 3) = v12;
  *((_DWORD *)a3 + 5) = v4;
  *((_DWORD *)a3 + 15) = v8;
}

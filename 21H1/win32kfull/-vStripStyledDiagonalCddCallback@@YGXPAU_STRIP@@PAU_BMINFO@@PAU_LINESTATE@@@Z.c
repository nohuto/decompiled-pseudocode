/*
 * XREFs of ?vStripStyledDiagonalCddCallback@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23EAF9
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __stdcall vStripStyledDiagonalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v3; // eax
  int v4; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // edx
  int v7; // ecx
  BOOL v8; // eax
  int v9; // ecx
  bool v10; // zf
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // [esp+Ch] [ebp-44h]
  int v14; // [esp+10h] [ebp-40h]
  unsigned int v15; // [esp+14h] [ebp-3Ch]
  unsigned int v16; // [esp+18h] [ebp-38h]
  char *v17; // [esp+1Ch] [ebp-34h]
  int v18; // [esp+20h] [ebp-30h]
  int v19; // [esp+24h] [ebp-2Ch]
  int v20; // [esp+28h] [ebp-28h]
  int v21; // [esp+2Ch] [ebp-24h]
  void (__stdcall *v22)(_DWORD, int, _DWORD *); // [esp+30h] [ebp-20h]
  unsigned int v23; // [esp+34h] [ebp-1Ch]
  char *v24; // [esp+38h] [ebp-18h]
  _DWORD v25[4]; // [esp+3Ch] [ebp-14h] BYREF

  v24 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  v17 = (char *)a1 + 20;
  v3 = 4 * *((_DWORD *)a1 + 2);
  v18 = v3;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
  {
    v3 = -4 * *((_DWORD *)a1 + 2);
    v18 = v3;
  }
  v21 = *((_DWORD *)a3 + 1);
  v13 = *((_DWORD *)a3 + 15);
  v14 = *((_DWORD *)a1 + 3);
  v4 = *((_DWORD *)a3 + 5);
  v20 = 2 * (v3 > 0) - 1;
  v5 = abs32(v3);
  v15 = (v14 - *((_DWORD *)a1 + 106)) / v5;
  v6 = ((v14 - *((_DWORD *)a1 + 106)) % v5) >> 2;
  v16 = v6;
  v7 = v14;
  v22 = *(void (__stdcall **)(_DWORD, int, _DWORD *))(*((_DWORD *)a1 + 105) + 4);
  do
  {
    v19 = *(_DWORD *)v17;
    v8 = v13;
    while ( 1 )
    {
      v23 = v6;
      if ( !v8 )
      {
        v25[2] = v6 + 1;
        v25[0] = v6;
        v25[1] = v15;
        v25[3] = v15 + 1;
        v22(*((_DWORD *)a1 + 105), v21, v25);
        v7 = v14;
        v6 = v16;
        v8 = v13;
      }
      v9 = v7 + 4;
      ++v6;
      v10 = v19-- == 1;
      v14 = v9;
      v16 = v6;
      if ( v10 )
        break;
      v7 = v18 + v9;
      v15 += v20;
      v4 -= *((_DWORD *)a3 + 4);
      v14 = v7;
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
        v8 = v13 == 0;
        v13 = v8;
      }
    }
    v4 -= *((_DWORD *)a3 + 2);
    if ( v4 <= 0 )
    {
      *((_DWORD *)a3 + 12) += 4;
      v12 = (_DWORD *)*((_DWORD *)a3 + 12);
      if ( (unsigned int)v12 > *((_DWORD *)a3 + 11) )
      {
        v12 = (_DWORD *)*((_DWORD *)a3 + 10);
        *((_DWORD *)a3 + 12) = v12;
      }
      v4 += *v12;
      v8 = v13 == 0;
      v13 = v8;
    }
    if ( (*((_BYTE *)a1 + 4) & 5) != 0 )
    {
      v6 = v23;
      v16 = v23;
      v15 += v20;
      v8 = v13;
      v14 = v18 - 4 + v9;
    }
    v17 += 4;
    v7 = v14;
  }
  while ( v17 < v24 );
  *((_DWORD *)a1 + 3) = v14;
  *((_DWORD *)a3 + 5) = v4;
  *((_DWORD *)a3 + 15) = v8;
}

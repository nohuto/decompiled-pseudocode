/*
 * XREFs of ?vStripStyledVerticalCddCallback@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23F2E9
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __stdcall vStripStyledVerticalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v3; // eax
  int v4; // edi
  unsigned int v5; // ecx
  char *v6; // edx
  BOOL v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // [esp+10h] [ebp-40h]
  int v13; // [esp+14h] [ebp-3Ch]
  unsigned int v14; // [esp+18h] [ebp-38h]
  unsigned int v15; // [esp+1Ch] [ebp-34h]
  int v16; // [esp+20h] [ebp-30h]
  int v17; // [esp+24h] [ebp-2Ch]
  char *v18; // [esp+28h] [ebp-28h]
  int v19; // [esp+2Ch] [ebp-24h]
  void (__stdcall *v20)(_DWORD, int, _DWORD *); // [esp+30h] [ebp-20h]
  int v21; // [esp+34h] [ebp-1Ch]
  char *v22; // [esp+38h] [ebp-18h]
  _DWORD v23[4]; // [esp+3Ch] [ebp-14h] BYREF

  v22 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  v18 = (char *)a1 + 20;
  v3 = 4 * *((_DWORD *)a1 + 2);
  v16 = v3;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
  {
    v3 = -4 * *((_DWORD *)a1 + 2);
    v16 = v3;
  }
  v19 = *((_DWORD *)a3 + 1);
  v13 = *((_DWORD *)a3 + 15);
  v12 = *((_DWORD *)a1 + 3);
  v4 = *((_DWORD *)a3 + 5);
  v21 = 2 * (v3 > 0) - 1;
  v5 = abs32(v3);
  v14 = (v12 - *((_DWORD *)a1 + 106)) / v5;
  v6 = (char *)a1 + 20;
  v15 = ((v12 - *((_DWORD *)a1 + 106)) % v5) >> 2;
  v20 = *(void (__stdcall **)(_DWORD, int, _DWORD *))(*((_DWORD *)a1 + 105) + 4);
  do
  {
    v7 = v13;
    v17 = *(_DWORD *)v6;
    do
    {
      if ( !v7 )
      {
        v23[0] = v15;
        v23[2] = v15 + 1;
        v23[1] = v14;
        v23[3] = v14 + 1;
        v20(*((_DWORD *)a1 + 105), v19, v23);
        v7 = v13;
      }
      v8 = v16 + v12;
      v4 -= *((_DWORD *)a3 + 2);
      v14 += v21;
      v12 += v16;
      if ( v4 <= 0 )
      {
        *((_DWORD *)a3 + 12) += 4;
        v9 = (_DWORD *)*((_DWORD *)a3 + 12);
        if ( (unsigned int)v9 > *((_DWORD *)a3 + 11) )
        {
          v9 = (_DWORD *)*((_DWORD *)a3 + 10);
          *((_DWORD *)a3 + 12) = v9;
        }
        v4 += *v9;
        v7 = !v7;
        v8 = v12;
        v13 = v7;
      }
      --v17;
    }
    while ( v17 );
    v4 -= *((_DWORD *)a3 + 3);
    v10 = v8 + 4;
    ++v15;
    v12 = v10;
    if ( v4 <= 0 )
    {
      v11 = (_DWORD *)(*((_DWORD *)a3 + 12) + 4);
      *((_DWORD *)a3 + 12) = v11;
      if ( (unsigned int)v11 > *((_DWORD *)a3 + 11) )
      {
        v11 = (_DWORD *)*((_DWORD *)a3 + 10);
        *((_DWORD *)a3 + 12) = v11;
      }
      v4 += *v11;
      v7 = !v7;
      v10 = v12;
      v13 = v7;
    }
    v6 = v18 + 4;
    v18 = v6;
  }
  while ( v6 < v22 );
  *((_DWORD *)a1 + 3) = v10;
  *((_DWORD *)a3 + 5) = v4;
  *((_DWORD *)a3 + 15) = v7;
}

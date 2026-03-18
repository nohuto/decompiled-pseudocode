/*
 * XREFs of ?vStripSolidDiagonalCddCallback@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23E25A
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __stdcall vStripSolidDiagonalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v3; // edi
  int v4; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // edx
  char *v8; // ecx
  int v9; // [esp-Ch] [ebp-54h]
  unsigned int v10; // [esp+10h] [ebp-38h]
  int v11; // [esp+14h] [ebp-34h]
  int v12; // [esp+18h] [ebp-30h]
  unsigned int v13; // [esp+1Ch] [ebp-2Ch]
  char *v14; // [esp+20h] [ebp-28h]
  int v15; // [esp+24h] [ebp-24h]
  void (__stdcall *v16)(int, int, _DWORD *); // [esp+28h] [ebp-20h]
  unsigned int v17; // [esp+2Ch] [ebp-1Ch]
  char *v18; // [esp+30h] [ebp-18h]
  _DWORD v19[4]; // [esp+34h] [ebp-14h] BYREF

  v3 = 4 * *((_DWORD *)a1 + 2);
  v18 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  v14 = (char *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v3 = -4 * *((_DWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 3);
  v15 = *((_DWORD *)a3 + 1);
  v12 = 2 * (v3 > 0) - 1;
  v5 = abs32(v3);
  v6 = (v4 - *((_DWORD *)a1 + 106)) / v5;
  v10 = v6;
  v7 = ((v4 - *((_DWORD *)a1 + 106)) % v5) >> 2;
  v16 = *(void (__stdcall **)(int, int, _DWORD *))(*((_DWORD *)a1 + 105) + 4);
  v8 = (char *)a1 + 20;
  do
  {
    v11 = *(_DWORD *)v8;
    while ( 1 )
    {
      v17 = v7;
      v19[0] = v7;
      v19[1] = v6;
      v19[3] = v6 + 1;
      v13 = v7 + 1;
      v9 = *((_DWORD *)a1 + 105);
      v19[2] = v7 + 1;
      v16(v9, v15, v19);
      v6 = v10;
      v4 += 4;
      if ( !--v11 )
        break;
      v7 = v13;
      v4 += v3;
      v6 = v12 + v10;
      v10 += v12;
    }
    if ( (*((_BYTE *)a1 + 4) & 5) != 0 )
    {
      v7 = v17;
      v4 = v3 + v4 - 4;
      v6 = v12 + v10;
      v10 += v12;
    }
    else
    {
      v7 = v13;
    }
    v8 = v14 + 4;
    v14 = v8;
  }
  while ( v8 < v18 );
  *((_DWORD *)a1 + 3) = v4;
}

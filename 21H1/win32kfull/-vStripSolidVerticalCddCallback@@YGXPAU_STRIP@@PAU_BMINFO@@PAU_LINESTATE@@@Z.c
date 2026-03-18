/*
 * XREFs of ?vStripSolidVerticalCddCallback@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23E732
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __stdcall vStripSolidVerticalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // esi
  int v4; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // edx
  void (__stdcall *v8)(_DWORD, int, unsigned int *); // ecx
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  int v15; // [esp-Ch] [ebp-4Ch]
  char *v16; // [esp+Ch] [ebp-34h]
  int v17; // [esp+10h] [ebp-30h]
  void (__stdcall *v18)(_DWORD, int, unsigned int *); // [esp+14h] [ebp-2Ch]
  int v19; // [esp+18h] [ebp-28h]
  unsigned int v20; // [esp+1Ch] [ebp-24h]
  unsigned int v21; // [esp+1Ch] [ebp-24h]
  char *v22; // [esp+20h] [ebp-20h]
  int v23; // [esp+24h] [ebp-1Ch]
  unsigned int v24; // [esp+28h] [ebp-18h]
  unsigned int v25; // [esp+2Ch] [ebp-14h] BYREF
  int v26; // [esp+30h] [ebp-10h]
  unsigned int v27; // [esp+34h] [ebp-Ch]
  unsigned int v28; // [esp+38h] [ebp-8h]

  v3 = (char *)a1 + 20;
  v4 = 4 * *((_DWORD *)a1 + 2);
  v22 = (char *)a1 + 20;
  v16 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v23 = *((_DWORD *)a1 + 3);
  v19 = *((_DWORD *)a3 + 1);
  v17 = 2 * (v4 > 0) - 1;
  v5 = abs32(v4);
  v6 = (v23 - *((_DWORD *)a1 + 106)) / v5;
  v7 = ((v23 - *((_DWORD *)a1 + 106)) % v5) >> 2;
  v24 = v6;
  v8 = *(void (__stdcall **)(_DWORD, int, unsigned int *))(*((_DWORD *)a1 + 105) + 4);
  v18 = v8;
  if ( v4 <= 0 )
  {
    do
    {
      v13 = *(_DWORD *)v3;
      v25 = v7;
      v26 = v6 - v13 + 1;
      v21 = v7 + 1;
      v28 = v24 + 1;
      v27 = v7 + 1;
      v18(*((_DWORD *)a1 + 105), v19, &v25);
      v7 = v21;
      v12 = v4 * v13 + v23 + 4;
      v14 = v13 * v17;
      v3 = v22 + 4;
      v23 = v12;
      v22 = v3;
      v24 += v14;
      v6 = v24;
    }
    while ( v3 < v16 );
  }
  else
  {
    do
    {
      v9 = *(_DWORD *)v3;
      v26 = v6;
      v28 = v9 + v6;
      v25 = v7;
      v15 = *((_DWORD *)a1 + 105);
      v20 = v7 + 1;
      v27 = v7 + 1;
      v8(v15, v19, &v25);
      v7 = v20;
      v10 = v4 * v9 + v23 + 4;
      v11 = v9 * v17;
      v3 = v22 + 4;
      v23 = v10;
      v8 = v18;
      v22 = v3;
      v24 += v11;
      v6 = v24;
    }
    while ( v3 < v16 );
    v12 = v23;
  }
  *((_DWORD *)a1 + 3) = v12;
}

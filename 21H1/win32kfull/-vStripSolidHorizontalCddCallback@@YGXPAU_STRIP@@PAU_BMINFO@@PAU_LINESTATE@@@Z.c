/*
 * XREFs of ?vStripSolidHorizontalCddCallback@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23E516
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __stdcall vStripSolidHorizontalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // esi
  int v4; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // edx
  void (__stdcall *v8)(_DWORD, _DWORD, _DWORD); // ecx
  int v9; // esi
  int v10; // ecx
  int v11; // [esp-Ch] [ebp-4Ch]
  unsigned int v12; // [esp+Ch] [ebp-34h]
  char *v13; // [esp+10h] [ebp-30h]
  int v14; // [esp+14h] [ebp-2Ch]
  int v15; // [esp+18h] [ebp-28h]
  void (__stdcall *i)(_DWORD, _DWORD, _DWORD); // [esp+1Ch] [ebp-24h]
  char *v17; // [esp+20h] [ebp-20h]
  unsigned int v18; // [esp+24h] [ebp-1Ch]
  int v19; // [esp+28h] [ebp-18h]
  _DWORD v20[4]; // [esp+2Ch] [ebp-14h] BYREF

  v3 = (char *)a1 + 20;
  v4 = 4 * *((_DWORD *)a1 + 2);
  v17 = (char *)a1 + 20;
  v13 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v15 = *((_DWORD *)a3 + 1);
  v19 = *((_DWORD *)a1 + 3);
  v14 = 2 * (v4 > 0) - 1;
  v5 = abs32(v4);
  v6 = (v19 - *((_DWORD *)a1 + 106)) / v5;
  v18 = v6;
  v7 = ((v19 - *((_DWORD *)a1 + 106)) % v5) >> 2;
  v8 = *(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*((_DWORD *)a1 + 105) + 4);
  for ( i = v8; ; v8 = i )
  {
    v9 = *(_DWORD *)v3;
    v20[0] = v7;
    v20[1] = v6;
    v20[3] = v6 + 1;
    v12 = v9 + v7;
    v11 = *((_DWORD *)a1 + 105);
    v20[2] = v9 + v7;
    v8(v11, v15, v20);
    v10 = v4 + 4 * v9 + v19;
    v3 = v17 + 4;
    v6 = v14 + v18;
    v7 = v12;
    v19 = v10;
    v18 += v14;
    v17 = v3;
    if ( v3 >= v13 )
      break;
  }
  *((_DWORD *)a1 + 3) = v10;
}

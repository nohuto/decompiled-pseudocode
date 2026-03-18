/*
 * XREFs of _MNFindItemInColumn@16 @ 0x1ACBF1
 * Callers:
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 * Callees:
 *     _MNFindNextValidItem@16 @ 0x1ACCB8 (_MNFindNextValidItem@16.c)
 */

int __fastcall MNFindItemInColumn(int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v6; // edi
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // [esp+Ch] [ebp-1Ch]
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  int ValidItem; // [esp+18h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  v18 = -1;
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24);
  ValidItem = MNFindNextValidItem(a3, 0);
  if ( ValidItem != -1 )
  {
    v19 = 20000;
    v20 = 20000;
    if ( a2 >= v6 )
      return -1;
    v16 = *(_DWORD *)(a1 + 56);
    v8 = *(_DWORD *)(80 * a2 + v16);
    v15 = *(_DWORD *)(v8 + 36);
    v14 = *(_DWORD *)(v8 + 40);
    while ( v6 )
    {
      --v6;
      v9 = MNFindNextValidItem(a3, 0);
      v10 = v9;
      if ( v9 == ValidItem || v9 == -1 )
        break;
      v11 = *(_DWORD *)(80 * v9 + v16);
      v12 = v15 - *(_DWORD *)(v11 + 36);
      v13 = v14 - *(_DWORD *)(v11 + 40);
      if ( v12 < 0 )
        v12 = *(_DWORD *)(v11 + 36) - v15;
      if ( v13 < 0 )
        v13 = *(_DWORD *)(v11 + 40) - v14;
      if ( v13 < v19 && (a4 || v12) && v12 <= v20 )
      {
        v20 = v12;
        v19 = v13;
        v18 = v10;
      }
    }
  }
  return v18;
}

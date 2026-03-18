/*
 * XREFs of _MNItemHitTest@16 @ 0x19761B
 * Callers:
 *     _FindNCHitEx@16 @ 0xA3C10 (_FindNCHitEx@16.c)
 *     _xxxMNFindWindowFromPoint@12 @ 0x198869 (_xxxMNFindWindowFromPoint@12.c)
 *     _xxxMenuItemFromPoint@16 @ 0x1ABB72 (_xxxMenuItemFromPoint@16.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall MNItemHitTest(int a1, int a2, int a3, int a4)
{
  int v5; // ecx
  int v6; // edx
  int v7; // edx
  int v8; // edi
  int v9; // ebx
  int result; // eax
  _DWORD *v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  _DWORD *v16; // esi
  int v17; // edx
  _DWORD *v18; // ecx
  _DWORD *v19; // esi
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  bool v23; // zf
  int v25; // [esp+Ch] [ebp-24h]
  int v26; // [esp+10h] [ebp-20h] BYREF
  int v27; // [esp+14h] [ebp-1Ch]
  int v28; // [esp+18h] [ebp-18h]
  int v29; // [esp+1Ch] [ebp-14h]
  unsigned int v30; // [esp+20h] [ebp-10h]
  _DWORD *v31; // [esp+24h] [ebp-Ch]
  unsigned int v32; // [esp+28h] [ebp-8h]

  v26 = 0;
  v5 = *(_DWORD *)(a1 + 20);
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = *(_DWORD *)(v5 + 24);
  if ( !v30 )
    return -1;
  v6 = *(_DWORD *)(a2 + 20);
  if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
  {
    v26 = *(_DWORD *)(v6 + 52) + 3;
    v28 = *(_DWORD *)(v6 + 60) - 3;
    v27 = *(_DWORD *)(v6 + 56) + 3;
    v29 = *(_DWORD *)(v6 + 64) - 3;
    if ( !PtInRect(&v26, a3, a4) )
      return -1;
    if ( (*(_BYTE *)(v7 + 18) & 0x40) != 0 )
      v8 = *(_DWORD *)(v7 + 76) - a3;
    else
      v8 = a3 - *(_DWORD *)(v7 + 68);
    v9 = a4 - *(_DWORD *)(v7 + 72);
    if ( v9 < 0 )
      return -3;
    if ( v9 >= *(_DWORD *)(a1 + 40) )
      return -4;
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 18) & 0x40) != 0 )
      v8 = *(_DWORD *)(v6 + 60) - a3;
    else
      v8 = a3 - *(_DWORD *)(v6 + 52);
    v9 = a4 - *(_DWORD *)(v6 + 56);
  }
  if ( (*(_BYTE *)(a1 + 80) & 3) != 0 )
  {
    v11 = (_DWORD *)MNGetpItemFromIndex(a1, *(_DWORD *)(a1 + 72));
    v31 = v11;
    if ( v11 )
    {
      v13 = *v11;
      v14 = 0;
      v27 = 0;
      v26 = 0;
      v32 = 0;
      v28 = *(_DWORD *)(v13 + 44);
      if ( v12 < v30 )
      {
        v15 = *(_DWORD *)(a1 + 40);
        v16 = v31;
        v25 = v15;
        while ( (int)v14 < v15 )
        {
          v31 = (_DWORD *)(v32 + *(_DWORD *)(*v16 + 48));
          v32 = (unsigned int)v31;
          v29 = (int)v31;
          if ( PtInRect(&v26, v8, v9) )
            return v17;
          v14 = v31;
          v15 = v25;
          v16 += 20;
          v27 = (int)v31;
          if ( v17 + 1 >= v30 )
            return -1;
        }
      }
    }
    return -1;
  }
  v18 = *(_DWORD **)(a1 + 56);
  v32 = 0;
  v31 = v18;
  if ( !v30 )
    return -1;
  while ( 1 )
  {
    v19 = (_DWORD *)*v18;
    v20 = *(_DWORD *)(*v18 + 36);
    v21 = v19[10];
    v28 = v20 + v19[11];
    v22 = v19[12];
    v26 = v20;
    v27 = v21;
    v29 = v21 + v22;
    v23 = !PtInRect(&v26, v8, v9);
    result = v32;
    if ( !v23 )
      break;
    v18 = v31 + 20;
    ++v32;
    v31 += 20;
    if ( v32 >= v30 )
      return -1;
  }
  return result;
}

/*
 * XREFs of ?ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z @ 0x32B6C
 * Callers:
 *     ?ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z @ 0x327EE (-ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z.c)
 * Callees:
 *     ?AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z @ 0x1C4D6 (-AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z.c)
 *     _NextOwnedWindow@12 @ 0x1C8E4 (_NextOwnedWindow@12.c)
 *     ?GetRealOwner@@YGPAUtagWND@@PAU1@@Z @ 0x1C9C2 (-GetRealOwner@@YGPAUtagWND@@PAU1@@Z.c)
 *     _PWInsertAfter@4 @ 0x9324A (_PWInsertAfter@4.c)
 *     ?IsOwnee@@YGHPAUtagWND@@0@Z @ 0x97884 (-IsOwnee@@YGHPAUtagWND@@0@Z.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner2(int a1, struct tagWND *a2)
{
  struct tagSMWP *v2; // esi
  _DWORD *v3; // edi
  struct tagSMWP *v5; // ebx
  _DWORD *OwnedWindow; // eax
  struct tagWND *RealOwner; // eax
  struct tagWND *v8; // ebx
  struct tagWND *v9; // edx
  struct tagWND *k; // esi
  struct tagWND *j; // esi
  struct tagWND *v12; // eax
  struct tagWND *v13; // [esp+0h] [ebp-34h]
  struct tagWND *v14; // [esp+4h] [ebp-30h]
  int v15; // [esp+Ch] [ebp-28h]
  struct tagSMWP *v16; // [esp+10h] [ebp-24h]
  struct tagWND *v18; // [esp+18h] [ebp-1Ch]
  _DWORD *v19; // [esp+1Ch] [ebp-18h]
  int v20; // [esp+20h] [ebp-14h]
  int v21; // [esp+24h] [ebp-10h]
  struct tagWND *v22; // [esp+28h] [ebp-Ch]
  struct tagSMWP *i; // [esp+30h] [ebp-4h]

  v2 = (struct tagSMWP *)a1;
  v3 = (_DWORD *)(((_DWORD)a2 << 7) + *(_DWORD *)(a1 + 24));
  v15 = (_DWORD)a2 << 7;
  if ( (v3[6] & 0x204) != 0 )
    return v2;
  v5 = (struct tagSMWP *)_HMObjectFromHandle(*v3);
  v16 = v5;
  v22 = (struct tagWND *)PWInsertAfter(v3[1]);
  v21 = *((_DWORD *)v5 + 14);
  OwnedWindow = NextOwnedWindow(0, v5, v21);
  v19 = OwnedWindow;
  v18 = (struct tagWND *)*((_DWORD *)v5 + 16);
  if ( !v18 && !OwnedWindow )
    return v2;
  RealOwner = v5;
  for ( i = v5; ; i = RealOwner )
  {
    RealOwner = GetRealOwner(RealOwner);
    if ( !RealOwner )
      break;
  }
  v8 = v22;
  v20 = 0;
  if ( !v22 )
  {
    v9 = i;
    goto LABEL_10;
  }
  if ( v22 == (struct tagWND *)1 )
  {
    for ( j = *(struct tagWND **)(v21 + 60); j; j = (struct tagWND *)*((_DWORD *)j + 12) )
    {
      if ( (*(_BYTE *)(*((_DWORD *)j + 5) + 12) & 0x20) != 0 )
        break;
      if ( !IsOwnee(v13, v14) )
        v8 = j;
    }
    v2 = (struct tagSMWP *)a1;
    v9 = i;
    if ( v8 == (struct tagWND *)1 )
      v3[6] |= 4u;
    goto LABEL_10;
  }
  if ( !IsOwnee(v13, v14) )
  {
LABEL_10:
    if ( (v3[6] & 4) == 0 )
    {
      --*((_DWORD *)v2 + 4);
      v2 = AddSelfAndOwnees(
             v9,
             v2,
             v16,
             v22,
             a2,
             (struct tagWND *)(((unsigned int)&loc_3FFFD + 3) & v3[6] | (v3[6] >> 7) & 0x400),
             (int)v13,
             (unsigned int)v14);
      if ( v2 )
      {
        if ( v8 )
          v20 = *(_DWORD *)v8;
        *(_DWORD *)(*((_DWORD *)v2 + 6) + v15 + 4) = v20;
      }
    }
    return v2;
  }
  if ( v19 )
  {
LABEL_17:
    v8 = 0;
    for ( k = *(struct tagWND **)(v21 + 60); k && !IsOwnee(v13, v14); k = (struct tagWND *)*((_DWORD *)k + 12) )
      v8 = k;
    v2 = (struct tagSMWP *)a1;
    goto LABEL_10;
  }
  v12 = v22;
  while ( v12 != v18 )
  {
    v12 = (struct tagWND *)*((_DWORD *)v12 + 12);
    if ( !v12 )
      goto LABEL_17;
  }
  return v2;
}

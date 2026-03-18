/*
 * XREFs of _IsChildSameThread@8 @ 0x14F148
 * Callers:
 *     _ImeCanDestroyDefIMEforChild@8 @ 0xCB942 (_ImeCanDestroyDefIMEforChild@8.c)
 * Callees:
 *     <none>
 */

int __fastcall IsChildSameThread(int a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // ebx
  char v4; // cl
  _DWORD *v5; // edx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // edx
  int v9; // ebx
  int v10; // ebx
  int v13; // [esp+14h] [ebp-4h]

  v2 = *(_DWORD **)(a1 + 60);
  v3 = a2[2];
  v13 = v3;
  while ( 1 )
  {
    if ( !v2 )
      return 0;
    v4 = *(_BYTE *)(v2[5] + 23) & 0xC0;
    if ( v4 == 64 )
      break;
    v5 = v2;
    if ( **(_WORD **)(v2[19] + 4) != *(_WORD *)(_gpsi + 506) )
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)(v5[19] + 4);
        if ( (*(_BYTE *)(v6 + 10) & 1) != 0 || *(_WORD *)v6 == *(_WORD *)(_gpsi + 498) )
          break;
        v5 = (_DWORD *)v5[16];
        if ( !v5 )
          goto LABEL_7;
      }
    }
LABEL_24:
    v2 = (_DWORD *)v2[12];
  }
LABEL_7:
  if ( v2 == a2 || v2[2] != v3 )
    goto LABEL_24;
  v7 = 0;
  v8 = v2;
  if ( v4 == 64 )
  {
    do
    {
      if ( v8[2] != v13 )
        break;
      v9 = *(_DWORD *)(v8[19] + 4);
      if ( (*(_BYTE *)(v9 + 10) & 1) != 0 || *(_WORD *)v9 == *(_WORD *)(_gpsi + 498) )
        v7 = 1;
      v8 = (_DWORD *)v8[14];
    }
    while ( (*(_BYTE *)(v8[5] + 23) & 0xC0) == 0x40 );
    v3 = v13;
  }
  if ( (*(_BYTE *)(v8[5] + 23) & 0xC0) != 0x40 )
  {
    do
    {
      if ( v8[2] != v13 )
        break;
      v10 = *(_DWORD *)(v8[19] + 4);
      if ( (*(_BYTE *)(v10 + 10) & 1) != 0 || *(_WORD *)v10 == *(_WORD *)(_gpsi + 498) )
        v7 = 1;
      v8 = (_DWORD *)v8[16];
    }
    while ( v8 );
    v3 = v13;
  }
  if ( v7 )
    goto LABEL_24;
  return 1;
}

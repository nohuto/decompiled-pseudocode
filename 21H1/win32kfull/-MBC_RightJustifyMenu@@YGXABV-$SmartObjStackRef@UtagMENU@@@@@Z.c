/*
 * XREFs of ?MBC_RightJustifyMenu@@YGXABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0xB6AC2
 * Callers:
 *     _xxxMenuBarCompute@20 @ 0xB6974 (_xxxMenuBarCompute@20.c)
 * Callees:
 *     _MNIsOwnerDrawItem@8 @ 0x1A99A0 (_MNIsOwnerDrawItem@8.c)
 *     _IsMDIItem@4 @ 0x1AB7B3 (_IsMDIItem@4.c)
 */

int __thiscall MBC_RightJustifyMenu(_DWORD **this)
{
  _DWORD **v1; // esi
  int v2; // edx
  int result; // eax
  int v4; // ebx
  int v5; // ecx
  int i; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  _BYTE **v12; // ecx
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // edi
  int *v17; // ecx
  int v18; // edi
  int v19; // ebx
  int v20; // edi
  int *v21; // eax
  int v22; // ecx
  int v23; // esi
  unsigned int v24; // edi
  int v25; // ecx
  int v26; // ebx
  int v27; // ecx
  unsigned int v29; // [esp+8h] [ebp-20h]
  int v30; // [esp+10h] [ebp-18h]
  unsigned int v31; // [esp+10h] [ebp-18h]
  int v32; // [esp+14h] [ebp-14h]
  int v33; // [esp+18h] [ebp-10h]
  _DWORD *v34; // [esp+1Ch] [ebp-Ch]
  int v35; // [esp+1Ch] [ebp-Ch]
  int v36; // [esp+20h] [ebp-8h]
  int v37; // [esp+24h] [ebp-4h]
  int v38; // [esp+24h] [ebp-4h]

  v1 = this;
  v2 = 0;
  result = *(_DWORD *)(**this + 20);
  if ( !*(_DWORD *)(result + 24) )
    return result;
  v4 = 0;
  v36 = 0;
  v5 = *(_DWORD *)(**this + 56);
  if ( (*(_BYTE *)(*(_DWORD *)(**v1 + 20) + 20) & 0x20) != 0 && *(_DWORD *)(**v1 + 52) )
  {
    v8 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(**v1 + 52) + 20) + 13) & 2;
    v30 = v8;
    if ( *(int *)(*(_DWORD *)(**v1 + 20) + 24) <= 0 )
      goto LABEL_22;
    while ( !v8 )
    {
      v10 = v1[2];
      if ( !v10 )
        v10 = (_DWORD *)**v1;
      if ( (**(_BYTE **)v5 & 4) == 0 )
      {
        v9 = MNIsOwnerDrawItem(v10, v5);
        goto LABEL_19;
      }
      if ( *(_DWORD *)(*(_DWORD *)v5 + 64) > 0xCu )
        goto LABEL_21;
LABEL_20:
      ++v4;
      v5 = *(_DWORD *)(**v1 + 56) + 80 * v4;
      if ( v4 >= *(_DWORD *)(*(_DWORD *)(**v1 + 20) + 24) )
      {
LABEL_21:
        v36 = v4;
LABEL_22:
        if ( v4 == *(_DWORD *)(*(_DWORD *)(**v1 + 20) + 24) )
          v36 = --v4;
        v11 = *(_DWORD *)(*(_DWORD *)(**v1 + 20) + 24) - 1;
        v33 = v11;
        v37 = 80 * v11;
        v12 = (_BYTE **)(80 * v11 + *(_DWORD *)(**v1 + 56));
        if ( v11 > v4 )
        {
          while ( 1 )
          {
            if ( v30 )
            {
              if ( !IsMDIItem(v12) )
                goto LABEL_34;
            }
            else
            {
              v34 = v1[2];
              if ( !v34 )
                v34 = (_DWORD *)**v1;
              if ( (**v12 & 4) == 0 && !MNIsOwnerDrawItem(v34, v12) )
              {
LABEL_34:
                v33 = v11;
                break;
              }
              v13 = v37;
            }
            --v11;
            v37 = v13 - 80;
            v12 = (_BYTE **)(v13 - 80 + *(_DWORD *)(**v1 + 56));
            if ( v11 <= v4 )
              goto LABEL_34;
          }
        }
        v14 = 80 * v4;
        v35 = 80 * v4;
        v32 = *(_DWORD *)(**(_DWORD **)(**v1 + 56) + 40);
        v15 = *(_DWORD *)(**v1 + 36);
        v29 = v15;
        v31 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**v1 + 56) + 80 * v4) + 36);
        result = *(_DWORD *)(*(_DWORD *)(**v1 + 20) + 24) - 1;
        if ( result > v11 )
        {
          v16 = result - v11;
          v38 = 80 * result;
          do
          {
            v17 = (int *)(v38 + *(_DWORD *)(**v1 + 56));
            v38 -= 80;
            v15 -= *(_DWORD *)(*v17 + 44);
            *(_DWORD *)(*v17 + 36) = v15;
            result = *v17;
            *(_DWORD *)(*v17 + 40) = v32;
            --v16;
          }
          while ( v16 );
          v11 = v33;
          v4 = v36;
          v14 = v35;
        }
        if ( v4 <= v11 )
        {
          v18 = v11 - v4;
          v19 = v32;
          v20 = v18 + 1;
          do
          {
            v21 = (int *)(v14 + *(_DWORD *)(**v1 + 56));
            v22 = *v21;
            v23 = *(_DWORD *)(*v21 + 44);
            v15 -= v23;
            if ( v15 <= v31 )
            {
              v19 += *(_DWORD *)(v22 + 48);
              v15 = v29 - v23;
              v31 = 0;
            }
            v1 = this;
            *(_DWORD *)(v22 + 36) = v15;
            result = *v21;
            v14 = v35 + 80;
            v35 += 80;
            *(_DWORD *)(result + 40) = v19;
            --v20;
          }
          while ( v20 );
        }
        return result;
      }
    }
    if ( v4 )
      goto LABEL_21;
    v9 = IsMDIItem(v5);
LABEL_19:
    if ( !v9 )
      goto LABEL_21;
    goto LABEL_20;
  }
  result = *(_DWORD *)(**v1 + 20);
  if ( *(int *)(result + 24) <= 0 )
    return result;
  for ( i = 0; ; i += 80 )
  {
    v7 = (int)*v1;
    if ( (**(_DWORD **)(i + *(_DWORD *)(**v1 + 56)) & 0x4000) != 0 )
      break;
    ++v2;
    result = *(_DWORD *)(*(_DWORD *)v7 + 20);
    if ( v2 >= *(_DWORD *)(result + 24) )
      return result;
  }
  v24 = *(_DWORD *)(*(_DWORD *)v7 + 36) + *(_DWORD *)(**(_DWORD **)(**v1 + 56) + 36);
  result = *(_DWORD *)(**v1 + 20);
  v25 = *(_DWORD *)(result + 24) - 1;
  if ( v25 >= v2 )
  {
    v26 = 80 * v25;
    v27 = *(_DWORD *)(result + 24) - v2;
    do
    {
      result = *(_DWORD *)(v26 + *(_DWORD *)(**v1 + 56));
      v24 -= *(_DWORD *)(result + 44);
      if ( *(_DWORD *)(result + 36) < v24 )
        *(_DWORD *)(result + 36) = v24;
      v26 -= 80;
      --v27;
    }
    while ( v27 );
  }
  return result;
}

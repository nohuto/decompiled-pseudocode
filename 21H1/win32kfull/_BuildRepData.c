/*
 * XREFs of _BuildRepData @ 0x1C211D
 * Callers:
 *     _BuildExpandAAInfo @ 0x1C17F7 (_BuildExpandAAInfo.c)
 *     _BuildShrinkAAInfo @ 0x1C22ED (_BuildShrinkAAInfo.c)
 * Callees:
 *     <none>
 */

int __fastcall BuildRepData(void *a1, int a2, int a3)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  _WORD *v10; // ecx
  _WORD *v11; // ecx
  _WORD *v12; // esi
  int v13; // ecx
  int v14; // edx
  int i; // eax
  int result; // eax
  _DWORD v17[12]; // [esp+Ch] [ebp-64h] BYREF
  void *v18; // [esp+3Ch] [ebp-34h]
  int v19; // [esp+40h] [ebp-30h]
  int v20; // [esp+44h] [ebp-2Ch]
  int v21; // [esp+48h] [ebp-28h]
  int v22; // [esp+4Ch] [ebp-24h]
  int *v23; // [esp+50h] [ebp-20h]
  int *v24; // [esp+54h] [ebp-1Ch]
  int v25; // [esp+58h] [ebp-18h] BYREF
  int v26; // [esp+5Ch] [ebp-14h]
  _WORD *v27; // [esp+60h] [ebp-10h]
  int v28; // [esp+64h] [ebp-Ch]
  int v29; // [esp+68h] [ebp-8h]
  unsigned __int8 v30; // [esp+6Fh] [ebp-1h]

  v3 = 0;
  v25 = a2;
  v21 = 0;
  v18 = a1;
  v22 = 0;
  v20 = 0;
  qmemcpy(v17, a1, sizeof(v17));
  v4 = -1;
  v5 = v17[1];
  v27 = (_WORD *)v17[9];
  if ( v17[0] >= v17[1] )
  {
    if ( v17[0] <= v17[1] )
      return 0;
    v6 = v17[1];
    v5 = v17[0];
    v24 = &a3;
    v23 = &v25;
  }
  else
  {
    v6 = v17[0];
    v24 = &v25;
    v23 = &a3;
  }
  v19 = 2 * v5;
  v7 = v6 + 2 * v5;
  HIWORD(v17[8]) = 0;
  v29 = 0;
  v26 = 0;
  v28 = 2 * v6;
  if ( a3 >= v17[7] )
    return 0;
  v30 = 0;
  BYTE2(v17[8]) = 0;
  v8 = v28;
  v9 = 2;
  do
  {
    v7 -= v8;
    if ( v7 < 0 )
    {
      ++*v24;
      if ( v4 != -1 )
      {
        v10 = v27++;
        *v10 = v29;
        v8 = v28;
      }
      v7 += v19;
      v29 = 0;
      v26 = 0;
    }
    ++v26;
    if ( v25 < v17[4] || v25 >= v17[5] || (v8 = v28, a3 < v17[6]) || (v8 = v28, a3 >= v17[7]) )
    {
      if ( v4 != -1 )
        goto LABEL_21;
    }
    else
    {
      ++v29;
      if ( v4 == -1 )
      {
        v4 = v25;
        v21 = a3;
        v30 = v26 - 1;
        BYTE2(v17[8]) = v26 - 1;
        v8 = v28;
      }
      v22 = v25;
      v20 = a3;
    }
    ++*v23;
  }
  while ( a3 < v17[7] );
  if ( v4 == -1 )
    return 0;
LABEL_21:
  if ( v29 )
  {
    v11 = v27;
    *v27 = v29;
    v12 = v11 + 1;
    while ( 1 )
    {
      v7 -= v28;
      if ( v7 < 0 )
        break;
      HIBYTE(v17[8]) = ++v3;
    }
  }
  else
  {
    v12 = v27;
  }
  v13 = v4;
  if ( v17[0] < v17[1] )
  {
    v14 = 2;
    do
    {
LABEL_30:
      if ( v13 <= v17[4] )
        break;
      --v13;
      --v14;
    }
    while ( v14 );
    goto LABEL_32;
  }
  v14 = v30;
  v9 = v3;
  if ( v30 )
    goto LABEL_30;
LABEL_32:
  LOBYTE(v17[8]) = v4 - v13;
  for ( i = v22; v9; --v9 )
  {
    if ( i >= v17[5] - 1 )
      break;
    ++i;
  }
  BYTE1(v17[8]) = i - v22;
  v17[5] = v22 + 1;
  v17[6] = v21;
  v17[7] = v20 + 1;
  v17[3] = v22 - v4 + 1;
  result = 1;
  v17[10] = v12;
  v17[4] = v4;
  v17[2] = v4;
  v17[11] = 1;
  qmemcpy(v18, v17, 0x30u);
  return result;
}

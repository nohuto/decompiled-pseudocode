/*
 * XREFs of ?blueloop@@YGHH@Z @ 0xB7CA4
 * Callers:
 *     ?greenloop@@YGHH@Z @ 0xB7A58 (-greenloop@@YGHH@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall blueloop(void *this)
{
  int v1; // esi
  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edi
  unsigned int *v8; // edx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // edx
  unsigned int *v12; // esi
  char v13; // cl
  int v14; // eax
  int v16; // [esp+Ch] [ebp-20h]
  int v17; // [esp+10h] [ebp-1Ch]
  int v18; // [esp+14h] [ebp-18h]
  int v19; // [esp+18h] [ebp-14h]
  _BYTE *v20; // [esp+18h] [ebp-14h]
  int v21; // [esp+1Ch] [ebp-10h]
  int v22; // [esp+20h] [ebp-Ch]
  int v23; // [esp+20h] [ebp-Ch]
  unsigned int v24; // [esp+24h] [ebp-8h]
  unsigned int *v25; // [esp+28h] [ebp-4h]

  v21 = 0;
  if ( this )
  {
    v1 = dword_2739F8;
    v4 = 0;
    v3 = dword_273A10;
    v2 = 31;
    dword_273A78 = dword_2739F8;
    dword_273A7C = 0;
    dword_273A80 = 31;
    dword_273A84 = dword_273A10;
    dword_273A88 = 32;
    dword_273A8C = 0;
  }
  else
  {
    v1 = dword_273A78;
    v2 = dword_273A80;
    v3 = dword_273A84;
    v4 = dword_273A7C;
  }
  v5 = dword_273A04;
  v16 = v4;
  v6 = v1;
  v25 = (unsigned int *)dword_273A1C;
  v22 = dword_273A28;
  v17 = v2;
  v18 = dword_273A04;
  v24 = dword_273A04;
  v19 = v3;
  v7 = 0;
  if ( v1 <= v2 )
  {
    while ( 1 )
    {
      v5 = dword_273A04;
      if ( *v25 > v24 )
        break;
      ++v6;
      v24 += v19;
      ++v25;
      ++v22;
      v19 += 128;
      v7 = 0;
      if ( v6 > v2 )
        goto LABEL_10;
    }
    if ( v6 > v1 )
    {
      v1 = v6;
      v3 = v19;
      dword_273A1C = (int)v25;
      dword_273A28 = v22;
      v5 = v24;
      dword_273A78 = v6;
      v18 = v24;
      dword_273A04 = v24;
      dword_273A84 = v19;
      v16 = v6;
    }
    v7 = 1;
    v21 = 1;
LABEL_10:
    if ( v6 <= v2 )
    {
      v23 = v22 - v6;
      while ( 1 )
      {
        v5 = v18;
        v7 = v21;
        if ( *v25 <= v24 )
          break;
        v8 = v25++;
        *v8 = v24;
        *(_BYTE *)(v23 + v6++) = dword_273A48;
        v24 += v19;
        v7 = v21;
        v19 += 128;
        v5 = v18;
        if ( v6 > v2 )
          goto LABEL_16;
      }
      v2 = v6 - 1;
      v17 = v6 - 1;
    }
  }
LABEL_16:
  v9 = v3 - 128;
  v10 = v1 - 1;
  v11 = v5 - v9;
  v12 = (unsigned int *)(dword_273A1C - 4);
  v20 = (_BYTE *)(dword_273A28 - 1);
  if ( v7 )
    goto LABEL_17;
  if ( v10 >= dword_273A7C )
  {
    do
    {
      if ( *v12 > v11 )
      {
        dword_273A28 = (int)v20;
        v7 = 1;
        v2 = v10;
        dword_273A78 = v10;
        dword_273A1C = (int)v12;
        dword_273A04 = v11;
        dword_273A84 = v9;
        v17 = v10;
        v21 = 1;
        goto LABEL_17;
      }
      v7 = v21;
      v9 -= 128;
      --v10;
      --v12;
      --v20;
      v11 -= v9;
    }
    while ( v10 >= dword_273A7C );
    while ( 1 )
    {
LABEL_17:
      if ( v10 < dword_273A7C )
      {
        v14 = v16;
        goto LABEL_21;
      }
      if ( *v12 <= v11 )
        break;
      --v10;
      v13 = dword_273A48;
      v9 -= 128;
      *v12-- = v11;
      *v20 = v13;
      v2 = v17;
      v11 -= v9;
      --v20;
      v7 = v21;
    }
    v14 = v10 + 1;
LABEL_21:
    if ( v7 )
    {
      if ( v2 < dword_273A8C )
        dword_273A80 = v2;
      if ( v14 > dword_273A88 )
        dword_273A7C = v14;
      dword_273A8C = v2;
      dword_273A88 = v14;
    }
  }
  return v7;
}

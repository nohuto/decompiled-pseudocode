/*
 * XREFs of ?greenloop@@YGHH@Z @ 0xB7A58
 * Callers:
 *     ?redloop@@YGHXZ @ 0xB795E (-redloop@@YGHXZ.c)
 * Callees:
 *     ?blueloop@@YGHH@Z @ 0xB7CA4 (-blueloop@@YGHH@Z.c)
 */

int __thiscall greenloop(void *this)
{
  int v1; // ebx
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v15; // [esp+0h] [ebp-24h]
  int v16; // [esp+Ch] [ebp-18h]
  int v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+10h] [ebp-14h]
  int v19; // [esp+14h] [ebp-10h]
  int v20; // [esp+18h] [ebp-Ch]
  int v21; // [esp+1Ch] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-8h]
  int v23; // [esp+20h] [ebp-4h]
  int v24; // [esp+20h] [ebp-4h]

  if ( this )
  {
    v1 = dword_2739FC;
    v4 = 0;
    v3 = dword_273A14;
    dword_273A60 = 0;
    v2 = 31;
    dword_273A50 = dword_2739FC;
    dword_273A54 = 0;
    dword_273A58 = 31;
    dword_273A5C = dword_273A14;
    dword_273A64 = 32;
  }
  else
  {
    v1 = dword_273A50;
    v2 = dword_273A58;
    v3 = dword_273A5C;
    v4 = dword_273A54;
  }
  v16 = v4;
  v5 = 0;
  dword_273A04 = dword_273A08;
  v19 = dword_273A08;
  dword_273A1C = dword_273A20;
  v21 = dword_273A20;
  dword_273A28 = dword_273A2C;
  v20 = dword_273A2C;
  v23 = v1;
  v17 = v3;
  if ( v1 > v2 )
    goto LABEL_8;
  while ( 1 )
  {
    if ( blueloop(v15) )
    {
      v6 = v23;
      if ( !v5 )
      {
        if ( v23 > v1 )
        {
          v1 = v23;
          dword_273A20 = v21;
          dword_273A2C = v20;
          dword_273A08 = v19;
          dword_273A50 = v23;
          dword_273A5C = v17;
          v16 = v23;
        }
        v5 = 1;
      }
      goto LABEL_6;
    }
    if ( v5 )
      break;
    v6 = v23;
LABEL_6:
    dword_273A04 += v17;
    v19 += v17;
    dword_273A1C += 128;
    v21 += 128;
    dword_273A28 += 32;
    v20 += 32;
    v17 += 128;
    v23 = v6 + 1;
    if ( v6 + 1 > v2 )
      goto LABEL_7;
  }
  v2 = v23 - 1;
LABEL_7:
  v3 = dword_273A5C;
LABEL_8:
  v7 = v3 - 128;
  v8 = v1 - 1;
  v9 = dword_273A08 - v7;
  dword_273A6C = v7;
  dword_273A04 = dword_273A08 - v7;
  v22 = dword_273A20 - 128;
  dword_273A1C = dword_273A20 - 128;
  dword_273A70 = dword_273A20 - 128;
  v18 = dword_273A2C - 32;
  dword_273A28 = dword_273A2C - 32;
  dword_273A74 = dword_273A2C - 32;
  while ( 2 )
  {
    dword_273A68 = v9;
    v24 = v8;
    if ( v8 >= dword_273A54 )
    {
      if ( blueloop(v15) )
      {
        v10 = v22;
        if ( v5 )
          goto LABEL_13;
        dword_273A2C = v18;
        v2 = v24;
        v11 = dword_273A6C;
        v5 = 1;
        dword_273A50 = v24;
        dword_273A20 = v22;
        dword_273A08 = v9;
        dword_273A5C = dword_273A6C;
      }
      else
      {
        if ( v5 )
        {
          v13 = v24 + 1;
          goto LABEL_23;
        }
        v10 = v22;
LABEL_13:
        v11 = dword_273A6C;
      }
      dword_273A1C -= 128;
      dword_273A28 -= 32;
      v12 = v11 - 128;
      dword_273A04 -= v12;
      v8 = v24 - 1;
      v22 = v10 - 128;
      v9 -= v12;
      dword_273A70 = v10 - 128;
      dword_273A6C = v12;
      v18 -= 32;
      dword_273A74 = v18;
      continue;
    }
    break;
  }
  v13 = v16;
LABEL_23:
  if ( v5 )
  {
    if ( v2 < dword_273A60 )
      dword_273A58 = v2;
    dword_273A60 = v2;
    if ( v13 > dword_273A64 )
      dword_273A54 = v13;
    dword_273A64 = v13;
  }
  return v5;
}

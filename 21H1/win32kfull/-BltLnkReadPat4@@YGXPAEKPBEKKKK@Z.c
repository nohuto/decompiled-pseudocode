/*
 * XREFs of ?BltLnkReadPat4@@YGXPAEKPBEKKKK@Z @ 0x24887E
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall BltLnkReadPat4(
        unsigned __int8 *a1,
        char a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // edx
  unsigned int v8; // ebx
  unsigned __int8 v9; // al
  unsigned __int8 *v10; // esi
  int v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ecx
  unsigned __int8 v16; // ah
  unsigned int v17; // edx
  char v18; // ah
  unsigned __int8 v19; // al
  const unsigned __int8 *v20; // eax
  size_t v21; // ecx
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  unsigned int v24; // ecx
  unsigned __int8 *v25; // [esp+14h] [ebp+8h]
  int v26; // [esp+1Ch] [ebp+10h]
  unsigned int v27; // [esp+24h] [ebp+18h]

  v7 = a5;
  v8 = a6;
  if ( (a2 & 1) != 0 && a6 )
  {
    v9 = a3[a5 >> 1];
    if ( (a5 & 1) == 0 )
      v9 >>= 4;
    *a1 = v9 & 0xF;
    v10 = a1 + 1;
    v7 = a5 + 1;
    v8 = a6 - 1;
  }
  else
  {
    v10 = a1;
  }
  v11 = a4;
  v25 = (unsigned __int8 *)a4;
  if ( (a4 & 1) != 0 )
  {
    v11 = 2 * a4;
    v25 = (unsigned __int8 *)(2 * a4);
  }
  if ( (int)v8 <= v11 )
  {
    v13 = v8 >> 1;
    v12 = v8 & 1;
  }
  else
  {
    v12 = v8 - v11;
    v11 >>= 1;
    v25 = (unsigned __int8 *)v11;
    v13 = v11;
  }
  if ( v13 )
  {
    v14 = v13;
    while ( 1 )
    {
      --v14;
      v15 = a4 != v7 ? v7 : 0;
      v16 = a3[v15 >> 1];
      v17 = v15 + 1;
      if ( (v15 & 1) != 0 )
        break;
      if ( v17 == a4 )
      {
        v17 = 0;
        v18 = v16 & 0xF0;
        v19 = *a3;
LABEL_18:
        v16 = (v19 >> 4) | v18;
      }
      *v10++ = v16;
      v7 = v17 + 1;
      if ( !v14 )
      {
        v11 = (int)v25;
        goto LABEL_21;
      }
    }
    v17 &= -(a4 != v17);
    v19 = a3[v17 >> 1];
    v18 = 16 * a3[v15 >> 1];
    goto LABEL_18;
  }
LABEL_21:
  if ( v12 <= 1 )
  {
    if ( (v12 & 1) != 0 )
    {
      v24 = a4 != v7 ? v7 : 0;
      v22 = a3[v24 >> 1];
      if ( (v24 & 1) != 0 )
      {
        v23 = 16 * v22;
        goto LABEL_30;
      }
LABEL_29:
      v23 = v22 & 0xF0;
LABEL_30:
      *v10 = v23;
    }
  }
  else
  {
    v20 = (const unsigned __int8 *)(v12 >> 1);
    v27 = v12 >> 1;
    while ( 1 )
    {
      v21 = v11;
      v26 = v11;
      if ( v11 > (int)v20 )
      {
        v21 = (size_t)v20;
        v26 = (int)v20;
      }
      memcpy(v10, &v10[-v11], v21);
      v10 += v26;
      v20 = (const unsigned __int8 *)(v27 - v26);
      v27 -= v26;
      if ( !v27 )
        break;
      v11 *= 2;
    }
    if ( (v12 & 1) != 0 )
    {
      v22 = v10[-v11];
      goto LABEL_29;
    }
  }
}

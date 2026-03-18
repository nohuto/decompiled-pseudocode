/*
 * XREFs of ?vComputeSubspaces@@YGPAU_VERTEX_DATA@@KPAU1@@Z @ 0x1E7464
 * Callers:
 *     _EngDitherColor@16 @ 0x1E7B57 (_EngDitherColor@16.c)
 * Callees:
 *     <none>
 */

struct _VERTEX_DATA *__fastcall vComputeSubspaces(int a1, int *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // ebx
  bool v5; // cf
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // esi
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  int v21; // edi
  int v22; // edi
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v28; // [esp+Ch] [ebp-10h]
  int v29; // [esp+Ch] [ebp-10h]
  int v30; // [esp+Ch] [ebp-10h]
  int v31; // [esp+Ch] [ebp-10h]
  unsigned int v32; // [esp+10h] [ebp-Ch]
  int v33; // [esp+10h] [ebp-Ch]
  unsigned int v34; // [esp+18h] [ebp-4h]

  v2 = (unsigned __int8)a1;
  v3 = BYTE1(a1);
  v4 = BYTE2(a1);
  v28 = BYTE1(a1);
  v34 = BYTE2(a1);
  v5 = (unsigned __int8)a1 < BYTE2(a1);
  if ( (unsigned __int8)a1 < BYTE2(a1) )
  {
    v4 = (unsigned __int8)a1;
    v2 = BYTE2(a1);
    v34 = (unsigned __int8)a1;
    v5 = (unsigned __int8)a1 < BYTE2(a1);
  }
  v6 = v5 ? 4 : 0;
  if ( v4 > v3 )
  {
    v34 = v3;
    v3 = v4;
    v6 |= 2u;
    v28 = v4;
  }
  if ( v3 > v2 )
  {
    v7 = v3;
    v6 |= 1u;
    v3 = v2;
    v2 = v7;
    v28 = v3;
  }
  v8 = 16 * v6;
  v9 = (v2 + 1) >> 2;
  v10 = (v3 + 1) >> 2;
  v32 = (v34 + 1) >> 2;
  if ( v2 + v28 > 0x100 )
  {
    if ( v2 + v34 > 0x100 )
    {
      v29 = 2 * (64 - v9);
      if ( v29 )
      {
        *a2 = 2 * (64 - v9);
        a2[1] = (unsigned __int8)byte_25D317[v8];
        a2 += 2;
      }
      v11 = v10 - v32;
      v12 = v32 - 64 + v9;
      v13 = 64 - v12 - (v10 - v32) - v29;
      if ( v13 )
      {
        a2[1] = (unsigned __int8)byte_25D319[v8];
        *a2 = v13;
        a2 += 2;
      }
      if ( v11 )
      {
        *a2 = v11;
        a2[1] = (unsigned __int8)byte_25D31B[v8];
        a2 += 2;
      }
      if ( v12 )
      {
        v14 = (unsigned __int8)byte_25D31F[v8];
        *a2 = v12;
LABEL_43:
        a2[1] = v14;
        a2 += 2;
        return (struct _VERTEX_DATA *)a2;
      }
      return (struct _VERTEX_DATA *)a2;
    }
    v15 = v9 - v10;
    v30 = 2 * v32;
    v16 = v9 - 64 + v10;
    v17 = 64 - v16 - v15 - 2 * v32;
    if ( v17 )
    {
      *a2 = v17;
      a2[1] = (unsigned __int8)byte_25D313[v8];
      a2 += 2;
    }
    if ( v30 )
    {
      v18 = (unsigned __int8)byte_25D317[v8];
      *a2 = v30;
      a2[1] = v18;
      a2 += 2;
    }
    if ( v15 )
    {
      *a2 = v15;
      a2[1] = (unsigned __int8)byte_25D319[v8];
      a2 += 2;
    }
    if ( !v16 )
      return (struct _VERTEX_DATA *)a2;
    v14 = (unsigned __int8)byte_25D31B[v8];
LABEL_42:
    *a2 = v16;
    goto LABEL_43;
  }
  if ( v2 <= 0x80 )
  {
    v31 = 2 * (32 - v9);
    if ( v31 )
    {
      *a2 = 2 * (32 - v9);
      a2[1] = LOBYTE((&jSwapSubSpace)[v8 / 4]);
      a2 += 2;
    }
    v24 = 2 * (v9 - v10);
    if ( v24 )
    {
      v25 = (unsigned __int8)byte_25D311[v8];
      *a2 = v24;
      a2[1] = v25;
      a2 += 2;
    }
    v16 = 2 * v32;
    v26 = 64 - 2 * v32 - v24 - v31;
    if ( v26 )
    {
      *a2 = v26;
      a2[1] = (unsigned __int8)byte_25D313[v8];
      a2 += 2;
    }
    if ( !v16 )
      return (struct _VERTEX_DATA *)a2;
    v14 = (unsigned __int8)byte_25D317[v8];
    goto LABEL_42;
  }
  v19 = 2 * (64 - v10 - v9);
  if ( v19 )
  {
    *a2 = v19;
    a2[1] = (unsigned __int8)byte_25D311[v8];
    a2 += 2;
  }
  v20 = 2 * v9 - 64;
  v21 = 64 - v20 - 2 * v32;
  v33 = 2 * v32;
  v22 = v21 - v19;
  if ( v22 )
  {
    v23 = (unsigned __int8)byte_25D313[v8];
    *a2 = v22;
    a2[1] = v23;
    a2 += 2;
  }
  if ( v33 )
  {
    *a2 = v33;
    a2[1] = (unsigned __int8)byte_25D317[v8];
    a2 += 2;
  }
  if ( v20 )
  {
    v14 = (unsigned __int8)byte_25D319[v8];
    *a2 = v20;
    goto LABEL_43;
  }
  return (struct _VERTEX_DATA *)a2;
}

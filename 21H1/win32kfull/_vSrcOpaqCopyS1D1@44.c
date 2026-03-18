/*
 * XREFs of _vSrcOpaqCopyS1D1@44 @ 0x1EFF82
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall vSrcOpaqCopyS1D1(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        int a11)
{
  unsigned __int32 v11; // ebx
  unsigned __int32 v12; // edi
  unsigned int v13; // ecx
  unsigned int *v14; // edx
  unsigned int *v15; // esi
  unsigned int v16; // ecx
  char *v17; // ecx
  unsigned int result; // eax
  unsigned int v19; // ecx
  int i; // ebx
  int v21; // edi
  unsigned int v22; // eax
  unsigned int v23; // ecx
  char *v24; // ecx
  unsigned int v25; // ecx
  int k; // ebx
  int v27; // eax
  int v28; // edi
  int v29; // ecx
  char *v30; // ecx
  int j; // edi
  int v32; // eax
  int v33; // edi
  int v34; // ecx
  int v35; // [esp+Ch] [ebp-10h]
  int v36; // [esp+10h] [ebp-Ch]
  int v37; // [esp+14h] [ebp-8h]
  int v38; // [esp+18h] [ebp-4h]
  unsigned int v39; // [esp+28h] [ebp+Ch]
  unsigned int v40; // [esp+28h] [ebp+Ch]
  int v41; // [esp+2Ch] [ebp+10h]
  int v42; // [esp+2Ch] [ebp+10h]
  int v43; // [esp+2Ch] [ebp+10h]
  int v44; // [esp+30h] [ebp+14h]
  unsigned int *v45; // [esp+34h] [ebp+18h]
  int v46; // [esp+38h] [ebp+1Ch]
  unsigned int v47; // [esp+38h] [ebp+1Ch]
  int v48; // [esp+44h] [ebp+28h]
  int v49; // [esp+44h] [ebp+28h]
  int v50; // [esp+44h] [ebp+28h]
  int v51; // [esp+48h] [ebp+2Ch]
  int v52; // [esp+48h] [ebp+2Ch]
  int v53; // [esp+48h] [ebp+2Ch]

  v48 = a9 & 1;
  v51 = a10 & 1;
  v11 = -1;
  v38 = -1;
  v46 = a6 + a2 - a5;
  v35 = -1;
  v37 = a2 & 0x1F;
  v36 = v46 & 0x1F;
  v12 = -1;
  if ( (a2 & 0x1F) != 0 )
  {
    v12 = _byteswap_ulong(0xFFFFFFFF >> (a2 & 0x1F));
    v35 = v12;
  }
  if ( (v46 & 0x1F) != 0 )
  {
    v11 = _byteswap_ulong(-1 << (32 - (v46 & 0x1F)));
    v38 = v11;
  }
  v13 = (v46 >> 3) & 0xFFFFFFFC;
  v39 = (a2 >> 3) & 0xFFFFFFFC;
  v14 = (unsigned int *)(a1 + v39);
  v45 = (unsigned int *)(a4 + ((a5 >> 3) & 0xFFFFFFFC));
  v47 = v13 - v39;
  v44 = a1 + v39 + a8 * a3;
  v15 = v45;
  if ( v48 )
  {
    if ( !v51 )
    {
      if ( v39 == v13 )
      {
        v21 = v11 & v12;
        do
        {
          v22 = *v14;
          v14 = (unsigned int *)((char *)v14 + a3);
          result = v21 & v22;
          *v15 = result | ~v21 & *v15;
          v15 = (unsigned int *)((char *)v15 + a7);
        }
        while ( v14 != (unsigned int *)v44 );
      }
      else
      {
        v16 = v13 - v39;
        v41 = a3 - v47;
        do
        {
          v17 = (char *)v14 + v16;
          if ( v37 )
          {
            *v15 = v12 & *v14 | *v15 & ~v12;
            ++v15;
            ++v14;
          }
          result = (unsigned int)(v17 - (char *)v14 + 3) >> 2;
          v19 = v17 >= (char *)v14 ? result : 0;
          if ( v19 )
          {
            for ( i = 0; i != v19; ++i )
            {
              result = *v14++;
              *v15++ = result;
            }
            v11 = v38;
          }
          if ( v36 )
          {
            result = v11 & *v14;
            *v15 = result | *v15 & ~v11;
          }
          v14 = (unsigned int *)((char *)v14 + v41);
          v15 = (unsigned int *)((char *)v15 + a7 - v47);
          v16 = v47;
        }
        while ( v14 != (unsigned int *)v44 );
      }
      return result;
    }
    goto LABEL_38;
  }
  if ( !v51 )
  {
LABEL_38:
    v49 = (unsigned __int8)-(v51 != v48) | ((unsigned __int8)-(v51 != v48) << 8);
    v50 = (v49 << 16) | v49;
    v52 = (unsigned __int8)-(v51 != 0) | ((unsigned __int8)-(v51 != 0) << 8);
    v53 = (v52 << 16) | v52;
    if ( v39 == v13 )
    {
      v33 = v11 & v12;
      do
      {
        v34 = v33 & (v53 ^ v50 & *v14);
        v14 = (unsigned int *)((char *)v14 + a3);
        result = ~v33 & *v15;
        *v15 = result | v34;
        v15 = (unsigned int *)((char *)v15 + a7);
      }
      while ( v14 != (unsigned int *)v44 );
    }
    else
    {
      result = v13 - v39;
      v43 = a3 - v47;
      do
      {
        v30 = (char *)v14 + result;
        if ( v37 )
        {
          *v15 = *v15 & ~v12 | v12 & (v53 ^ v50 & *v14);
          ++v15;
          v30 = (char *)v14++ + result;
        }
        v40 = v30 >= (char *)v14 ? (unsigned int)(v30 - (char *)v14 + 3) >> 2 : 0;
        if ( v40 )
        {
          for ( j = 0; j != v40; ++j )
          {
            v32 = *v14++;
            *v15++ = v53 ^ v50 & v32;
          }
          v12 = v35;
          v11 = v38;
        }
        if ( v36 )
          *v15 = *v15 & ~v11 | v11 & (v53 ^ v50 & *v14);
        v14 = (unsigned int *)((char *)v14 + v43);
        v15 = (unsigned int *)((char *)v15 + a7 - v47);
        result = v47;
      }
      while ( v14 != (unsigned int *)v44 );
    }
    return result;
  }
  if ( v39 == v13 )
  {
    v28 = v11 & v12;
    do
    {
      v29 = ~*v14;
      v14 = (unsigned int *)((char *)v14 + a3);
      result = ~v28 & *v15;
      *v15 = result | v28 & v29;
      v15 = (unsigned int *)((char *)v15 + a7);
    }
    while ( v14 != (unsigned int *)v44 );
  }
  else
  {
    v23 = v13 - v39;
    v42 = a3 - v47;
    do
    {
      v24 = (char *)v14 + v23;
      if ( v37 )
      {
        *v15 = *v15 & ~v12 | v12 & ~*v14;
        ++v15;
        ++v14;
      }
      result = (unsigned int)(v24 - (char *)v14 + 3) >> 2;
      v25 = v24 >= (char *)v14 ? result : 0;
      if ( v25 )
      {
        for ( k = 0; k != v25; ++k )
        {
          v27 = *v14++;
          result = ~v27;
          *v15++ = result;
        }
        v11 = v38;
      }
      if ( v36 )
      {
        result = *v15 & ~v11;
        *v15 = result | v11 & ~*v14;
      }
      v14 = (unsigned int *)((char *)v14 + v42);
      v15 = (unsigned int *)((char *)v15 + a7 - v47);
      v23 = v47;
    }
    while ( v14 != (unsigned int *)v44 );
  }
  return result;
}

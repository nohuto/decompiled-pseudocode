/*
 * XREFs of _vSrcTranCopyS1D1@44 @ 0x1F0F42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vSrcTranCopyS1D1(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // ebx
  int v13; // ecx
  unsigned __int32 v14; // esi
  unsigned int v15; // ebx
  unsigned int v16; // eax
  char *v17; // ecx
  _DWORD *v18; // edx
  int result; // eax
  char *v20; // eax
  unsigned int v21; // eax
  bool v22; // zf
  unsigned __int32 v23; // edi
  int v24; // esi
  int v25; // eax
  int v26; // esi
  int v27; // eax
  char *v28; // eax
  unsigned int v29; // eax
  unsigned __int32 v30; // edi
  int v31; // esi
  int v32; // eax
  int v33; // esi
  int v34; // eax
  int v35; // [esp+Ch] [ebp-Ch]
  int v36; // [esp+10h] [ebp-8h]
  unsigned __int32 v37; // [esp+14h] [ebp-4h]
  int v38; // [esp+20h] [ebp+8h]
  int v39; // [esp+20h] [ebp+8h]
  int v40; // [esp+24h] [ebp+Ch]
  int v41; // [esp+28h] [ebp+10h]
  int v42; // [esp+28h] [ebp+10h]
  int v43; // [esp+30h] [ebp+18h]
  int v44; // [esp+34h] [ebp+1Ch]
  unsigned int v45; // [esp+38h] [ebp+20h]
  unsigned int v46; // [esp+38h] [ebp+20h]
  unsigned int v47; // [esp+38h] [ebp+20h]
  unsigned int v48; // [esp+38h] [ebp+20h]

  v36 = a2 & 0x1F;
  v12 = a6 + a2 - a5;
  v13 = ((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F;
  v14 = -1;
  v37 = -1;
  v35 = -1;
  v43 = v13;
  if ( (a2 & 0x1F) != 0 )
  {
    v14 = _byteswap_ulong(0xFFFFFFFF >> v36);
    v35 = v14;
  }
  if ( v13 )
    v37 = _byteswap_ulong(-1 << (32 - v13));
  v15 = (v12 >> 3) & 0xFFFFFFFC;
  v16 = (a2 >> 3) & 0xFFFFFFFC;
  v17 = (char *)(a1 + v16);
  v40 = v15 - v16;
  v18 = (_DWORD *)(a4 + ((a5 >> 3) & 0xFFFFFFFC));
  v44 = a1 + v16 + a8 * a3;
  if ( a9 )
  {
    if ( v16 == v15 )
    {
      v26 = v37 & v14;
      do
      {
        v27 = *(_DWORD *)v17;
        v17 += a3;
        result = v26 & v27;
        *v18 |= result;
        v18 = (_DWORD *)((char *)v18 + a7);
      }
      while ( v17 != (char *)v44 );
    }
    else
    {
      result = v15 - v16;
      v41 = a3 - v40;
      v38 = a7 - v40;
      do
      {
        v20 = &v17[result];
        v45 = (unsigned int)v20;
        if ( v36 )
        {
          *v18++ |= v14 & *(_DWORD *)v17;
          v17 += 4;
        }
        v21 = (unsigned int)(v20 - v17 + 3) >> 2;
        v22 = (v45 >= (unsigned int)v17 ? v21 : 0) == 0;
        v46 = v45 >= (unsigned int)v17 ? v21 : 0;
        v23 = v37;
        if ( !v22 )
        {
          v24 = 0;
          do
          {
            v25 = *(_DWORD *)v17;
            v17 += 4;
            *v18++ |= v25;
            ++v24;
          }
          while ( v24 != v46 );
          v14 = v35;
          v23 = v37;
        }
        if ( v43 )
          *v18 |= v23 & *(_DWORD *)v17;
        v17 += v41;
        v18 = (_DWORD *)((char *)v18 + v38);
        result = v40;
      }
      while ( v17 != (char *)v44 );
    }
  }
  else if ( v16 == v15 )
  {
    v33 = v37 & v14;
    do
    {
      v34 = *(_DWORD *)v17;
      v17 += a3;
      result = ~(v33 & v34);
      *v18 &= result;
      v18 = (_DWORD *)((char *)v18 + a7);
    }
    while ( v17 != (char *)v44 );
  }
  else
  {
    result = v15 - v16;
    v42 = a3 - v40;
    v39 = a7 - v40;
    do
    {
      v28 = &v17[result];
      v47 = (unsigned int)v28;
      if ( v36 )
      {
        *v18++ &= ~(v14 & *(_DWORD *)v17);
        v17 += 4;
      }
      v29 = (unsigned int)(v28 - v17 + 3) >> 2;
      v22 = (v47 >= (unsigned int)v17 ? v29 : 0) == 0;
      v48 = v47 >= (unsigned int)v17 ? v29 : 0;
      v30 = v37;
      if ( !v22 )
      {
        v31 = 0;
        do
        {
          v32 = *(_DWORD *)v17;
          v17 += 4;
          *v18++ &= ~v32;
          ++v31;
        }
        while ( v31 != v48 );
        v14 = v35;
        v30 = v37;
      }
      if ( v43 )
        *v18 &= ~(v30 & *(_DWORD *)v17);
      v17 += v42;
      v18 = (_DWORD *)((char *)v18 + v39);
      result = v40;
    }
    while ( v17 != (char *)v44 );
  }
  return result;
}

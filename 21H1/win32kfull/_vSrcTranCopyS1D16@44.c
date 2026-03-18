/*
 * XREFs of _vSrcTranCopyS1D16@44 @ 0x1F0E0A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vSrcTranCopyS1D16(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int16 a9,
        int a10,
        int a11)
{
  int v11; // ebx
  char *v12; // edx
  int v13; // edi
  _BYTE *v14; // esi
  char v15; // al
  char *v16; // edi
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // bx
  int result; // eax
  char *v20; // edi
  int v21; // [esp+Ch] [ebp-4h]
  char *v22; // [esp+18h] [ebp+8h]
  int v23; // [esp+20h] [ebp+10h]
  int v24; // [esp+24h] [ebp+14h]
  int v25; // [esp+28h] [ebp+18h]
  int v26; // [esp+2Ch] [ebp+1Ch]
  char *v27; // [esp+30h] [ebp+20h]

  v11 = a6 - a5;
  v12 = (char *)(a4 + 2 * a5);
  v26 = v11;
  v25 = a7 - 2 * v11;
  v13 = a2 & 7;
  v14 = (_BYTE *)(a1 + (a2 >> 3));
  v23 = a3 - ((v13 + v11 + 7) >> 3);
  v21 = v13;
  v24 = 8 - v13;
  v27 = &v12[a8 * a7];
  if ( v11 < 8 - v13 )
    v24 = v11;
  do
  {
    v22 = &v12[2 * v11];
    if ( v13 )
    {
      v15 = *v14 << v13;
      v16 = &v12[2 * v24];
      do
      {
        v17 = a9;
        if ( v15 < 0 )
          *(_WORD *)v12 = a9;
        v12 += 2;
        v15 *= 2;
      }
      while ( v12 != v16 );
      ++v14;
    }
    else
    {
      v17 = a9;
    }
    v18 = v17;
    result = v17;
    v20 = &v12[(v22 - v12) & 0xFFFFFFF0];
    while ( v12 != v20 )
    {
      LOBYTE(result) = *v14;
      if ( (char)*v14 < 0 )
        *(_WORD *)v12 = v18;
      if ( (result & 0x40) != 0 )
        *((_WORD *)v12 + 1) = v18;
      if ( (result & 0x20) != 0 )
        *((_WORD *)v12 + 2) = v17;
      if ( (result & 0x10) != 0 )
        *((_WORD *)v12 + 3) = v17;
      if ( (result & 8) != 0 )
        *((_WORD *)v12 + 4) = v17;
      if ( (result & 4) != 0 )
        *((_WORD *)v12 + 5) = v17;
      if ( (result & 2) != 0 )
        *((_WORD *)v12 + 6) = v17;
      if ( (result & 1) != 0 )
        *((_WORD *)v12 + 7) = v17;
      v18 = v17;
      ++v14;
      v12 += 16;
    }
    if ( v12 != v22 )
    {
      LOBYTE(result) = *v14++;
      do
      {
        if ( (result & 0x80u) != 0 )
          *(_WORD *)v12 = v17;
        v12 += 2;
        LOBYTE(result) = 2 * result;
      }
      while ( v12 != v22 );
    }
    v12 += v25;
    v14 += v23;
    v11 = v26;
    v13 = v21;
  }
  while ( v12 != v27 );
  return result;
}

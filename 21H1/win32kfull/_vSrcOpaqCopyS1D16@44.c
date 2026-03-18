/*
 * XREFs of _vSrcOpaqCopyS1D16@44 @ 0x1EFE03
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vSrcOpaqCopyS1D16(
        int a1,
        int a2,
        int a3,
        _WORD *a4,
        int a5,
        int a6,
        _WORD *a7,
        int a8,
        __int16 a9,
        __int16 a10,
        int a11)
{
  int v11; // ebx
  _WORD *v12; // edx
  int v13; // edi
  unsigned __int8 *v14; // esi
  int result; // eax
  unsigned __int8 v16; // bl
  _WORD *v17; // ecx
  unsigned int v18; // eax
  _WORD *v19; // edi
  unsigned int v20; // ecx
  unsigned __int8 v21; // cl
  _WORD *v22; // edi
  unsigned int v23; // eax
  int v24; // [esp+Ch] [ebp-4h]
  int v25; // [esp+18h] [ebp+8h]

  v11 = a6 - a5;
  v12 = &a4[a5];
  a6 = v11;
  a4 = &a7[-v11];
  v13 = a2 & 7;
  a7 = (_WORD *)((char *)v12 + a8 * (_DWORD)a7);
  v14 = (unsigned __int8 *)(a1 + (a2 >> 3));
  a3 -= (v13 + v11 + 7) >> 3;
  v24 = v13;
  v25 = 8 - v13;
  if ( v11 < 8 - v13 )
    v25 = v11;
  LOWORD(a2) = a10;
  HIWORD(a2) = a9;
  do
  {
    result = (int)&v12[v11];
    a5 = result;
    if ( v13 )
    {
      v16 = *v14++ << v13;
      v17 = &v12[v25];
      do
      {
        v18 = v16;
        v16 *= 2;
        *v12++ = *(_WORD *)((char *)&a2 + ((v18 >> 6) & 2));
      }
      while ( v12 != v17 );
      v11 = a6;
      result = a5;
    }
    v19 = (_WORD *)((char *)v12 + ((result - (_DWORD)v12) & 0xFFFFFFF0));
    if ( v12 != v19 )
    {
      do
      {
        v20 = *v14;
        *v12 = *(_WORD *)((char *)&a2 + ((v20 >> 6) & 2));
        v12[1] = *(_WORD *)((char *)&a2 + ((v20 >> 5) & 2));
        v12[2] = *(_WORD *)((char *)&a2 + ((v20 >> 4) & 2));
        v12[3] = *(_WORD *)((char *)&a2 + ((v20 >> 3) & 2));
        v12[4] = *(_WORD *)((char *)&a2 + ((v20 >> 2) & 2));
        v12[5] = *(_WORD *)((char *)&a2 + ((v20 >> 1) & 2));
        ++v14;
        v12[6] = *(_WORD *)((char *)&a2 + (v20 & 2));
        v12[7] = *((_WORD *)&a2 + (v20 & 1));
        v12 += 8;
      }
      while ( v12 != v19 );
      result = a5;
    }
    if ( v12 != (_WORD *)result )
    {
      v21 = *v14++;
      v22 = (_WORD *)a5;
      do
      {
        v23 = v21;
        v21 *= 2;
        result = (v23 >> 6) & 2;
        LOWORD(result) = *(_WORD *)((char *)&a2 + result);
        *v12++ = result;
      }
      while ( v12 != v22 );
    }
    v12 = (_WORD *)((char *)v12 + (_DWORD)a4);
    v14 += a3;
    v13 = v24;
  }
  while ( v12 != a7 );
  return result;
}

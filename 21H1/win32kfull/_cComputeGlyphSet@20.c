/*
 * XREFs of _cComputeGlyphSet@20 @ 0xDFE5A
 * Callers:
 *     _EngComputeGlyphSet@12 @ 0xDFC3C (_EngComputeGlyphSet@12.c)
 *     _cUnicodeRangesSupported@20 @ 0xDFCB6 (_cUnicodeRangesSupported@20.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall cComputeGlyphSet(int a1, int a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v5; // esi
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  char *v10; // ecx
  unsigned int v11; // edx
  unsigned __int16 v12; // ax
  _DWORD *v13; // eax
  bool v14; // zf
  int v15; // eax
  unsigned __int16 v16; // ax
  _DWORD *v17; // esi
  unsigned __int8 *v18; // edi
  unsigned int v19; // ecx
  int v20; // eax
  unsigned __int16 v22; // [esp+10h] [ebp-28h]
  int v23; // [esp+14h] [ebp-24h]
  unsigned int v24; // [esp+14h] [ebp-24h]
  _DWORD *v26; // [esp+20h] [ebp-18h]
  char *v27; // [esp+24h] [ebp-14h]
  unsigned int v29; // [esp+2Ch] [ebp-Ch]
  unsigned __int8 *v30; // [esp+2Ch] [ebp-Ch]
  unsigned int v31; // [esp+30h] [ebp-8h]
  _DWORD *v32; // [esp+34h] [ebp-4h]

  v5 = a5;
  v32 = 0;
  v26 = 0;
  v6 = a3;
  if ( a5 )
  {
    a5[3] = a4;
    a5[2] = 0;
    v7 = a3 + 2 * (a4 + 2);
    *a5 = v7 * 4;
    v26 = &a5[v7];
    a5[1] = 2 * (a3 == 256) + 2;
    v32 = &a5[2 * a4 + 4];
  }
  v8 = 0;
  v9 = 0;
  v29 = 0;
  v31 = 0;
  if ( a3 )
  {
    v10 = (char *)a5 + 18;
    v27 = (char *)a5 + 18;
    do
    {
      v11 = v8 + 1;
      if ( v8 + 1 < v6 )
      {
        do
        {
          if ( *(unsigned __int16 *)(a1 + 2 * v11) - *(unsigned __int16 *)(a1 + 2 * v11 - 2) > 1 )
            break;
          ++v11;
        }
        while ( v11 < v6 );
        v9 = v31;
        v10 = v27;
        v8 = v29;
      }
      if ( v5 )
      {
        if ( v9 < a4 )
        {
          *((_WORD *)v10 - 1) = *(_WORD *)(a1 + 2 * v8);
          v12 = *(_WORD *)(a1 + 2 * v11 - 2) - *(_WORD *)(a1 + 2 * v29) + 1;
          *(_WORD *)v10 = v12;
          v23 = v12;
          v22 = v12;
          v5 = a5;
          v13 = &v32[v12];
          *(_DWORD *)(v10 + 2) = v32;
          v6 = a3;
          if ( v13 <= v26 )
          {
            v30 = (unsigned __int8 *)(a2 + v29);
            v9 = v31;
            v15 = v13 >= v32 ? v23 : 0;
            v14 = v15 == 0;
            v24 = v15;
            v16 = v22;
            if ( !v14 )
            {
              v17 = v32;
              v18 = v30;
              v19 = 0;
              do
              {
                v20 = *v18++;
                *v17++ = v20;
                ++v19;
              }
              while ( v19 < v24 );
              v10 = v27;
              v6 = a3;
              v9 = v31;
              v32 = v17;
              v16 = *(_WORD *)v27;
              v5 = a5;
            }
            v5[2] += v16;
          }
        }
      }
      ++v9;
      v10 += 8;
      v31 = v9;
      v8 = v11;
      v27 = v10;
      v29 = v11;
    }
    while ( v11 < v6 );
  }
  return v9;
}

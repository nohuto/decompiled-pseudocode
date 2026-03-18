/*
 * XREFs of _OutputAATo8BPP_K_B332 @ 0x1C0CF0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

_BYTE *__cdecl OutputAATo8BPP_K_B332(
        int a1,
        int a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8)
{
  _BYTE *result; // eax
  unsigned __int8 *v9; // edx
  int v10; // ebx
  bool v12; // zf
  unsigned __int16 *v13; // ecx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // edi
  char v18; // al
  unsigned int v19; // edi
  unsigned int v20; // ecx
  _BYTE *v21; // ecx
  _DWORD v22[6]; // [esp+Ch] [ebp-48h] BYREF
  unsigned __int16 *v23; // [esp+24h] [ebp-30h]
  unsigned int v24; // [esp+28h] [ebp-2Ch]
  unsigned int v25; // [esp+2Ch] [ebp-28h]
  unsigned int v26; // [esp+30h] [ebp-24h]
  unsigned int v27; // [esp+34h] [ebp-20h]
  _BYTE *v28; // [esp+38h] [ebp-1Ch]
  unsigned int v29; // [esp+3Ch] [ebp-18h]
  unsigned int v30; // [esp+40h] [ebp-14h]
  unsigned int v31; // [esp+44h] [ebp-10h]
  unsigned int v32; // [esp+48h] [ebp-Ch]
  unsigned int v33; // [esp+4Ch] [ebp-8h]

  result = a4;
  v9 = (unsigned __int8 *)(a2 + 4);
  v10 = a5;
  v28 = a4;
  qmemcpy(v22, (const void *)(a5 - 24), sizeof(v22));
  if ( a2 + 4 < a3 )
  {
    do
    {
      v12 = v9[3] == 0;
      v13 = a6;
      v23 = a6;
      if ( !v12 )
      {
        v14 = v9[1];
        v30 = *(_DWORD *)(v10 + 4 * v9[2] + 2048);
        v25 = v30;
        v31 = *(_DWORD *)(v10 + 4 * v14 + 1024);
        v27 = v31;
        v15 = *(_DWORD *)(v10 + 4 * *v9);
        v33 = v15;
        v32 = v15;
        v16 = (v30 >= v31) | (*(&v30 + (v30 >= v31)) < v15 ? 0 : 2);
        v29 = a6[2];
        v17 = *(&v30 + v16);
        v18 = BYTE2(v22[3]);
        v19 = v17 >> 21;
        if ( v19 < v29 )
        {
          v26 = a6[1];
          if ( v19 < v26 )
          {
            v24 = *a6;
            if ( v19 < v24 )
            {
              v20 = v25 - v29;
              v29 -= v22[2];
              v29 >>= 12;
              v18 = ((v24 - v22[0]) >> 12) & ((v15 - v24) >> 12) & 3 | v29 & (v20 >> 12) & 0xE0 | ((v26 - v22[1]) >> 12) & ((v27 - v26) >> 12) & 0x1C;
            }
          }
        }
        v21 = v28;
        v10 = a5;
        *v28 = v18;
        result = v21;
        v13 = v23;
      }
      ++result;
      a6 += 3;
      v28 = result;
      if ( (unsigned int)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)v13 + a8 + 6);
      v9 += 4;
    }
    while ( (unsigned int)v9 < a3 );
  }
  return result;
}

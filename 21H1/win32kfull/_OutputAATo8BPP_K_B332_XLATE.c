/*
 * XREFs of _OutputAATo8BPP_K_B332_XLATE @ 0x1C0E26
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __cdecl OutputAATo8BPP_K_B332_XLATE(
        int a1,
        int a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8,
        int a9)
{
  _BYTE *v9; // edx
  int result; // eax
  int v11; // ebx
  unsigned __int8 *v12; // esi
  bool v14; // zf
  unsigned __int16 *v15; // ecx
  int v16; // ecx
  unsigned int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // ecx
  _DWORD v21[6]; // [esp+Ch] [ebp-48h] BYREF
  unsigned __int16 *v22; // [esp+24h] [ebp-30h]
  unsigned int v23; // [esp+28h] [ebp-2Ch]
  unsigned int v24; // [esp+2Ch] [ebp-28h]
  _BYTE *v25; // [esp+30h] [ebp-24h]
  unsigned int v26; // [esp+34h] [ebp-20h]
  unsigned int v27; // [esp+38h] [ebp-1Ch]
  char v28; // [esp+3Fh] [ebp-15h]
  unsigned int v29; // [esp+40h] [ebp-14h]
  unsigned int v30; // [esp+44h] [ebp-10h]
  unsigned int v31; // [esp+48h] [ebp-Ch]
  unsigned int v32; // [esp+4Ch] [ebp-8h]

  v9 = a4;
  result = a9;
  v11 = a5;
  v25 = a4;
  qmemcpy(v21, (const void *)(a5 - 24), sizeof(v21));
  v12 = (unsigned __int8 *)(a2 + 4);
  if ( a2 + 4 < a3 )
  {
    do
    {
      v14 = v12[3] == 0;
      v15 = a6;
      v22 = a6;
      if ( !v14 )
      {
        v16 = v12[1];
        v29 = *(_DWORD *)(v11 + 4 * v12[2] + 2048);
        v23 = v29;
        v30 = *(_DWORD *)(v11 + 4 * v16 + 1024);
        v27 = v30;
        v17 = *(_DWORD *)(v11 + 4 * *v12);
        v32 = v17;
        v31 = v17;
        v18 = *(&v29 + ((v29 >= v30) | (*(&v29 + (v29 >= v30)) < v17 ? 0 : 2)));
        v26 = a6[2];
        v19 = v18 >> 21;
        v28 = BYTE2(v21[3]);
        if ( v19 < v26 )
        {
          v24 = a6[1];
          if ( v19 < v24 )
          {
            v20 = *a6;
            if ( v19 < v20 )
            {
              v27 -= v24;
              v28 = *(_BYTE *)((((v23 - v26) & (v26 - v21[2]) & 0xE0000 | v27 & (v24 - v21[1]) & 0x1C000 | (unsigned __int16)(v20 - LOWORD(v21[0])) & (unsigned __int16)(v17 - v20) & 0x3000) >> 12)
                             + a9);
            }
          }
        }
        v9 = v25;
        v15 = v22;
        *v25 = v28;
        v11 = a5;
      }
      ++v9;
      a6 += 3;
      v25 = v9;
      if ( (unsigned int)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)v15 + a8 + 6);
      v12 += 4;
    }
    while ( (unsigned int)v12 < a3 );
  }
  return result;
}

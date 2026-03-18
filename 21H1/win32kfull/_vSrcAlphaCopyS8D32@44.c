/*
 * XREFs of _vSrcAlphaCopyS8D32@44 @ 0xB5A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vSrcAlphaCopyS8D32(
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
  int result; // eax
  int v12; // edx
  _BYTE *v13; // ebx
  unsigned int *v14; // ecx
  int v15; // edi
  unsigned int *v16; // eax
  unsigned __int8 *v17; // edx
  unsigned int v18; // eax
  _BYTE *v19; // esi
  unsigned int *v20; // ebx
  unsigned int v21; // ecx
  unsigned int v22; // edi
  int v23; // [esp+10h] [ebp+8h]
  unsigned int *v24; // [esp+14h] [ebp+Ch]
  unsigned int v25; // [esp+1Ch] [ebp+14h]
  int v26; // [esp+20h] [ebp+18h]
  unsigned int v27; // [esp+24h] [ebp+1Ch]
  unsigned int v28; // [esp+2Ch] [ebp+24h]

  result = a4;
  v12 = a6 - a5;
  v13 = (_BYTE *)(a2 + a1);
  v14 = (unsigned int *)(a4 + 4 * a5);
  v15 = a8;
  v23 = a2 + a1;
  v24 = v14;
  v26 = a8;
  if ( a8 )
  {
    v16 = &v14[v12];
    v25 = (unsigned int)(4 * v12) >> 2;
    v17 = (unsigned __int8 *)off_266024;
    v27 = (unsigned int)v16;
    do
    {
      v18 = 0;
      v19 = v13;
      v20 = v14;
      v21 = v27 >= (unsigned int)v14 ? v25 : 0;
      v28 = v21;
      if ( v21 )
      {
        do
        {
          v22 = (unsigned __int8)*v19;
          if ( *v19 )
          {
            if ( v22 >= 0x72 )
            {
              *v20 = 0xFFFFFF;
            }
            else
            {
              _mm_lfence();
              v21 = v28;
              *v20 = (unsigned int)(&alAlpha_255)[*((unsigned __int8 *)off_266024 + 4 * v22 + 2)] | (((unsigned int)(&alAlpha_255)[*((unsigned __int8 *)off_266024 + 4 * v22 + 1)] | ((_DWORD)(&alAlpha_255)[v17[4 * v22]] << 8)) << 8);
              v17 = (unsigned __int8 *)off_266024;
            }
          }
          ++v18;
          ++v19;
          ++v20;
        }
        while ( v18 < v21 );
        v15 = v26;
      }
      --v15;
      result = a7;
      v14 = (unsigned int *)((char *)v24 + a7);
      v13 = (_BYTE *)(a3 + v23);
      v27 += a7;
      v26 = v15;
      v23 += a3;
      v24 = (unsigned int *)((char *)v24 + a7);
    }
    while ( v15 );
  }
  return result;
}

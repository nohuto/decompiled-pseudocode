/*
 * XREFs of _draw_clrt_nf_ntb_o_to_temp_start@28 @ 0x55DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 *__stdcall draw_clrt_nf_ntb_o_to_temp_start(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // edx
  _DWORD *v8; // ecx
  _DWORD *v9; // edi
  unsigned __int8 *result; // eax
  int v11; // eax
  int v12; // ecx
  unsigned __int8 *v13; // edi
  int v14; // ebx
  unsigned __int8 v15; // cl
  bool v16; // zf
  unsigned __int8 *v17; // esi
  unsigned __int8 *v18; // edx
  unsigned int v19; // edx
  int v20; // ecx
  int v21; // esi
  int v22; // [esp+Ch] [ebp-18h]
  int v23; // [esp+10h] [ebp-14h]
  _DWORD *v24; // [esp+18h] [ebp-Ch]
  unsigned __int8 *v25; // [esp+1Ch] [ebp-8h]
  unsigned int v26; // [esp+20h] [ebp-4h]
  unsigned int v27; // [esp+2Ch] [ebp+8h]

  v7 = a5;
  v8 = (_DWORD *)(a1 + 12);
  v24 = (_DWORD *)(a1 + 12);
  do
  {
    v9 = *(_DWORD **)*(v8 - 2);
    result = (unsigned __int8 *)v9[3];
    v25 = result;
    if ( !result )
      goto LABEL_10;
    v11 = *(v8 - 1) + v7 * (*v8 + v9[1] - a7) - a4;
    v12 = v9[2];
    result = (unsigned __int8 *)(*v9 + a3 + v11);
    v13 = (unsigned __int8 *)(v9 + 4);
    v22 = v12;
    v23 = v7 - v12;
    do
    {
      v14 = v12;
      do
      {
        v15 = *v13;
        if ( !*result )
          goto LABEL_6;
        if ( v15 )
        {
          v17 = (unsigned __int8 *)off_266024 + 4 * v15;
          v18 = (unsigned __int8 *)off_266024 + 4 * *result;
          v27 = *v18 + *v17;
          v26 = v17[1] + v18[1];
          v19 = v17[2] + v18[2];
          if ( v27 > 6 )
            v27 = 6;
          v20 = v26;
          if ( v26 > 6 )
            v20 = 6;
          if ( v19 > 6 )
            v21 = 6;
          else
            v21 = v19;
          v15 = *((_BYTE *)&gajStorage1 + 49 * v27 + 7 * v20 + v21);
LABEL_6:
          *result = v15;
        }
        ++result;
        ++v13;
        --v14;
      }
      while ( v14 );
      result += v23;
      v16 = v25-- == (unsigned __int8 *)1;
      v12 = v22;
    }
    while ( !v16 );
    v8 = v24;
    v7 = a5;
LABEL_10:
    v8 += 4;
    v16 = a2-- == 1;
    v24 = v8;
  }
  while ( !v16 );
  return result;
}

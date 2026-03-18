/*
 * XREFs of ?pxrlStrRead04AND@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x229692
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__stdcall pxrlStrRead04AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  struct _STRRUN *v8; // edx
  int v9; // esi
  int v10; // edi
  unsigned __int8 *v11; // ebx
  int v12; // ecx
  int v13; // eax
  int *v14; // edx
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // ecx
  unsigned __int8 *v18; // eax
  ULONG v19; // eax
  int v20; // ecx
  _DWORD *v21; // eax
  int v22; // ecx
  int *v24; // [esp+Ch] [ebp-4h]
  ULONG v25; // [esp+Ch] [ebp-4h]
  unsigned int v26; // [esp+18h] [ebp+8h]
  struct _STRDDA *v27; // [esp+18h] [ebp+8h]
  unsigned __int8 *v28; // [esp+20h] [ebp+10h]
  struct _XLATEOBJ *v29; // [esp+28h] [ebp+18h]

  v8 = a2;
  v9 = a6 & 7;
  v10 = 0;
  v11 = &a3[4 * (a6 >> 3)];
  v12 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v12;
  v13 = a6;
  if ( a6 < a7 )
  {
    if ( a5 )
    {
      v18 = *(unsigned __int8 **)v11;
      v28 = *(unsigned __int8 **)v11;
      v27 = (struct _STRDDA *)((char *)a1 + 28);
      while ( 1 )
      {
        v19 = a5->pulXlate[((unsigned int)v18 & dword_252A40[v9]) >> dword_252A20[v9]];
        v25 = v19;
        v20 = *(_DWORD *)v27;
        v27 = (struct _STRDDA *)((char *)v27 + 4);
        if ( v20 )
        {
          v21 = (_DWORD *)((char *)a2 + 4 * v10 + 16);
          v10 += v20;
          do
          {
            *v21++ &= v25;
            --v20;
          }
          while ( v20 );
          v8 = a2;
        }
        else
        {
          v8 = a2;
          *((_DWORD *)a2 + v10 + 4) &= v19;
        }
        v22 = v9 + 1;
        if ( ++a6 >= a7 )
          break;
        if ( (v22 & 8) != 0 )
        {
          v11 += 4;
          v18 = *(unsigned __int8 **)v11;
          v28 = *(unsigned __int8 **)v11;
        }
        else
        {
          v18 = v28;
        }
        v9 = (v22 & 8) == 0 ? v22 : 0;
      }
    }
    else
    {
      v14 = (int *)((char *)a1 + 28);
      v29 = *(struct _XLATEOBJ **)v11;
      while ( 1 )
      {
        v26 = ((unsigned int)v29 & dword_252A40[v9]) >> dword_252A20[v9];
        v15 = *v14;
        v24 = v14 + 1;
        v8 = a2;
        if ( v15 )
        {
          v16 = (_DWORD *)((char *)a2 + 4 * v10 + 16);
          v10 += v15;
          do
          {
            *v16++ &= v26;
            --v15;
          }
          while ( v15 );
          v8 = a2;
          v13 = a6;
        }
        else
        {
          *((_DWORD *)a2 + v10 + 4) &= v26;
        }
        ++v13;
        v17 = v9 + 1;
        a6 = v13;
        if ( v13 >= a7 )
          break;
        if ( (v17 & 8) != 0 )
        {
          v11 += 4;
          v29 = *(struct _XLATEOBJ **)v11;
        }
        v14 = v24;
        v9 = (v17 & 8) == 0 ? v17 : 0;
      }
    }
  }
  return (struct _STRRUN *)((char *)v8 + 4 * v10 + 16);
}

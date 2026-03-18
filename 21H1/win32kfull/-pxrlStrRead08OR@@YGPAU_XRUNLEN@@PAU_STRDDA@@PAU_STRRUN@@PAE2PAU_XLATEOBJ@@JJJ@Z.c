/*
 * XREFs of ?pxrlStrRead08OR@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x229A3B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__stdcall pxrlStrRead08OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v8; // edx
  struct _STRRUN *v9; // ebx
  int v10; // esi
  int v11; // edi
  int *v12; // eax
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx
  int *v16; // ecx
  int v17; // edi
  char *v18; // edi
  int v19; // ebx
  char *v20; // edi
  int v22; // [esp+28h] [ebp+1Ch]
  int v23; // [esp+2Ch] [ebp+20h]
  int v24; // [esp+2Ch] [ebp+20h]

  v8 = &a3[a6];
  v9 = a2;
  v10 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  if ( a6 != a7 )
  {
    if ( a5 )
    {
      v16 = (int *)((char *)a1 + 28);
      v17 = a7 - a6;
      v24 = a7 - a6;
      do
      {
        if ( *v16 )
        {
          v18 = (char *)v9 + 16;
          v19 = *v16;
          v20 = &v18[4 * v10];
          v22 = *v16 + v10;
          do
          {
            *(_DWORD *)v20 |= a5->pulXlate[*v8];
            v20 += 4;
            --v19;
          }
          while ( v19 );
          v10 = v22;
          v17 = v24;
          v9 = a2;
        }
        else
        {
          *((_DWORD *)v9 + v10 + 4) |= a5->pulXlate[*v8];
        }
        ++v16;
        ++v8;
        v24 = --v17;
      }
      while ( v17 );
    }
    else
    {
      v11 = a7 - a6;
      v12 = (int *)((char *)a1 + 28);
      do
      {
        v13 = *v12;
        v23 = (int)(v12 + 1);
        if ( *v12 )
        {
          v14 = (int)v9 + 4 * v10 + 16;
          v10 += v13;
          v15 = (_DWORD *)v14;
          do
          {
            *v15++ |= *v8;
            --v13;
          }
          while ( v13 );
          v9 = a2;
        }
        else
        {
          *((_DWORD *)v9 + v10 + 4) |= *v8;
        }
        v12 = (int *)v23;
        ++v8;
        --v11;
      }
      while ( v11 );
    }
  }
  return (struct _STRRUN *)((char *)v9 + 4 * v10 + 16);
}

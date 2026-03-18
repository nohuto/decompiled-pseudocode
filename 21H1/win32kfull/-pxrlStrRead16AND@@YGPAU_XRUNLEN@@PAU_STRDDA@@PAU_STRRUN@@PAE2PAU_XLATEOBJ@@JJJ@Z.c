/*
 * XREFs of ?pxrlStrRead16AND@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x229CF7
 * Callers:
 *     <none>
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

struct _XRUNLEN *__stdcall pxrlStrRead16AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  struct _STRRUN *v8; // ebx
  unsigned __int8 *v9; // ecx
  int v10; // esi
  struct _STRRUN *v11; // edx
  int v12; // edi
  int v13; // edx
  int v14; // eax
  _DWORD *v15; // ebx
  ULONG v16; // edx
  int v17; // eax
  _DWORD *v18; // ecx
  struct _STRRUN *v20; // [esp+18h] [ebp+Ch]
  unsigned __int8 *v21; // [esp+1Ch] [ebp+10h]
  int *v22; // [esp+28h] [ebp+1Ch]
  int v23; // [esp+28h] [ebp+1Ch]

  v8 = a2;
  v9 = &a3[2 * a6];
  v10 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  v21 = v9;
  if ( a6 != a7 )
  {
    v11 = (struct _STRDDA *)((char *)a1 + 28);
    v12 = a7 - a6;
    if ( pxlo )
    {
      do
      {
        v23 = *(_DWORD *)v11;
        v20 = (struct _STRRUN *)((char *)v11 + 4);
        v16 = XLATEOBJ_iXlate(pxlo, *(unsigned __int16 *)v9);
        v17 = v23;
        if ( v23 )
        {
          v18 = (_DWORD *)((char *)v8 + 4 * v10 + 16);
          v10 += v23;
          do
          {
            *v18++ &= v16;
            --v17;
          }
          while ( v17 );
        }
        else
        {
          *((_DWORD *)v8 + v10 + 4) &= v16;
        }
        v11 = v20;
        v9 = v21 + 2;
        v21 += 2;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      v22 = (int *)((char *)a1 + 28);
      do
      {
        v13 = *v22++;
        if ( v13 )
        {
          v14 = (int)v8 + 4 * v10 + 16;
          v10 += v13;
          v15 = (_DWORD *)v14;
          do
          {
            *v15++ &= *(unsigned __int16 *)v9;
            --v13;
          }
          while ( v13 );
          v8 = a2;
        }
        else
        {
          *((_DWORD *)v8 + v10 + 4) &= *(unsigned __int16 *)v9;
        }
        v9 += 2;
        --v12;
      }
      while ( v12 );
    }
  }
  return (struct _STRRUN *)((char *)v8 + 4 * v10 + 16);
}

/*
 * XREFs of ?pxrlStrRead24OR@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x22A19B
 * Callers:
 *     <none>
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

struct _XRUNLEN *__stdcall pxrlStrRead24OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  struct _STRRUN *v8; // ecx
  int v9; // esi
  unsigned __int8 *v10; // edi
  unsigned __int8 *v11; // edx
  int v12; // ebx
  int v13; // eax
  _DWORD *v14; // edx
  ULONG v15; // edx
  int v16; // eax
  _DWORD *v17; // edx
  ULONG iColor; // [esp+Ch] [ebp-4h]
  unsigned __int8 *v20; // [esp+20h] [ebp+10h]
  int v21; // [esp+2Ch] [ebp+1Ch]
  int v22; // [esp+2Ch] [ebp+1Ch]

  v8 = a2;
  v9 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  v10 = &a3[3 * a6];
  HIBYTE(iColor) = 0;
  if ( a6 != a7 )
  {
    v11 = (unsigned __int8 *)a1 + 28;
    v12 = a7 - a6;
    if ( pxlo )
    {
      do
      {
        v22 = *(_DWORD *)v11;
        LOWORD(iColor) = *(_WORD *)v10;
        BYTE2(iColor) = v10[2];
        v20 = v11 + 4;
        v15 = XLATEOBJ_iXlate(pxlo, iColor);
        v16 = v22;
        iColor = v15;
        if ( v22 )
        {
          v17 = (_DWORD *)((char *)a2 + 4 * v9 + 16);
          v9 += v22;
          do
          {
            *v17++ |= iColor;
            --v16;
          }
          while ( v16 );
          v8 = a2;
        }
        else
        {
          v8 = a2;
          *((_DWORD *)a2 + v9 + 4) |= v15;
        }
        v11 = v20;
        v10 += 3;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      do
      {
        LOWORD(iColor) = *(_WORD *)v10;
        BYTE2(iColor) = v10[2];
        v13 = *(_DWORD *)v11;
        v11 += 4;
        v21 = (int)v11;
        if ( v13 )
        {
          v14 = (_DWORD *)((char *)v8 + 4 * v9 + 16);
          v9 += v13;
          do
          {
            *v14++ |= iColor;
            --v13;
          }
          while ( v13 );
          v8 = a2;
          v11 = (unsigned __int8 *)v21;
        }
        else
        {
          *((_DWORD *)v8 + v9 + 4) |= iColor;
        }
        v10 += 3;
        --v12;
      }
      while ( v12 );
    }
  }
  return (struct _STRRUN *)((char *)v8 + 4 * v9 + 16);
}

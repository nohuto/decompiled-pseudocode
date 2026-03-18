/*
 * XREFs of ?pxrlStrRead32OR@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x22A53E
 * Callers:
 *     <none>
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

struct _XRUNLEN *__stdcall pxrlStrRead32OR(
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
  ULONG *v9; // ebx
  int v10; // esi
  int v11; // edi
  XLATEOBJ *v12; // eax
  ULONG iUniq; // edx
  int v14; // eax
  _DWORD *v15; // ecx
  struct _STRDDA *v16; // edx
  int v17; // edi
  ULONG v18; // edx
  int v19; // eax
  _DWORD *v20; // edx
  struct _STRDDA *v22; // [esp+14h] [ebp+8h]
  ULONG v23; // [esp+1Ch] [ebp+10h]
  XLATEOBJ *pxloa; // [esp+24h] [ebp+18h]
  int v25; // [esp+28h] [ebp+1Ch]

  v8 = a2;
  v9 = (ULONG *)&a3[4 * a6];
  v10 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  if ( a6 != a7 )
  {
    if ( pxlo )
    {
      v16 = (struct _STRDDA *)((char *)a1 + 28);
      v17 = a7 - a6;
      do
      {
        v25 = *(_DWORD *)v16;
        v22 = (struct _STRDDA *)((char *)v16 + 4);
        v18 = XLATEOBJ_iXlate(pxlo, *v9);
        v19 = v25;
        v23 = v18;
        if ( v25 )
        {
          v20 = (_DWORD *)((char *)a2 + 4 * v10 + 16);
          v10 += v25;
          do
          {
            *v20++ |= v23;
            --v19;
          }
          while ( v19 );
          v8 = a2;
        }
        else
        {
          v8 = a2;
          *((_DWORD *)a2 + v10 + 4) |= v18;
        }
        v16 = v22;
        ++v9;
        --v17;
      }
      while ( v17 );
    }
    else
    {
      v11 = a7 - a6;
      v12 = (XLATEOBJ *)((char *)a1 + 28);
      do
      {
        iUniq = v12->iUniq;
        pxloa = (XLATEOBJ *)&v12->flXlate;
        if ( v12->iUniq )
        {
          v14 = (int)v8 + 4 * v10 + 16;
          v10 += iUniq;
          v15 = (_DWORD *)v14;
          do
          {
            *v15++ |= *v9;
            --iUniq;
          }
          while ( iUniq );
          v8 = a2;
        }
        else
        {
          *((_DWORD *)v8 + v10 + 4) |= *v9;
        }
        v12 = pxloa;
        ++v9;
        --v11;
      }
      while ( v11 );
    }
  }
  return (struct _STRRUN *)((char *)v8 + 4 * v10 + 16);
}

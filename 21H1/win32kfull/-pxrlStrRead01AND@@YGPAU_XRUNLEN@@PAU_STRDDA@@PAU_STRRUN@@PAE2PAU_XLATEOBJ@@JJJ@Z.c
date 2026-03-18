/*
 * XREFs of ?pxrlStrRead01AND@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x4DED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__stdcall pxrlStrRead01AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // edx
  struct _STRRUN *v9; // edi
  int v10; // esi
  int v11; // ecx
  struct _STRDDA *v12; // ecx
  struct _XLATEOBJ *v13; // ebx
  int v14; // eax
  int v15; // ecx
  _DWORD *v16; // ecx
  int v17; // ecx
  _DWORD *v18; // ecx
  ULONG *pulXlate; // eax
  int v21; // [esp+Ch] [ebp-Ch]
  int v22; // [esp+10h] [ebp-8h]
  unsigned __int8 *v23; // [esp+14h] [ebp-4h]
  struct _STRDDA *v24; // [esp+20h] [ebp+8h]
  int v25; // [esp+28h] [ebp+10h]
  struct _XLATEOBJ *v26; // [esp+30h] [ebp+18h]

  v8 = a6 & 0x1F;
  v22 = 0;
  v23 = &a3[4 * (a6 >> 5)];
  v9 = a2;
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v26 = (struct _XLATEOBJ *)*pulXlate;
    v25 = pulXlate[1];
  }
  else
  {
    v26 = 0;
    v25 = 1;
  }
  v10 = 0;
  v11 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v11;
  if ( a6 < a7 )
  {
    v12 = (struct _STRDDA *)((char *)a1 + 28);
    v13 = v26;
    v24 = (struct _STRDDA *)((char *)a1 + 28);
    v21 = *(_DWORD *)v23;
    while ( 1 )
    {
      v14 = *(_DWORD *)v12;
      ++v22;
      if ( (v21 & dword_252A60[v8]) != 0 )
      {
        if ( v14 )
        {
          v18 = (_DWORD *)((char *)v9 + 4 * v10 + 16);
          v10 += v14;
          do
          {
            *v18++ &= v25;
            --v14;
          }
          while ( v14 );
          v9 = a2;
          v13 = v26;
        }
        else
        {
          *((_DWORD *)v9 + v10 + 4) &= v25;
        }
      }
      else if ( v14 )
      {
        v15 = v10 + 4;
        v10 += v14;
        v16 = (_DWORD *)((char *)v9 + 4 * v15);
        do
        {
          *v16++ &= (unsigned int)v13;
          --v14;
        }
        while ( v14 );
      }
      else
      {
        *((_DWORD *)v9 + v10 + 4) &= (unsigned int)v13;
      }
      v17 = v8 + 1;
      if ( ++a6 >= a7 )
        break;
      if ( (v17 & 0x20) != 0 )
      {
        v23 += 4;
        v21 = *(_DWORD *)v23;
      }
      v24 = (struct _STRDDA *)((char *)v24 + 4);
      v8 = (v17 & 0x20) == 0 ? v17 : 0;
      v12 = v24;
    }
  }
  return (struct _STRRUN *)((char *)v9 + 4 * v10 + 16);
}

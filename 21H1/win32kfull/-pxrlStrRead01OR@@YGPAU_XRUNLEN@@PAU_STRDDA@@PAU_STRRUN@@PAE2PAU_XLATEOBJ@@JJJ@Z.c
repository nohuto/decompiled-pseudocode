/*
 * XREFs of ?pxrlStrRead01OR@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x22957E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__stdcall pxrlStrRead01OR(
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
  ULONG *pulXlate; // eax
  int v11; // esi
  int v12; // ecx
  struct _STRDDA *v13; // ecx
  struct _XLATEOBJ *v14; // ebx
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // ecx
  _DWORD *v18; // ecx
  int v19; // ecx
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
  v11 = 0;
  v12 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v12;
  if ( a6 < a7 )
  {
    v13 = (struct _STRDDA *)((char *)a1 + 28);
    v14 = v26;
    v24 = (struct _STRDDA *)((char *)a1 + 28);
    v21 = *(_DWORD *)v23;
    while ( 1 )
    {
      v15 = *(_DWORD *)v13;
      ++v22;
      if ( (v21 & dword_252A60[v8]) != 0 )
      {
        if ( v15 )
        {
          v18 = (_DWORD *)((char *)v9 + 4 * v11 + 16);
          v11 += v15;
          do
          {
            *v18++ |= v25;
            --v15;
          }
          while ( v15 );
          v9 = a2;
          v14 = v26;
        }
        else
        {
          *((_DWORD *)v9 + v11 + 4) |= v25;
        }
      }
      else if ( v15 )
      {
        v16 = v11 + 4;
        v11 += v15;
        v17 = (_DWORD *)((char *)v9 + 4 * v16);
        do
        {
          *v17++ |= (unsigned int)v14;
          --v15;
        }
        while ( v15 );
      }
      else
      {
        *((_DWORD *)v9 + v11 + 4) |= (unsigned int)v14;
      }
      v19 = v8 + 1;
      if ( ++a6 >= a7 )
        break;
      if ( (v19 & 0x20) != 0 )
      {
        v23 += 4;
        v21 = *(_DWORD *)v23;
      }
      v24 = (struct _STRDDA *)((char *)v24 + 4);
      v8 = (v19 & 0x20) == 0 ? v19 : 0;
      v13 = v24;
    }
  }
  return (struct _STRRUN *)((char *)v9 + 4 * v11 + 16);
}

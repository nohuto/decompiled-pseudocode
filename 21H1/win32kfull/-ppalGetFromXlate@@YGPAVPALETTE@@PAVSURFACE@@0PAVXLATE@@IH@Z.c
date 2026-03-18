/*
 * XREFs of ?ppalGetFromXlate@@YGPAVPALETTE@@PAVSURFACE@@0PAVXLATE@@IH@Z @ 0x22714B
 * Callers:
 *     ?ppalGetFromXlate@@YGPAVPALETTE@@PAVSURFACE@@0PAVXLATE@@IH@Z @ 0x22714B (-ppalGetFromXlate@@YGPAVPALETTE@@PAVSURFACE@@0PAVXLATE@@IH@Z.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     ?ppalGetFromXlate@@YGPAVPALETTE@@PAVSURFACE@@0PAVXLATE@@IH@Z @ 0x22714B (-ppalGetFromXlate@@YGPAVPALETTE@@PAVSURFACE@@0PAVXLATE@@IH@Z.c)
 */

struct PALETTE *__userpurge ppalGetFromXlate@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct SURFACE *a3,
        struct SURFACE *a4,
        struct XLATE *a5,
        unsigned int a6,
        int a7)
{
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // ecx
  unsigned int v11; // [esp+0h] [ebp-Ch]
  int v12; // [esp+4h] [ebp-8h]

  if ( a4 == (struct SURFACE *)1 )
    v7 = a2[22];
  else
    v7 = a1[22];
  if ( v7 )
    return (struct PALETTE *)v7;
  if ( a3 )
  {
    v7 = a4 == (struct SURFACE *)1 ? *((_DWORD *)a3 + 9) : *((_DWORD *)a3 + 10);
    if ( v7 )
      return (struct PALETTE *)v7;
  }
  if ( a4 == (struct SURFACE *)1 )
  {
    v8 = (_DWORD *)a2[7];
    if ( v8 && (v8[364] & 0x100) != 0 )
    {
      v9 = a2[15];
LABEL_17:
      if ( v9 == v8[351] )
      {
        v7 = v8[278];
        if ( v7 )
          return (struct PALETTE *)v7;
      }
    }
  }
  else
  {
    v8 = (_DWORD *)a1[7];
    if ( v8 && (v8[364] & 0x100) == 0 )
    {
      v9 = a1[15];
      goto LABEL_17;
    }
  }
  if ( !a3 || (*((_BYTE *)a3 + 4) & 1) != 0 )
  {
    if ( a5 )
      return ppalGetFromXlate(a3, (struct SURFACE *)((a4 == (struct SURFACE *)1) + 1), 0, v11, v12);
  }
  return (struct PALETTE *)v7;
}

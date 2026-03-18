/*
 * XREFs of ulGetNearestIndexFromColorref @ 0x1C001E4F0
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00058E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreGetNearestColor @ 0x1C00A89F0 (GreGetNearestColor.c)
 * Callees:
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C001E580 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 */

tagPALETTEENTRY __fastcall ulGetNearestIndexFromColorref(__int64 a1, __int64 a2, tagPALETTEENTRY a3, unsigned int a4)
{
  tagPALETTEENTRY v5; // edx
  tagPALETTEENTRY result; // eax
  __int64 v7; // r8
  struct PALETTE *v8; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+10h] BYREF
  __int64 v10; // [rsp+48h] [rbp+18h] BYREF
  tagPALETTEENTRY v11; // [rsp+50h] [rbp+20h]

  v10 = a2;
  v9 = a1;
  v11 = a3;
  if ( a1 && (*(_DWORD *)(a1 + 24) & 0x800) == 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x1000000) == 0 )
    {
      if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
        return (unsigned int)a3.peRed < *(_DWORD *)(a1 + 28) ? (tagPALETTEENTRY)a3.peRed : 0;
      v11.peFlags = 0;
      v5 = v11;
      return (tagPALETTEENTRY)XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v9, v5, a4);
    }
    if ( a2 )
    {
      v5 = *(tagPALETTEENTRY *)(*(_QWORD *)(a2 + 112)
                              + 4LL
                              * ((unsigned int)*(unsigned __int16 *)&a3.peRed < *(_DWORD *)(a2 + 28)
                               ? *(unsigned __int16 *)&a3.peRed
                               : 0));
      return (tagPALETTEENTRY)XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v9, v5, a4);
    }
    return 0;
  }
  if ( (*(_DWORD *)&a3 & 0x3000000) != 0 )
  {
    if ( !a2 )
      return 0;
    v11.peFlags = 0;
    if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
    {
      result = v11;
      if ( *(unsigned int *)&v11 >= *(_DWORD *)(a2 + 28) )
        result = 0;
    }
    else
    {
      result = (tagPALETTEENTRY)XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v10, v11, a4);
      a2 = v10;
      a1 = v9;
    }
    if ( (struct PALETTE *)a2 == ppalDefault )
      goto LABEL_31;
    if ( a1 )
      v7 = *(_QWORD *)(a2 + 80);
    else
      v7 = *(_QWORD *)(a2 + 72);
    if ( v7 )
      return (tagPALETTEENTRY)*(unsigned __int8 *)(*(unsigned int *)&result + v7 + 4);
    a3 = *(tagPALETTEENTRY *)(*(_QWORD *)(a2 + 112) + 4LL * *(unsigned int *)&result);
    v11 = a3;
    if ( a3.peFlags == 2 )
      return (tagPALETTEENTRY)a3.peRed;
  }
  if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
    return (tagPALETTEENTRY)a3.peRed;
  v11.peFlags = 0;
  result = v11;
  if ( v11 == 0xFFFFFF )
  {
    result = (tagPALETTEENTRY)19;
LABEL_32:
    *(_DWORD *)&result += 236;
    return result;
  }
  if ( v11 )
  {
    v8 = ppalDefault;
    result = (tagPALETTEENTRY)XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v8, v11, a4);
  }
LABEL_31:
  if ( *(unsigned int *)&result >= 0xA )
    goto LABEL_32;
  return result;
}

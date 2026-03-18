/*
 * XREFs of _STROBJ_bGetAdvanceWidths@16 @ 0x225693
 * Callers:
 *     _NtGdiSTROBJ_bGetAdvanceWidths@16 @ 0x21ACC8 (_NtGdiSTROBJ_bGetAdvanceWidths@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?STROBJ_bGetAdvanceWidthsLinked@@YGHPAVESTROBJ@@KKPAU_POINTQF@@@Z @ 0x223CCC (-STROBJ_bGetAdvanceWidthsLinked@@YGHPAVESTROBJ@@KKPAU_POINTQF@@@Z.c)
 */

BOOL __stdcall STROBJ_bGetAdvanceWidths(STROBJ *pso, ULONG iFirst, ULONG c, POINTQF *pptqD)
{
  ULONG v4; // ecx
  ULONG v6; // edx
  ULONG v7; // ebx
  POINTQF *v8; // ecx
  DWORD *v9; // esi
  unsigned int v10; // [esp+0h] [ebp-2Ch]
  struct _POINTQF *v11; // [esp+4h] [ebp-28h]

  v4 = iFirst + c;
  if ( iFirst >= pso->cGlyphs || v4 > pso->cGlyphs || v4 < iFirst )
    return 0;
  if ( (pso[5].rclBkGround.left & 0x1400) != 0 )
    return STROBJ_bGetAdvanceWidthsLinked(iFirst, (int)pso, (struct ESTROBJ *)c, pptqD, v10, v11);
  v6 = pso[1].rclBkGround.left + 16 * iFirst;
  v7 = v6 + 16 * c;
  v8 = pptqD;
  if ( *(_DWORD *)(*(_DWORD *)pso[1].ulCharInc + 640) )
  {
    while ( v6 < v7 )
    {
      v8->x.HighPart = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 8);
      v8->x.LowPart = 0;
      v8->y.HighPart = 0;
      v8->y.LowPart = 0;
      v6 += 16;
      ++v8;
    }
  }
  else
  {
    while ( v6 < v7 )
    {
      v9 = (DWORD *)(*(_DWORD *)(v6 + 4) + 48);
      v8->x.LowPart = *v9++;
      v8->x.HighPart = *v9++;
      v8->y.LowPart = *v9;
      v8->y.HighPart = v9[1];
      ++v8;
      v6 += 16;
    }
  }
  return 1;
}

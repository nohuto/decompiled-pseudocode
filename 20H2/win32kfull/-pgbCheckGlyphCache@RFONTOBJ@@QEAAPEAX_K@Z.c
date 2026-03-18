/*
 * XREFs of ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C005F5A4
 * Callers:
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1C005F4F4 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C005F9A8 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C00624B8 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0147E10 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02D43F4 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 */

unsigned __int64 __fastcall RFONTOBJ::pgbCheckGlyphCache(RFONTOBJ *this, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  __int64 *v5; // rcx
  unsigned int v6; // r8d
  size_t v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 584LL);
  if ( v3 + a2 >= v3 )
  {
    if ( v3 + a2 <= *(_QWORD *)(v2 + 592) )
      return v3;
    v5 = *(__int64 **)(v2 + 576);
    if ( v5 && (v12 = *v5) != 0 )
    {
      v3 = v12 + 8;
      v13 = *(unsigned int *)(v2 + 552) - 8LL;
      *(_QWORD *)(v2 + 576) = v12;
      v14 = v13 + v12;
      *(_QWORD *)(v2 + 584) = v3;
      *(_QWORD *)(v2 + 592) = v14;
      if ( v3 + a2 <= v14 )
        return v3;
    }
    else
    {
      v6 = *(_DWORD *)(v2 + 560);
      if ( v6 )
        v7 = *(unsigned int *)(v2 + 552);
      else
        v7 = *(unsigned int *)(v2 + 548);
      if ( (*(_DWORD *)(v2 + 84) & 1) == 0 && v6 < *(_DWORD *)(v2 + 556) )
      {
        v8 = (unsigned int)v7;
        if ( a2 + 8 <= (unsigned __int64)(unsigned int)v7 )
        {
          v9 = (_QWORD *)PALLOCMEM2(v7);
          if ( v9 )
          {
            ++*(_DWORD *)(v2 + 560);
            v10 = *(_QWORD **)(v2 + 576);
            if ( v10 )
              *v10 = v9;
            else
              *(_QWORD *)(v2 + 568) = v9;
            *(_QWORD *)(v2 + 576) = v9;
            *v9 = 0LL;
            v11 = *(_QWORD *)(v2 + 576);
            v3 = v11 + 8;
            *(_QWORD *)(v2 + 584) = v11 + 8;
            *(_QWORD *)(v2 + 592) = v8 + v11 - 8;
            return v3;
          }
          EngSetLastError(8u);
        }
      }
    }
  }
  return 0LL;
}

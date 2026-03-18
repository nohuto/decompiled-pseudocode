/*
 * XREFs of ?bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z @ 0x1C02D41BC
 * Callers:
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1C005F4F4 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02D4528 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 */

__int64 __fastcall RFONTOBJ::bEnsureAuxCacheBuffer(RFONTOBJ *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax

  v3 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 624LL) < (unsigned __int64)a2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 616LL);
    if ( v4 )
      Win32FreePool(v4);
    *(_QWORD *)(*(_QWORD *)this + 616LL) = PALLOCMEM2((unsigned int)v3, 1667326791LL, 1);
    v5 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 616LL) )
    {
      *(_QWORD *)(v5 + 624) = 0LL;
      return 0LL;
    }
    *(_QWORD *)(v5 + 624) = v3;
  }
  return 1LL;
}

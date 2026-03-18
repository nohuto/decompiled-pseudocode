/*
 * XREFs of ?InternalEscapeEnabled@@YAEXZ @ 0x1C0308DB4
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x1C0301864 (DxgkpIsDrtEnabled.c)
 */

unsigned __int8 __fastcall InternalEscapeEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = 0;
  if ( g_OSTestSigningEnabled || DxgkpIsDrtEnabled(a1, a2, a3, a4) )
    return 1;
  return v4;
}

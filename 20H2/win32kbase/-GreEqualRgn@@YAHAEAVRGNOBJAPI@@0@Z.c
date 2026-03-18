/*
 * XREFs of ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C00A1144
 * Callers:
 *     GreEqualRgn @ 0x1C00A10E0 (GreEqualRgn.c)
 *     EngEqualRgn @ 0x1C014CCB0 (EngEqualRgn.c)
 * Callees:
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00A1170 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 */

__int64 __fastcall GreEqualRgn(struct RGNOBJAPI *a1, struct RGNOBJAPI *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)a2 )
      return RGNOBJ::bEqual(a1, a2);
  }
  return result;
}

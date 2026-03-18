/*
 * XREFs of ?bMiterInLimit@WIDENER@@IAEHVEVECTORFX@@@Z @ 0x235446
 * Callers:
 *     ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A (-vAddJoin@WIDENER@@IAEXH@Z.c)
 * Callees:
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

BOOL __thiscall WIDENER::bMiterInLimit(int *this, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v7[2]; // [esp+4h] [ebp-10h] BYREF
  int v8[2]; // [esp+Ch] [ebp-8h] BYREF

  EXFORMOBJ::bXform((EXFORMOBJ *)(this + 202), (struct _VECTORFX *)&a2, (struct _VECTORL *)&a2, 1u);
  v8[0] = 0;
  v8[1] = 0;
  v7[0] = 0;
  v7[1] = 0;
  LODWORD(v4) = v8;
  ltoef_c(v4, a2, v8);
  LODWORD(v5) = v7;
  ltoef_c(v5, a3, v7);
  mulff3_c(v8, v8, v8);
  mulff3_c(v7, v7, v7);
  addff3_c(v8, v8, v7);
  return !EFLOAT::operator>(v8, this + 272);
}

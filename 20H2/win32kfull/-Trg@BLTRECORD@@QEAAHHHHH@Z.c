/*
 * XREFs of ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0103114
 * Callers:
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0097914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 */

__int64 __fastcall BLTRECORD::Trg(struct _POINTL *this, LONG a2, LONG a3, int a4, int a5)
{
  this[19].y = a3;
  this[20].y = a5 + a3;
  this[19].x = a2;
  this[20].x = a2 + a4;
  return EXFORMOBJ::bXform((EXFORMOBJ *)this, this + 19);
}

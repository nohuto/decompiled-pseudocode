/*
 * XREFs of ?SetToZeroMatrix@CMILMatrix@@QEAAXXZ @ 0x18008B340
 * Callers:
 *     ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x18008B2D8 (--0NodeEffects@CDrawingContext@@QEAA@XZ.c)
 * Callees:
 *     ?SetMatrix@CMILMatrix@@QEAAXMMMMMMMMMMMMMMMM@Z @ 0x180260D54 (-SetMatrix@CMILMatrix@@QEAAXMMMMMMMMMMMMMMMM@Z.c)
 */

void __fastcall CMILMatrix::SetToZeroMatrix(CMILMatrix *this)
{
  CMILMatrix::SetMatrix(this, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
  *((_BYTE *)this + 65) &= 0xD5u;
  *((_BYTE *)this + 65) |= 0x15u;
  *((_BYTE *)this + 64) = 119;
}

/*
 * XREFs of ?SetToZeroMatrix@CMILMatrix@@QEAAXXZ @ 0x180213744
 * Callers:
 *     ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x180178B1C (--0NodeEffects@CDrawingContext@@QEAA@XZ.c)
 * Callees:
 *     ?SetMatrix@CMILMatrix@@QEAAXMMMMMMMMMMMMMMMM@Z @ 0x18021351C (-SetMatrix@CMILMatrix@@QEAAXMMMMMMMMMMMMMMMM@Z.c)
 */

void __fastcall CMILMatrix::SetToZeroMatrix(CMILMatrix *this)
{
  CMILMatrix::SetMatrix(this, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
  *((_WORD *)this + 32) = 21887;
}

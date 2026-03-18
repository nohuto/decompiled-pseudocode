/*
 * XREFs of ?GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800D0750
 * Callers:
 *     <none>
 * Callees:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800D07A8 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CScaleTransform::GetRealization(
        CScaleTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  CMILMatrix::SetScale(
    a3,
    *((float *)this + 38),
    *((float *)this + 39),
    1.0,
    *((float *)this + 40),
    *((float *)this + 41),
    0.0);
}

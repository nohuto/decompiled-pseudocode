/*
 * XREFs of ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801F8BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRotateTransform::GetRealization(
        CRotateTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  CMILMatrix::Set2DRotation(a3, *((float *)this + 38) * 0.017453292, *((float *)this + 39), *((float *)this + 40));
}

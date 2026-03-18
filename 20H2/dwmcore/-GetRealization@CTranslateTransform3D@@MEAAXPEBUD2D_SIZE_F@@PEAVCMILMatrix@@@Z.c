/*
 * XREFs of ?GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801F4670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTranslateTransform3D::GetRealization(
        CTranslateTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  int v5; // xmm2_4

  v3 = *((_DWORD *)this + 38);
  v4 = *((_DWORD *)this + 39);
  v5 = *((_DWORD *)this + 40);
  *(_QWORD *)a3 = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_DWORD *)a3 + 12) = v3;
  *((_DWORD *)a3 + 13) = v4;
  *((_DWORD *)a3 + 14) = v5;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((_WORD *)a3 + 32) = 15700;
}

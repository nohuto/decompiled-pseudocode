/*
 * XREFs of ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x1C01A4084
 * Callers:
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 * Callees:
 *     sqrt_0 @ 0x1C00D285D (sqrt_0.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x1C01A36FC (-D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z.c)
 */

char __fastcall CInertiaManager::ValidateInertiaInfo(
        CInertiaManager *this,
        struct INERTIA_INFO *a2,
        D3DVALUE *a3,
        struct _D3DMATRIX *a4,
        double *a5)
{
  char v8; // bl
  unsigned int v9; // eax
  int v10; // ecx
  double v11; // xmm8_8
  double v12; // xmm7_8
  double v13; // xmm0_8
  float v14; // xmm1_4
  CInertiaManager *v16; // [rsp+A0h] [rbp+8h] BYREF
  D3DVALUE *v17; // [rsp+B0h] [rbp+18h]
  struct _D3DMATRIX *v18; // [rsp+B8h] [rbp+20h]

  v18 = a4;
  v17 = a3;
  v16 = this;
  v8 = 1;
  v9 = *((_DWORD *)a2 + 2);
  if ( v9 <= 8 )
  {
    v10 = 278;
    if ( _bittest(&v10, v9) )
    {
      LODWORD(v16) = 0;
      v11 = *((float *)a2 + 1);
      v12 = *(float *)a2;
      v13 = sqrt_0(v12 * v12 + v11 * v11);
      if ( v13 <= 0.0 )
      {
        v8 = 0;
      }
      else
      {
        v14 = v12 / v13;
        *(float *)a2 = v14;
        *((float *)a2 + 1) = v11 / v13;
      }
      if ( !v8 )
        return v8;
      if ( !a3 )
      {
        *a5 = 0.0;
        return v8;
      }
      memset(a4, 0, sizeof(struct _D3DMATRIX));
      a4->_11 = a3[4];
      a4->_12 = a3[5];
      a4->_21 = a3[6];
      a4->_22 = a3[7];
      a4->_33 = 1.0;
      a4->_41 = a3[8];
      a4->_42 = a3[9];
      a4->_44 = 1.0;
      if ( (unsigned int)D3DXMatrixDeterminant((float *)&v16, a4) )
      {
        *a5 = v13;
        return v8;
      }
    }
  }
  return 0;
}

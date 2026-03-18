/*
 * XREFs of ?vInitPageToDevice@EXFORMOBJ@@QAEXAAVXDCOBJ@@PAVMATRIX@@@Z @ 0x21D3B8
 * Callers:
 *     _GreGetTransform@12 @ 0x21D5A2 (_GreGetTransform@12.c)
 * Callees:
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     ?vComputeWtoDAccelFlags@EXFORMOBJ@@QAEXXZ @ 0x21D361 (-vComputeWtoDAccelFlags@EXFORMOBJ@@QAEXXZ.c)
 */

void __thiscall EXFORMOBJ::vInitPageToDevice(EFLOAT **this, struct XDCOBJ *a2, struct MATRIX *a3)
{
  int v4; // edx
  EFLOAT *v5; // eax
  EFLOAT *v6; // eax
  int v7; // ecx
  EFLOAT *v8; // edx
  int v9; // ecx
  EFLOAT *v10; // edx
  int v11; // ecx
  EFLOAT *v12; // edx

  *this = a3;
  v4 = *(_DWORD *)a2;
  *(_DWORD *)a3 = *(_DWORD *)(*(_DWORD *)a2 + 420);
  *((_DWORD *)a3 + 1) = *(_DWORD *)(v4 + 424);
  v5 = *this;
  *((_DWORD *)v5 + 2) = 0;
  *((_DWORD *)v5 + 3) = 0;
  v6 = *this;
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 5) = 0;
  v7 = *(_DWORD *)a2;
  v8 = *this;
  *((_DWORD *)v8 + 6) = *(_DWORD *)(*(_DWORD *)a2 + 428);
  *((_DWORD *)v8 + 7) = *(_DWORD *)(v7 + 432);
  v9 = *(_DWORD *)a2;
  v10 = *this;
  *((_DWORD *)v10 + 8) = *(_DWORD *)(*(_DWORD *)a2 + 436);
  *((_DWORD *)v10 + 9) = *(_DWORD *)(v9 + 440);
  v11 = *(_DWORD *)a2;
  v12 = *this;
  *((_DWORD *)v12 + 10) = *(_DWORD *)(*(_DWORD *)a2 + 444);
  *((_DWORD *)v12 + 11) = *(_DWORD *)(v11 + 448);
  eftol_c((int *)*this + 8, (int *)*this + 12, 1);
  eftol_c((int *)*this + 10, (int *)*this + 13, 1);
  EXFORMOBJ::vComputeWtoDAccelFlags(this);
}

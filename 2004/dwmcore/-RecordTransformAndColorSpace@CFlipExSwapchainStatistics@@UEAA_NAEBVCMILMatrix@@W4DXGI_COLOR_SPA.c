/*
 * XREFs of ?RecordTransformAndColorSpace@CFlipExSwapchainStatistics@@UEAA_NAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180017C60
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcMatrixEpsilonValue@@YA?AW4MatrixEpsilonValue@@M@Z @ 0x180017CF0 (-CalcMatrixEpsilonValue@@YA-AW4MatrixEpsilonValue@@M@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BE1EC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

bool __fastcall CFlipExSwapchainStatistics::RecordTransformAndColorSpace(
        CFlipExSwapchainStatistics *this,
        const struct CMILMatrix *a2,
        enum DXGI_COLOR_SPACE_TYPE a3)
{
  char v4; // al
  int v5; // r11d
  int v6; // r10d
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // r9d

  v4 = CMILMatrix::Is2DAxisAlignedPreserving<1>(a2);
  LOBYTE(v6) = v5 + 1;
  if ( v4 )
  {
    v7 = ((__int64 (*)(void))CalcMatrixEpsilonValue)();
    v11 = CalcMatrixEpsilonValue(v9, v8, v10, v7);
    v15 = CalcMatrixEpsilonValue(v13, v12, v11, v14);
    v19 = CalcMatrixEpsilonValue(v16, v15, v17, v18);
    if ( v22 == v6 )
    {
      if ( !v21 && !v20 && v19 == v6 )
        v5 = v6;
    }
    else if ( v22 )
    {
      if ( v22 == -1 && !v21 && !v20 && v19 == -1 )
        v5 = 3;
    }
    else if ( v21 == v6 )
    {
      if ( v20 == -1 && !v19 )
        v5 = 2;
    }
    else if ( v21 == -1 && v20 == v6 && !v19 )
    {
      v5 = 4;
    }
  }
  if ( *((_DWORD *)this + 5) == v5 )
    return 0;
  *((_DWORD *)this + 5) = v5;
  return v6;
}

/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1802105BC
 * Callers:
 *     ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801F6380 (-GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3)
{
  float *v3; // rax
  __int64 v4; // rdx

  v3 = (float *)((char *)this + 48);
  v4 = 4LL;
  do
  {
    *v3 = (float)((float)(a2 * *(v3 - 12)) + (float)(a3 * *(v3 - 8))) + *v3;
    ++v3;
    --v4;
  }
  while ( v4 );
  *((_BYTE *)this + 64) &= 0xFCu;
  *((_BYTE *)this + 65) &= 0x3Fu;
}
